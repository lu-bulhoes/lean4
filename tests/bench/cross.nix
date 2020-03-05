{ pkgs ? import ./nixpkgs.nix }:

let
  # pin Lean commit to avoid rebuilds
  # 2020-03-04
  lean = import (builtins.fetchGit { url = ../../.; rev = "21ca3709612ff7a05f0e5aa0849d776c1bc6d751"; }) {};
  # for binarytrees.hs
  ghcPackages = p: [ p.parallel ];
  ghc = pkgs.haskell.packages.ghc883.ghcWithPackages ghcPackages; #.override { withLLVM = true; };
  ocaml = pkgs.ocaml-ng.ocamlPackages_latest.ocaml;
  # note that this will need to be compiled from source
  ocamlFlambda = ocaml.override { flambdaSupport = true; };
  mlton = pkgs.mlton;
  mlkit = pkgs.stdenv.mkDerivation {
    name = "mlkit";
    src = pkgs.fetchzip {
      url = "https://github.com/melsman/mlkit/releases/download/mlkit-4.4.2/mlkit_bin_dist.tgz";
      sha256 = "079299h5m3gkk10qpn2r6va7kjj0sr9z3cs0knjz3qv1cldpzj7x";
    };
    buildInputs = [ pkgs.makeWrapper ];
    dontBuild = true;
    installPhase = ''
      mkdir $out
      cp -R . $out
    '';
    preFixup = ''
      wrapProgram $out/bin/mlkit --set PATH ${pkgs.binutils}/bin:${pkgs.gcc}/bin\
        --set SML_LIB $out/lib/mlkit
    '';
  };
  swift = pkgs.swift;
  temci = import (builtins.fetchGit { url = http://github.com/parttimenerd/temci.git; rev = "ba1505a7c2de471a5821a2643b34de2d1c1af03e"; }) {};
in pkgs.stdenv.mkDerivation rec {
  name = "bench";
  src = pkgs.lib.sourceFilesBySuffices ./. ["Makefile" "leanpkg.path" "temci.yaml" ".py" ".lean" ".hs" ".ml" ".sml"];
  LEAN_BIN = "${lean}/bin";
  #LEAN_GCC_BIN = "${lean { stdenv = pkgs.gcc9Stdenv; }}/bin";
  LEAN_NO_REUSE_BIN = "${lean.overrideAttrs (attrs: {
    prePatch = ''
      substituteInPlace src/Init/Lean/Compiler/IR.lean --replace "decls.map Decl.insertResetReuse" "decls"
	  substituteInPlace src/shell/CMakeLists.txt --replace "install(TARGETS lean DESTINATION bin)" "install(PROGRAMS $<TARGET_FILE:lean_stage2> DESTINATION bin RENAME lean)"
    '';
	buildFlags = [ "lean_stage2" ];
  })}/bin";
  LEAN_NO_BORROW_BIN = "${lean.overrideAttrs (attrs: {
    prePatch = ''
      substituteInPlace src/Init/Lean/Compiler/IR.lean --replace "inferBorrow" "pure"
	  substituteInPlace src/shell/CMakeLists.txt --replace "install(TARGETS lean DESTINATION bin)" "install(PROGRAMS $<TARGET_FILE:lean_stage2> DESTINATION bin RENAME lean)"
    '';
	buildFlags = [ "lean_stage2" ];
  })}/bin";
  LEAN_NO_ST_BIN = "${lean.overrideAttrs (attrs: { patches = [ ./disable-st.patch ]; })}/bin";
  PARSER_TEST_FILE = lean.src + "/src/Init/Core.lean";
  GHC = "${ghc}/bin/ghc";
  OCAML = "${ocaml}/bin/ocamlopt.opt";
  #OCAML_FLAMBDA = "${ocamlFlambda}/bin/ocamlopt.opt";
  MLTON_BIN = "${mlton}/bin";
  MLKIT = "${mlkit}/bin/mlkit";
  SWIFTC = "${swift}/bin/swiftc";
  TEMCI = "${temci}/bin/temci";
  buildInputs = with pkgs; [
    gmp # needed by leanc
    (python3.withPackages (ps: [ temci ]))
    temci
    pkgs.linuxPackages.perf time unixtools.column
  ];
  patchPhase = ''
    patchShebangs .
  '';
  installPhase = ''
    mkdir $out
    cp -r report *.csv $out
  '';
}

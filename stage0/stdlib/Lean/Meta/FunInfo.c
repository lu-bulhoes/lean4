// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: Init Lean.Meta.Basic Lean.Meta.InferType
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Meta_TransparencyMode_hash(uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassExpensive___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1;
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar(lean_object*);
lean_object* l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassQuick___main(lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_4__collectDeps___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t l_Option_hash___at_Lean_Meta_InfoCacheKey_Hashable___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_4__collectDeps(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
uint8_t l_Lean_Meta_TransparencyMode_beq(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshId___rarg(lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Meta_FunInfo_6__getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_BinderInfo_beq(uint8_t, uint8_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
size_t lean_usize_mix_hash(size_t, size_t);
lean_object* l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_Inhabited;
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_1__checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_ctor_get_uint8(x_5, sizeof(void*)*2);
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = l_Lean_Meta_TransparencyMode_beq(x_10, x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_4, x_17);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_18;
goto _start;
}
else
{
if (lean_obj_tag(x_12) == 0)
{
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_20; 
x_20 = lean_expr_eqv(x_11, x_14);
lean_dec(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_4, x_21);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_4, x_26);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_27;
goto _start;
}
}
else
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_14);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_4, x_29);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_30;
goto _start;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_nat_dec_eq(x_33, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_free_object(x_15);
lean_dec(x_14);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_4, x_36);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_37;
goto _start;
}
else
{
uint8_t x_39; 
x_39 = lean_expr_eqv(x_11, x_14);
lean_dec(x_14);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_free_object(x_15);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_add(x_4, x_40);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_41;
goto _start;
}
else
{
lean_object* x_43; 
x_43 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
lean_ctor_set(x_15, 0, x_43);
return x_15;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_12, 0);
x_45 = lean_ctor_get(x_15, 0);
lean_inc(x_45);
lean_dec(x_15);
x_46 = lean_nat_dec_eq(x_44, x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_14);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_4, x_47);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_48;
goto _start;
}
else
{
uint8_t x_50; 
x_50 = lean_expr_eqv(x_11, x_14);
lean_dec(x_14);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_4, x_51);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_52;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
}
}
}
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get_uint8(x_11, sizeof(void*)*2);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = l_Lean_Meta_TransparencyMode_beq(x_13, x_16);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
x_20 = lean_box(0);
return x_20;
}
else
{
if (lean_obj_tag(x_15) == 0)
{
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_21; 
x_21 = lean_expr_eqv(x_14, x_17);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_12);
x_22 = lean_box(0);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_12);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
x_24 = lean_box(0);
return x_24;
}
}
else
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_25; 
lean_dec(x_17);
lean_dec(x_12);
x_25 = lean_box(0);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_free_object(x_18);
lean_dec(x_17);
lean_dec(x_12);
x_30 = lean_box(0);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_expr_eqv(x_14, x_17);
lean_dec(x_17);
if (x_31 == 0)
{
lean_object* x_32; 
lean_free_object(x_18);
lean_dec(x_12);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_ctor_set(x_18, 0, x_12);
return x_18;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_15, 0);
x_34 = lean_ctor_get(x_18, 0);
lean_inc(x_34);
lean_dec(x_18);
x_35 = lean_nat_dec_eq(x_33, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_17);
lean_dec(x_12);
x_36 = lean_box(0);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_expr_eqv(x_14, x_17);
lean_dec(x_17);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_12);
x_38 = lean_box(0);
return x_38;
}
else
{
lean_object* x_39; 
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_12);
return x_39;
}
}
}
}
}
}
}
case 1:
{
lean_object* x_40; size_t x_41; 
x_40 = lean_ctor_get(x_10, 0);
lean_inc(x_40);
lean_dec(x_10);
x_41 = x_2 >> x_5;
x_1 = x_40;
x_2 = x_41;
goto _start;
}
default: 
{
lean_object* x_43; 
x_43 = lean_box(0);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3(x_44, x_45, lean_box(0), x_46, x_3);
lean_dec(x_45);
lean_dec(x_44);
return x_47;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_TransparencyMode_hash(x_4);
x_8 = l_Lean_Expr_hash(x_5);
x_9 = l_Option_hash___at_Lean_Meta_InfoCacheKey_Hashable___spec__1(x_6);
x_10 = lean_usize_mix_hash(x_8, x_9);
x_11 = lean_usize_mix_hash(x_7, x_10);
x_12 = l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2(x_3, x_11, x_2);
return x_12;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_array_fget(x_5, x_2);
x_23 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
x_26 = lean_ctor_get_uint8(x_22, sizeof(void*)*2);
x_27 = lean_ctor_get(x_22, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
x_29 = l_Lean_Meta_TransparencyMode_beq(x_23, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_6);
lean_dec(x_5);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_2, x_30);
lean_dec(x_2);
x_2 = x_31;
goto _start;
}
else
{
if (lean_obj_tag(x_25) == 0)
{
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_33; 
x_33 = lean_expr_eqv(x_24, x_27);
lean_dec(x_27);
lean_dec(x_24);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_6);
lean_dec(x_5);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_2, x_34);
lean_dec(x_2);
x_2 = x_35;
goto _start;
}
else
{
lean_object* x_37; 
lean_dec(x_1);
x_37 = lean_box(0);
x_17 = x_37;
goto block_21;
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_6);
lean_dec(x_5);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
lean_dec(x_2);
x_2 = x_39;
goto _start;
}
}
else
{
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_6);
lean_dec(x_5);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_2, x_41);
lean_dec(x_2);
x_2 = x_42;
goto _start;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_25, 0);
lean_inc(x_44);
lean_dec(x_25);
x_45 = lean_ctor_get(x_28, 0);
lean_inc(x_45);
lean_dec(x_28);
x_46 = lean_nat_dec_eq(x_44, x_45);
lean_dec(x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_2, x_47);
lean_dec(x_2);
x_2 = x_48;
goto _start;
}
else
{
uint8_t x_50; 
x_50 = lean_expr_eqv(x_24, x_27);
lean_dec(x_27);
lean_dec(x_24);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_6);
lean_dec(x_5);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_2, x_51);
lean_dec(x_2);
x_2 = x_52;
goto _start;
}
else
{
lean_object* x_54; 
lean_dec(x_1);
x_54 = lean_box(0);
x_17 = x_54;
goto block_21;
}
}
}
}
}
block_21:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_18 = lean_array_fset(x_5, x_2, x_3);
x_19 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; size_t x_25; lean_object* x_26; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = 1;
x_12 = x_1 - x_11;
x_13 = 5;
x_14 = x_13 * x_12;
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_17 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
x_20 = l_Lean_Meta_TransparencyMode_hash(x_17);
x_21 = l_Lean_Expr_hash(x_18);
lean_dec(x_18);
x_22 = l_Option_hash___at_Lean_Meta_InfoCacheKey_Hashable___spec__1(x_19);
lean_dec(x_19);
x_23 = lean_usize_mix_hash(x_21, x_22);
x_24 = lean_usize_mix_hash(x_20, x_23);
x_25 = x_24 >> x_14;
x_26 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_6, x_25, x_1, x_9, x_10);
x_5 = x_16;
x_6 = x_26;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_19, sizeof(void*)*2);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
x_27 = l_Lean_Meta_TransparencyMode_beq(x_21, x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_free_object(x_15);
x_28 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_array_fset(x_17, x_12, x_29);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_30);
return x_1;
}
else
{
if (lean_obj_tag(x_23) == 0)
{
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_31; 
x_31 = lean_expr_eqv(x_22, x_25);
lean_dec(x_25);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_free_object(x_15);
x_32 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_array_fset(x_17, x_12, x_33);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
else
{
lean_object* x_35; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_35 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_35);
return x_1;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_22);
lean_free_object(x_15);
x_36 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_array_fset(x_17, x_12, x_37);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_38);
return x_1;
}
}
else
{
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_free_object(x_15);
x_39 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_array_fset(x_17, x_12, x_40);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_23, 0);
lean_inc(x_42);
lean_dec(x_23);
x_43 = lean_ctor_get(x_26, 0);
lean_inc(x_43);
lean_dec(x_26);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_43);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_25);
lean_dec(x_22);
lean_free_object(x_15);
x_45 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
else
{
uint8_t x_48; 
x_48 = lean_expr_eqv(x_22, x_25);
lean_dec(x_25);
lean_dec(x_22);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_free_object(x_15);
x_49 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_array_fset(x_17, x_12, x_50);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_51);
return x_1;
}
else
{
lean_object* x_52; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_52 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_52);
return x_1;
}
}
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_53 = lean_ctor_get(x_15, 0);
x_54 = lean_ctor_get(x_15, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_15);
x_55 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_56 = lean_ctor_get(x_4, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_4, 1);
lean_inc(x_57);
x_58 = lean_ctor_get_uint8(x_53, sizeof(void*)*2);
x_59 = lean_ctor_get(x_53, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
x_61 = l_Lean_Meta_TransparencyMode_beq(x_55, x_58);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_56);
x_62 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_array_fset(x_17, x_12, x_63);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_64);
return x_1;
}
else
{
if (lean_obj_tag(x_57) == 0)
{
if (lean_obj_tag(x_60) == 0)
{
uint8_t x_65; 
x_65 = lean_expr_eqv(x_56, x_59);
lean_dec(x_59);
lean_dec(x_56);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_array_fset(x_17, x_12, x_67);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_68);
return x_1;
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_54);
lean_dec(x_53);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_4);
lean_ctor_set(x_69, 1, x_5);
x_70 = lean_array_fset(x_17, x_12, x_69);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_70);
return x_1;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_56);
x_71 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_array_fset(x_17, x_12, x_72);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_73);
return x_1;
}
}
else
{
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_56);
x_74 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_array_fset(x_17, x_12, x_75);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_76);
return x_1;
}
else
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_77 = lean_ctor_get(x_57, 0);
lean_inc(x_77);
lean_dec(x_57);
x_78 = lean_ctor_get(x_60, 0);
lean_inc(x_78);
lean_dec(x_60);
x_79 = lean_nat_dec_eq(x_77, x_78);
lean_dec(x_78);
lean_dec(x_77);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_59);
lean_dec(x_56);
x_80 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = lean_array_fset(x_17, x_12, x_81);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_82);
return x_1;
}
else
{
uint8_t x_83; 
x_83 = lean_expr_eqv(x_56, x_59);
lean_dec(x_59);
lean_dec(x_56);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_53, x_54, x_4, x_5);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_array_fset(x_17, x_12, x_85);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_86);
return x_1;
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_54);
lean_dec(x_53);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_4);
lean_ctor_set(x_87, 1, x_5);
x_88 = lean_array_fset(x_17, x_12, x_87);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_88);
return x_1;
}
}
}
}
}
}
}
case 1:
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_15);
if (x_89 == 0)
{
lean_object* x_90; size_t x_91; size_t x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_15, 0);
x_91 = x_2 >> x_9;
x_92 = x_3 + x_8;
x_93 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_90, x_91, x_92, x_4, x_5);
lean_ctor_set(x_15, 0, x_93);
x_94 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_94);
return x_1;
}
else
{
lean_object* x_95; size_t x_96; size_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_95 = lean_ctor_get(x_15, 0);
lean_inc(x_95);
lean_dec(x_15);
x_96 = x_2 >> x_9;
x_97 = x_3 + x_8;
x_98 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_95, x_96, x_97, x_4, x_5);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_array_fset(x_17, x_12, x_99);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_100);
return x_1;
}
}
default: 
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_4);
lean_ctor_set(x_101, 1, x_5);
x_102 = lean_array_fset(x_17, x_12, x_101);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_102);
return x_1;
}
}
}
}
else
{
lean_object* x_103; size_t x_104; size_t x_105; size_t x_106; size_t x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_103 = lean_ctor_get(x_1, 0);
lean_inc(x_103);
lean_dec(x_1);
x_104 = 1;
x_105 = 5;
x_106 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_107 = x_2 & x_106;
x_108 = lean_usize_to_nat(x_107);
x_109 = lean_array_get_size(x_103);
x_110 = lean_nat_dec_lt(x_108, x_109);
lean_dec(x_109);
if (x_110 == 0)
{
lean_object* x_111; 
lean_dec(x_108);
lean_dec(x_5);
lean_dec(x_4);
x_111 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_111, 0, x_103);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_array_fget(x_103, x_108);
x_113 = lean_box(2);
x_114 = lean_array_fset(x_103, x_108, x_113);
switch (lean_obj_tag(x_112)) {
case 0:
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_115 = lean_ctor_get(x_112, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_112, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_117 = x_112;
} else {
 lean_dec_ref(x_112);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
x_119 = lean_ctor_get(x_4, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_4, 1);
lean_inc(x_120);
x_121 = lean_ctor_get_uint8(x_115, sizeof(void*)*2);
x_122 = lean_ctor_get(x_115, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_115, 1);
lean_inc(x_123);
x_124 = l_Lean_Meta_TransparencyMode_beq(x_118, x_121);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_123);
lean_dec(x_122);
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_117);
x_125 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_array_fset(x_114, x_108, x_126);
lean_dec(x_108);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_127);
return x_128;
}
else
{
if (lean_obj_tag(x_120) == 0)
{
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_129; 
x_129 = lean_expr_eqv(x_119, x_122);
lean_dec(x_122);
lean_dec(x_119);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_117);
x_130 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_131 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_131, 0, x_130);
x_132 = lean_array_fset(x_114, x_108, x_131);
lean_dec(x_108);
x_133 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_133, 0, x_132);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_116);
lean_dec(x_115);
if (lean_is_scalar(x_117)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_117;
}
lean_ctor_set(x_134, 0, x_4);
lean_ctor_set(x_134, 1, x_5);
x_135 = lean_array_fset(x_114, x_108, x_134);
lean_dec(x_108);
x_136 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_136, 0, x_135);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_123);
lean_dec(x_122);
lean_dec(x_119);
lean_dec(x_117);
x_137 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_138 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_139 = lean_array_fset(x_114, x_108, x_138);
lean_dec(x_108);
x_140 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_140, 0, x_139);
return x_140;
}
}
else
{
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_122);
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_117);
x_141 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_142 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_142, 0, x_141);
x_143 = lean_array_fset(x_114, x_108, x_142);
lean_dec(x_108);
x_144 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_144, 0, x_143);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_145 = lean_ctor_get(x_120, 0);
lean_inc(x_145);
lean_dec(x_120);
x_146 = lean_ctor_get(x_123, 0);
lean_inc(x_146);
lean_dec(x_123);
x_147 = lean_nat_dec_eq(x_145, x_146);
lean_dec(x_146);
lean_dec(x_145);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_122);
lean_dec(x_119);
lean_dec(x_117);
x_148 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = lean_array_fset(x_114, x_108, x_149);
lean_dec(x_108);
x_151 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_151, 0, x_150);
return x_151;
}
else
{
uint8_t x_152; 
x_152 = lean_expr_eqv(x_119, x_122);
lean_dec(x_122);
lean_dec(x_119);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_117);
x_153 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_115, x_116, x_4, x_5);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
x_155 = lean_array_fset(x_114, x_108, x_154);
lean_dec(x_108);
x_156 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_156, 0, x_155);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_116);
lean_dec(x_115);
if (lean_is_scalar(x_117)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_117;
}
lean_ctor_set(x_157, 0, x_4);
lean_ctor_set(x_157, 1, x_5);
x_158 = lean_array_fset(x_114, x_108, x_157);
lean_dec(x_108);
x_159 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_159, 0, x_158);
return x_159;
}
}
}
}
}
}
case 1:
{
lean_object* x_160; lean_object* x_161; size_t x_162; size_t x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_160 = lean_ctor_get(x_112, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 x_161 = x_112;
} else {
 lean_dec_ref(x_112);
 x_161 = lean_box(0);
}
x_162 = x_2 >> x_105;
x_163 = x_3 + x_104;
x_164 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_160, x_162, x_163, x_4, x_5);
if (lean_is_scalar(x_161)) {
 x_165 = lean_alloc_ctor(1, 1, 0);
} else {
 x_165 = x_161;
}
lean_ctor_set(x_165, 0, x_164);
x_166 = lean_array_fset(x_114, x_108, x_165);
lean_dec(x_108);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_166);
return x_167;
}
default: 
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_4);
lean_ctor_set(x_168, 1, x_5);
x_169 = lean_array_fset(x_114, x_108, x_168);
lean_dec(x_108);
x_170 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_170, 0, x_169);
return x_170;
}
}
}
}
}
else
{
lean_object* x_171; lean_object* x_172; size_t x_173; uint8_t x_174; 
x_171 = lean_unsigned_to_nat(0u);
x_172 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__6(x_1, x_171, x_4, x_5);
x_173 = 7;
x_174 = x_173 <= x_3;
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; uint8_t x_177; 
x_175 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_172);
x_176 = lean_unsigned_to_nat(4u);
x_177 = lean_nat_dec_lt(x_175, x_176);
lean_dec(x_175);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_178 = lean_ctor_get(x_172, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_172, 1);
lean_inc(x_179);
lean_dec(x_172);
x_180 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
x_181 = l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7(x_3, x_178, x_179, x_178, x_171, x_180);
lean_dec(x_179);
lean_dec(x_178);
return x_181;
}
else
{
return x_172;
}
}
else
{
return x_172;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = 1;
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = l_Lean_Meta_TransparencyMode_hash(x_10);
x_14 = l_Lean_Expr_hash(x_11);
lean_dec(x_11);
x_15 = l_Option_hash___at_Lean_Meta_InfoCacheKey_Hashable___spec__1(x_12);
lean_dec(x_12);
x_16 = lean_usize_mix_hash(x_14, x_15);
x_17 = lean_usize_mix_hash(x_13, x_16);
x_18 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_5, x_17, x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_18);
return x_1;
}
else
{
lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = 1;
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_20, x_22);
lean_dec(x_20);
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
x_27 = l_Lean_Meta_TransparencyMode_hash(x_24);
x_28 = l_Lean_Expr_hash(x_25);
lean_dec(x_25);
x_29 = l_Option_hash___at_Lean_Meta_InfoCacheKey_Hashable___spec__1(x_26);
lean_dec(x_26);
x_30 = lean_usize_mix_hash(x_28, x_29);
x_31 = lean_usize_mix_hash(x_27, x_30);
x_32 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_19, x_31, x_21, x_2, x_3);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
return x_33;
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_1__checkFunInfoCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_5, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_7);
x_11 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_apply_2(x_3, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 2);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
x_22 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_21, x_10, x_16);
lean_ctor_set(x_14, 1, x_22);
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 2);
x_26 = lean_ctor_get(x_14, 3);
x_27 = lean_ctor_get(x_14, 4);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
lean_inc(x_16);
x_28 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_24, x_10, x_16);
x_29 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_26);
lean_ctor_set(x_29, 4, x_27);
lean_ctor_set(x_13, 2, x_29);
return x_12;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_30 = lean_ctor_get(x_13, 0);
x_31 = lean_ctor_get(x_13, 1);
x_32 = lean_ctor_get(x_13, 3);
x_33 = lean_ctor_get(x_13, 4);
x_34 = lean_ctor_get(x_13, 5);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_13);
x_35 = lean_ctor_get(x_14, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_14, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_14, 3);
lean_inc(x_38);
x_39 = lean_ctor_get(x_14, 4);
lean_inc(x_39);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 x_40 = x_14;
} else {
 lean_dec_ref(x_14);
 x_40 = lean_box(0);
}
lean_inc(x_16);
x_41 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_36, x_10, x_16);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 5, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_35);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_42, 2, x_37);
lean_ctor_set(x_42, 3, x_38);
lean_ctor_set(x_42, 4, x_39);
x_43 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_43, 0, x_30);
lean_ctor_set(x_43, 1, x_31);
lean_ctor_set(x_43, 2, x_42);
lean_ctor_set(x_43, 3, x_32);
lean_ctor_set(x_43, 4, x_33);
lean_ctor_set(x_43, 5, x_34);
lean_ctor_set(x_12, 1, x_43);
return x_12;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_44 = lean_ctor_get(x_12, 0);
lean_inc(x_44);
lean_dec(x_12);
x_45 = lean_ctor_get(x_13, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_13, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_13, 4);
lean_inc(x_48);
x_49 = lean_ctor_get(x_13, 5);
lean_inc(x_49);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 lean_ctor_release(x_13, 4);
 lean_ctor_release(x_13, 5);
 x_50 = x_13;
} else {
 lean_dec_ref(x_13);
 x_50 = lean_box(0);
}
x_51 = lean_ctor_get(x_14, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_14, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_14, 2);
lean_inc(x_53);
x_54 = lean_ctor_get(x_14, 3);
lean_inc(x_54);
x_55 = lean_ctor_get(x_14, 4);
lean_inc(x_55);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 x_56 = x_14;
} else {
 lean_dec_ref(x_14);
 x_56 = lean_box(0);
}
lean_inc(x_44);
x_57 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_52, x_10, x_44);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 5, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_53);
lean_ctor_set(x_58, 3, x_54);
lean_ctor_set(x_58, 4, x_55);
if (lean_is_scalar(x_50)) {
 x_59 = lean_alloc_ctor(0, 6, 0);
} else {
 x_59 = x_50;
}
lean_ctor_set(x_59, 0, x_45);
lean_ctor_set(x_59, 1, x_46);
lean_ctor_set(x_59, 2, x_58);
lean_ctor_set(x_59, 3, x_47);
lean_ctor_set(x_59, 4, x_48);
lean_ctor_set(x_59, 5, x_49);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_44);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_10);
x_61 = !lean_is_exclusive(x_12);
if (x_61 == 0)
{
return x_12;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_12, 0);
x_63 = lean_ctor_get(x_12, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_12);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_65 = lean_ctor_get(x_11, 0);
lean_inc(x_65);
lean_dec(x_11);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_5);
return x_66;
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__7(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___main___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_1);
if (x_4 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_2__whenHasVar___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_expr_eqv(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_nat_dec_eq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
return x_3;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_array_push(x_3, x_6);
return x_8;
}
else
{
lean_dec(x_6);
return x_3;
}
}
}
case 5:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_Expr_hasFVar(x_2);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_9, x_3);
x_2 = x_10;
x_3 = x_12;
goto _start;
}
}
case 6:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = l_Lean_Expr_hasFVar(x_2);
if (x_16 == 0)
{
return x_3;
}
else
{
lean_object* x_17; 
x_17 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_14, x_3);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
case 7:
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = l_Lean_Expr_hasFVar(x_2);
if (x_21 == 0)
{
return x_3;
}
else
{
lean_object* x_22; 
x_22 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_19, x_3);
x_2 = x_20;
x_3 = x_22;
goto _start;
}
}
case 8:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = lean_ctor_get(x_2, 3);
x_27 = l_Lean_Expr_hasFVar(x_2);
if (x_27 == 0)
{
return x_3;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_24, x_3);
x_29 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_25, x_28);
x_2 = x_26;
x_3 = x_29;
goto _start;
}
}
case 10:
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_2, 1);
x_2 = x_31;
goto _start;
}
case 11:
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_2, 2);
x_2 = x_33;
goto _start;
}
default: 
{
return x_3;
}
}
}
}
lean_object* l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_3__collectDepsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_3__collectDepsAux(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_7 = lean_array_swap(x_3, x_4, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Nat_Inhabited;
x_10 = lean_array_get(x_9, x_3, x_5);
x_11 = lean_nat_dec_lt(x_10, x_2);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_swap(x_3, x_4, x_5);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_4, x_16);
lean_dec(x_4);
x_18 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_3 = x_15;
x_4 = x_17;
x_5 = x_18;
goto _start;
}
}
}
}
lean_object* l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_2, x_3);
if (x_13 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_14 = lean_nat_add(x_2, x_3);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_div(x_14, x_15);
lean_dec(x_14);
x_37 = l_Nat_Inhabited;
x_38 = lean_array_get(x_37, x_1, x_16);
x_39 = lean_array_get(x_37, x_1, x_2);
x_40 = lean_nat_dec_lt(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
x_17 = x_1;
goto block_36;
}
else
{
lean_object* x_41; 
x_41 = lean_array_swap(x_1, x_2, x_16);
x_17 = x_41;
goto block_36;
}
block_36:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_Nat_Inhabited;
x_19 = lean_array_get(x_18, x_17, x_3);
x_20 = lean_array_get(x_18, x_17, x_2);
x_21 = lean_nat_dec_lt(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_array_get(x_18, x_17, x_16);
x_23 = lean_nat_dec_lt(x_22, x_19);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_16);
lean_inc_n(x_2, 2);
x_24 = l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(x_3, x_19, x_17, x_2, x_2);
lean_dec(x_19);
x_4 = x_24;
goto block_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_19);
x_25 = lean_array_swap(x_17, x_16, x_3);
lean_dec(x_16);
x_26 = lean_array_get(x_18, x_25, x_3);
lean_inc_n(x_2, 2);
x_27 = l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(x_3, x_26, x_25, x_2, x_2);
lean_dec(x_26);
x_4 = x_27;
goto block_12;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_19);
x_28 = lean_array_swap(x_17, x_2, x_3);
x_29 = lean_array_get(x_18, x_28, x_16);
x_30 = lean_array_get(x_18, x_28, x_3);
x_31 = lean_nat_dec_lt(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_16);
lean_inc_n(x_2, 2);
x_32 = l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(x_3, x_30, x_28, x_2, x_2);
lean_dec(x_30);
x_4 = x_32;
goto block_12;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_30);
x_33 = lean_array_swap(x_28, x_16, x_3);
lean_dec(x_16);
x_34 = lean_array_get(x_18, x_33, x_3);
lean_inc_n(x_2, 2);
x_35 = l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(x_3, x_34, x_33, x_2, x_2);
lean_dec(x_34);
x_4 = x_35;
goto block_12;
}
}
}
}
block_12:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_nat_dec_le(x_3, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1(x_6, x_2, x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_1 = x_8;
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_4__collectDeps(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Array_empty___closed__1;
x_4 = l___private_Lean_Meta_FunInfo_3__collectDepsAux___main(x_1, x_2, x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1(x_4, x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
lean_object* l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Data_Array_QSort_1__partitionAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsortAux___main___at___private_Lean_Meta_FunInfo_4__collectDeps___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_4__collectDeps___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = x_3;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
x_12 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 1);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 2);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
if (x_13 == 0)
{
uint8_t x_17; 
x_17 = l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(x_1, x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
x_18 = x_10;
x_19 = lean_array_fset(x_9, x_2, x_18);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 2, x_23);
x_24 = x_10;
x_25 = lean_array_fset(x_9, x_2, x_24);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_25;
goto _start;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_10);
x_27 = 1;
x_28 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_11);
lean_ctor_set_uint8(x_28, sizeof(void*)*1 + 1, x_12);
lean_ctor_set_uint8(x_28, sizeof(void*)*1 + 2, x_27);
x_29 = x_28;
x_30 = lean_array_fset(x_9, x_2, x_29);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_30;
goto _start;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_14);
x_32 = x_10;
x_33 = lean_array_fset(x_9, x_2, x_32);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_33;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = x_1;
x_7 = l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1(x_2, x_4, x_6);
x_8 = x_7;
return x_8;
}
else
{
return x_1;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_umapMAux___main___at___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_3);
x_11 = lean_nat_sub(x_2, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_Expr_Inhabited;
x_14 = lean_array_get(x_13, x_1, x_12);
lean_dec(x_12);
lean_inc(x_5);
x_15 = l_Lean_Meta_getFVarLocalDecl(x_14, x_5, x_6);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_LocalDecl_type(x_16);
x_19 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_18);
lean_dec(x_18);
x_20 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_4, x_19);
x_21 = l_Lean_LocalDecl_binderInfo(x_16);
lean_dec(x_16);
x_22 = 1;
x_23 = l_Lean_BinderInfo_beq(x_21, x_22);
x_24 = 3;
x_25 = l_Lean_BinderInfo_beq(x_21, x_24);
x_26 = 0;
x_27 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 1, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 2, x_26);
x_28 = lean_array_push(x_20, x_27);
x_3 = x_10;
x_4 = x_28;
x_6 = x_17;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_30 = !lean_is_exclusive(x_15);
if (x_30 == 0)
{
return x_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; 
lean_dec(x_5);
lean_dec(x_3);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_6);
return x_34;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_nat_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = l_Array_empty___closed__1;
lean_inc(x_2);
x_11 = l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(x_1, x_2, x_2, x_10, x_6, x_7);
lean_dec(x_2);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
x_15 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_13, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
x_20 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_17, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_array_fget(x_4, x_5);
lean_inc(x_6);
x_28 = l_Lean_Meta_getFVarLocalDecl(x_27, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_LocalDecl_type(x_29);
lean_dec(x_29);
lean_inc(x_6);
lean_inc(x_31);
x_32 = l_Lean_Meta_isClassQuick___main(x_31, x_6, x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
switch (lean_obj_tag(x_33)) {
case 0:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_27);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_5, x_35);
lean_dec(x_5);
x_5 = x_36;
x_7 = x_34;
goto _start;
}
case 1:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_31);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_39 = x_32;
} else {
 lean_dec_ref(x_32);
 x_39 = lean_box(0);
}
x_40 = lean_ctor_get(x_33, 0);
lean_inc(x_40);
lean_dec(x_33);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_5, x_41);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_38, 2);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_102; uint8_t x_103; 
x_46 = lean_ctor_get(x_44, 2);
x_102 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_44, 2, x_102);
x_103 = !lean_is_exclusive(x_6);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_6, 2);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_40);
lean_ctor_set(x_105, 1, x_27);
x_106 = lean_array_push(x_104, x_105);
lean_ctor_set(x_6, 2, x_106);
x_107 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_42, x_6, x_38);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_110, 0, x_108);
x_47 = x_110;
x_48 = x_109;
goto block_101;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_107, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_dec(x_107);
x_113 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_113, 0, x_111);
x_47 = x_113;
x_48 = x_112;
goto block_101;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_114 = lean_ctor_get(x_6, 0);
x_115 = lean_ctor_get(x_6, 1);
x_116 = lean_ctor_get(x_6, 2);
x_117 = lean_ctor_get(x_6, 3);
x_118 = lean_ctor_get(x_6, 4);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_6);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_40);
lean_ctor_set(x_119, 1, x_27);
x_120 = lean_array_push(x_116, x_119);
x_121 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_121, 0, x_114);
lean_ctor_set(x_121, 1, x_115);
lean_ctor_set(x_121, 2, x_120);
lean_ctor_set(x_121, 3, x_117);
lean_ctor_set(x_121, 4, x_118);
x_122 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_42, x_121, x_38);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_123);
x_47 = x_125;
x_48 = x_124;
goto block_101;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_122, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_126);
x_47 = x_128;
x_48 = x_127;
goto block_101;
}
}
block_101:
{
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_48, 2);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
lean_dec(x_47);
x_51 = !lean_is_exclusive(x_48);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_48, 2);
lean_dec(x_52);
x_53 = !lean_is_exclusive(x_49);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_49, 2);
lean_dec(x_54);
lean_ctor_set(x_49, 2, x_46);
if (lean_is_scalar(x_39)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_39;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_49, 0);
x_57 = lean_ctor_get(x_49, 1);
x_58 = lean_ctor_get(x_49, 3);
x_59 = lean_ctor_get(x_49, 4);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_49);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_57);
lean_ctor_set(x_60, 2, x_46);
lean_ctor_set(x_60, 3, x_58);
lean_ctor_set(x_60, 4, x_59);
lean_ctor_set(x_48, 2, x_60);
if (lean_is_scalar(x_39)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_39;
 lean_ctor_set_tag(x_61, 1);
}
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_48);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_48, 0);
x_63 = lean_ctor_get(x_48, 1);
x_64 = lean_ctor_get(x_48, 3);
x_65 = lean_ctor_get(x_48, 4);
x_66 = lean_ctor_get(x_48, 5);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_48);
x_67 = lean_ctor_get(x_49, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_49, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_49, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_49, 4);
lean_inc(x_70);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 lean_ctor_release(x_49, 3);
 lean_ctor_release(x_49, 4);
 x_71 = x_49;
} else {
 lean_dec_ref(x_49);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 5, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_68);
lean_ctor_set(x_72, 2, x_46);
lean_ctor_set(x_72, 3, x_69);
lean_ctor_set(x_72, 4, x_70);
x_73 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_73, 0, x_62);
lean_ctor_set(x_73, 1, x_63);
lean_ctor_set(x_73, 2, x_72);
lean_ctor_set(x_73, 3, x_64);
lean_ctor_set(x_73, 4, x_65);
lean_ctor_set(x_73, 5, x_66);
if (lean_is_scalar(x_39)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_39;
 lean_ctor_set_tag(x_74, 1);
}
lean_ctor_set(x_74, 0, x_50);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_75 = lean_ctor_get(x_48, 2);
lean_inc(x_75);
x_76 = lean_ctor_get(x_47, 0);
lean_inc(x_76);
lean_dec(x_47);
x_77 = !lean_is_exclusive(x_48);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
x_78 = lean_ctor_get(x_48, 2);
lean_dec(x_78);
x_79 = !lean_is_exclusive(x_75);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_75, 2);
lean_dec(x_80);
lean_ctor_set(x_75, 2, x_46);
if (lean_is_scalar(x_39)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_39;
}
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_48);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_75, 0);
x_83 = lean_ctor_get(x_75, 1);
x_84 = lean_ctor_get(x_75, 3);
x_85 = lean_ctor_get(x_75, 4);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_75);
x_86 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_86, 0, x_82);
lean_ctor_set(x_86, 1, x_83);
lean_ctor_set(x_86, 2, x_46);
lean_ctor_set(x_86, 3, x_84);
lean_ctor_set(x_86, 4, x_85);
lean_ctor_set(x_48, 2, x_86);
if (lean_is_scalar(x_39)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_39;
}
lean_ctor_set(x_87, 0, x_76);
lean_ctor_set(x_87, 1, x_48);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_88 = lean_ctor_get(x_48, 0);
x_89 = lean_ctor_get(x_48, 1);
x_90 = lean_ctor_get(x_48, 3);
x_91 = lean_ctor_get(x_48, 4);
x_92 = lean_ctor_get(x_48, 5);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_48);
x_93 = lean_ctor_get(x_75, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_75, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_75, 3);
lean_inc(x_95);
x_96 = lean_ctor_get(x_75, 4);
lean_inc(x_96);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 lean_ctor_release(x_75, 4);
 x_97 = x_75;
} else {
 lean_dec_ref(x_75);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 5, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_94);
lean_ctor_set(x_98, 2, x_46);
lean_ctor_set(x_98, 3, x_95);
lean_ctor_set(x_98, 4, x_96);
x_99 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_99, 0, x_88);
lean_ctor_set(x_99, 1, x_89);
lean_ctor_set(x_99, 2, x_98);
lean_ctor_set(x_99, 3, x_90);
lean_ctor_set(x_99, 4, x_91);
lean_ctor_set(x_99, 5, x_92);
if (lean_is_scalar(x_39)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_39;
}
lean_ctor_set(x_100, 0, x_76);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_129 = lean_ctor_get(x_44, 0);
x_130 = lean_ctor_get(x_44, 1);
x_131 = lean_ctor_get(x_44, 2);
x_132 = lean_ctor_get(x_44, 3);
x_133 = lean_ctor_get(x_44, 4);
lean_inc(x_133);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_44);
x_169 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_170 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_170, 0, x_129);
lean_ctor_set(x_170, 1, x_130);
lean_ctor_set(x_170, 2, x_169);
lean_ctor_set(x_170, 3, x_132);
lean_ctor_set(x_170, 4, x_133);
lean_ctor_set(x_38, 2, x_170);
x_171 = lean_ctor_get(x_6, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_6, 1);
lean_inc(x_172);
x_173 = lean_ctor_get(x_6, 2);
lean_inc(x_173);
x_174 = lean_ctor_get(x_6, 3);
lean_inc(x_174);
x_175 = lean_ctor_get(x_6, 4);
lean_inc(x_175);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_176 = x_6;
} else {
 lean_dec_ref(x_6);
 x_176 = lean_box(0);
}
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_40);
lean_ctor_set(x_177, 1, x_27);
x_178 = lean_array_push(x_173, x_177);
if (lean_is_scalar(x_176)) {
 x_179 = lean_alloc_ctor(0, 5, 0);
} else {
 x_179 = x_176;
}
lean_ctor_set(x_179, 0, x_171);
lean_ctor_set(x_179, 1, x_172);
lean_ctor_set(x_179, 2, x_178);
lean_ctor_set(x_179, 3, x_174);
lean_ctor_set(x_179, 4, x_175);
x_180 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_42, x_179, x_38);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_181);
x_134 = x_183;
x_135 = x_182;
goto block_168;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_180, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_dec(x_180);
x_186 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_186, 0, x_184);
x_134 = x_186;
x_135 = x_185;
goto block_168;
}
block_168:
{
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_136 = lean_ctor_get(x_135, 2);
lean_inc(x_136);
x_137 = lean_ctor_get(x_134, 0);
lean_inc(x_137);
lean_dec(x_134);
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_135, 3);
lean_inc(x_140);
x_141 = lean_ctor_get(x_135, 4);
lean_inc(x_141);
x_142 = lean_ctor_get(x_135, 5);
lean_inc(x_142);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 lean_ctor_release(x_135, 4);
 lean_ctor_release(x_135, 5);
 x_143 = x_135;
} else {
 lean_dec_ref(x_135);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_136, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_136, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_136, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_136, 4);
lean_inc(x_147);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 lean_ctor_release(x_136, 4);
 x_148 = x_136;
} else {
 lean_dec_ref(x_136);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(0, 5, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_144);
lean_ctor_set(x_149, 1, x_145);
lean_ctor_set(x_149, 2, x_131);
lean_ctor_set(x_149, 3, x_146);
lean_ctor_set(x_149, 4, x_147);
if (lean_is_scalar(x_143)) {
 x_150 = lean_alloc_ctor(0, 6, 0);
} else {
 x_150 = x_143;
}
lean_ctor_set(x_150, 0, x_138);
lean_ctor_set(x_150, 1, x_139);
lean_ctor_set(x_150, 2, x_149);
lean_ctor_set(x_150, 3, x_140);
lean_ctor_set(x_150, 4, x_141);
lean_ctor_set(x_150, 5, x_142);
if (lean_is_scalar(x_39)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_39;
 lean_ctor_set_tag(x_151, 1);
}
lean_ctor_set(x_151, 0, x_137);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_152 = lean_ctor_get(x_135, 2);
lean_inc(x_152);
x_153 = lean_ctor_get(x_134, 0);
lean_inc(x_153);
lean_dec(x_134);
x_154 = lean_ctor_get(x_135, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_135, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_135, 3);
lean_inc(x_156);
x_157 = lean_ctor_get(x_135, 4);
lean_inc(x_157);
x_158 = lean_ctor_get(x_135, 5);
lean_inc(x_158);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 lean_ctor_release(x_135, 4);
 lean_ctor_release(x_135, 5);
 x_159 = x_135;
} else {
 lean_dec_ref(x_135);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_152, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_152, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_152, 3);
lean_inc(x_162);
x_163 = lean_ctor_get(x_152, 4);
lean_inc(x_163);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 x_164 = x_152;
} else {
 lean_dec_ref(x_152);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(0, 5, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_161);
lean_ctor_set(x_165, 2, x_131);
lean_ctor_set(x_165, 3, x_162);
lean_ctor_set(x_165, 4, x_163);
if (lean_is_scalar(x_159)) {
 x_166 = lean_alloc_ctor(0, 6, 0);
} else {
 x_166 = x_159;
}
lean_ctor_set(x_166, 0, x_154);
lean_ctor_set(x_166, 1, x_155);
lean_ctor_set(x_166, 2, x_165);
lean_ctor_set(x_166, 3, x_156);
lean_ctor_set(x_166, 4, x_157);
lean_ctor_set(x_166, 5, x_158);
if (lean_is_scalar(x_39)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_39;
}
lean_ctor_set(x_167, 0, x_153);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_187 = lean_ctor_get(x_38, 2);
x_188 = lean_ctor_get(x_38, 0);
x_189 = lean_ctor_get(x_38, 1);
x_190 = lean_ctor_get(x_38, 3);
x_191 = lean_ctor_get(x_38, 4);
x_192 = lean_ctor_get(x_38, 5);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_187);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_38);
x_193 = lean_ctor_get(x_187, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_187, 1);
lean_inc(x_194);
x_195 = lean_ctor_get(x_187, 2);
lean_inc(x_195);
x_196 = lean_ctor_get(x_187, 3);
lean_inc(x_196);
x_197 = lean_ctor_get(x_187, 4);
lean_inc(x_197);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 lean_ctor_release(x_187, 2);
 lean_ctor_release(x_187, 3);
 lean_ctor_release(x_187, 4);
 x_198 = x_187;
} else {
 lean_dec_ref(x_187);
 x_198 = lean_box(0);
}
x_234 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_198)) {
 x_235 = lean_alloc_ctor(0, 5, 0);
} else {
 x_235 = x_198;
}
lean_ctor_set(x_235, 0, x_193);
lean_ctor_set(x_235, 1, x_194);
lean_ctor_set(x_235, 2, x_234);
lean_ctor_set(x_235, 3, x_196);
lean_ctor_set(x_235, 4, x_197);
x_236 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_236, 0, x_188);
lean_ctor_set(x_236, 1, x_189);
lean_ctor_set(x_236, 2, x_235);
lean_ctor_set(x_236, 3, x_190);
lean_ctor_set(x_236, 4, x_191);
lean_ctor_set(x_236, 5, x_192);
x_237 = lean_ctor_get(x_6, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_6, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_6, 2);
lean_inc(x_239);
x_240 = lean_ctor_get(x_6, 3);
lean_inc(x_240);
x_241 = lean_ctor_get(x_6, 4);
lean_inc(x_241);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_242 = x_6;
} else {
 lean_dec_ref(x_6);
 x_242 = lean_box(0);
}
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_40);
lean_ctor_set(x_243, 1, x_27);
x_244 = lean_array_push(x_239, x_243);
if (lean_is_scalar(x_242)) {
 x_245 = lean_alloc_ctor(0, 5, 0);
} else {
 x_245 = x_242;
}
lean_ctor_set(x_245, 0, x_237);
lean_ctor_set(x_245, 1, x_238);
lean_ctor_set(x_245, 2, x_244);
lean_ctor_set(x_245, 3, x_240);
lean_ctor_set(x_245, 4, x_241);
x_246 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_42, x_245, x_236);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_247);
x_199 = x_249;
x_200 = x_248;
goto block_233;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_246, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_246, 1);
lean_inc(x_251);
lean_dec(x_246);
x_252 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_252, 0, x_250);
x_199 = x_252;
x_200 = x_251;
goto block_233;
}
block_233:
{
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_201 = lean_ctor_get(x_200, 2);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 0);
lean_inc(x_202);
lean_dec(x_199);
x_203 = lean_ctor_get(x_200, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_200, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_200, 3);
lean_inc(x_205);
x_206 = lean_ctor_get(x_200, 4);
lean_inc(x_206);
x_207 = lean_ctor_get(x_200, 5);
lean_inc(x_207);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 lean_ctor_release(x_200, 4);
 lean_ctor_release(x_200, 5);
 x_208 = x_200;
} else {
 lean_dec_ref(x_200);
 x_208 = lean_box(0);
}
x_209 = lean_ctor_get(x_201, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_201, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_201, 3);
lean_inc(x_211);
x_212 = lean_ctor_get(x_201, 4);
lean_inc(x_212);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 lean_ctor_release(x_201, 2);
 lean_ctor_release(x_201, 3);
 lean_ctor_release(x_201, 4);
 x_213 = x_201;
} else {
 lean_dec_ref(x_201);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(0, 5, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_209);
lean_ctor_set(x_214, 1, x_210);
lean_ctor_set(x_214, 2, x_195);
lean_ctor_set(x_214, 3, x_211);
lean_ctor_set(x_214, 4, x_212);
if (lean_is_scalar(x_208)) {
 x_215 = lean_alloc_ctor(0, 6, 0);
} else {
 x_215 = x_208;
}
lean_ctor_set(x_215, 0, x_203);
lean_ctor_set(x_215, 1, x_204);
lean_ctor_set(x_215, 2, x_214);
lean_ctor_set(x_215, 3, x_205);
lean_ctor_set(x_215, 4, x_206);
lean_ctor_set(x_215, 5, x_207);
if (lean_is_scalar(x_39)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_39;
 lean_ctor_set_tag(x_216, 1);
}
lean_ctor_set(x_216, 0, x_202);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_217 = lean_ctor_get(x_200, 2);
lean_inc(x_217);
x_218 = lean_ctor_get(x_199, 0);
lean_inc(x_218);
lean_dec(x_199);
x_219 = lean_ctor_get(x_200, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_200, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_200, 3);
lean_inc(x_221);
x_222 = lean_ctor_get(x_200, 4);
lean_inc(x_222);
x_223 = lean_ctor_get(x_200, 5);
lean_inc(x_223);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 lean_ctor_release(x_200, 4);
 lean_ctor_release(x_200, 5);
 x_224 = x_200;
} else {
 lean_dec_ref(x_200);
 x_224 = lean_box(0);
}
x_225 = lean_ctor_get(x_217, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_217, 1);
lean_inc(x_226);
x_227 = lean_ctor_get(x_217, 3);
lean_inc(x_227);
x_228 = lean_ctor_get(x_217, 4);
lean_inc(x_228);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 lean_ctor_release(x_217, 2);
 lean_ctor_release(x_217, 3);
 lean_ctor_release(x_217, 4);
 x_229 = x_217;
} else {
 lean_dec_ref(x_217);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(0, 5, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_225);
lean_ctor_set(x_230, 1, x_226);
lean_ctor_set(x_230, 2, x_195);
lean_ctor_set(x_230, 3, x_227);
lean_ctor_set(x_230, 4, x_228);
if (lean_is_scalar(x_224)) {
 x_231 = lean_alloc_ctor(0, 6, 0);
} else {
 x_231 = x_224;
}
lean_ctor_set(x_231, 0, x_219);
lean_ctor_set(x_231, 1, x_220);
lean_ctor_set(x_231, 2, x_230);
lean_ctor_set(x_231, 3, x_221);
lean_ctor_set(x_231, 4, x_222);
lean_ctor_set(x_231, 5, x_223);
if (lean_is_scalar(x_39)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_39;
}
lean_ctor_set(x_232, 0, x_218);
lean_ctor_set(x_232, 1, x_231);
return x_232;
}
}
}
}
default: 
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_ctor_get(x_32, 1);
lean_inc(x_253);
lean_dec(x_32);
lean_inc(x_6);
x_254 = l_Lean_Meta_isClassExpensive___main(x_31, x_6, x_253);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_27);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
x_257 = lean_unsigned_to_nat(1u);
x_258 = lean_nat_add(x_5, x_257);
lean_dec(x_5);
x_5 = x_258;
x_7 = x_256;
goto _start;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_260 = lean_ctor_get(x_254, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_261 = x_254;
} else {
 lean_dec_ref(x_254);
 x_261 = lean_box(0);
}
x_262 = lean_ctor_get(x_255, 0);
lean_inc(x_262);
lean_dec(x_255);
x_263 = lean_unsigned_to_nat(1u);
x_264 = lean_nat_add(x_5, x_263);
lean_dec(x_5);
x_265 = !lean_is_exclusive(x_260);
if (x_265 == 0)
{
lean_object* x_266; uint8_t x_267; 
x_266 = lean_ctor_get(x_260, 2);
x_267 = !lean_is_exclusive(x_266);
if (x_267 == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_324; uint8_t x_325; 
x_268 = lean_ctor_get(x_266, 2);
x_324 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_266, 2, x_324);
x_325 = !lean_is_exclusive(x_6);
if (x_325 == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_326 = lean_ctor_get(x_6, 2);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_262);
lean_ctor_set(x_327, 1, x_27);
x_328 = lean_array_push(x_326, x_327);
lean_ctor_set(x_6, 2, x_328);
x_329 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_264, x_6, x_260);
if (lean_obj_tag(x_329) == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_332 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_332, 0, x_330);
x_269 = x_332;
x_270 = x_331;
goto block_323;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_329, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_329, 1);
lean_inc(x_334);
lean_dec(x_329);
x_335 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_335, 0, x_333);
x_269 = x_335;
x_270 = x_334;
goto block_323;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_336 = lean_ctor_get(x_6, 0);
x_337 = lean_ctor_get(x_6, 1);
x_338 = lean_ctor_get(x_6, 2);
x_339 = lean_ctor_get(x_6, 3);
x_340 = lean_ctor_get(x_6, 4);
lean_inc(x_340);
lean_inc(x_339);
lean_inc(x_338);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_6);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_262);
lean_ctor_set(x_341, 1, x_27);
x_342 = lean_array_push(x_338, x_341);
x_343 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_343, 0, x_336);
lean_ctor_set(x_343, 1, x_337);
lean_ctor_set(x_343, 2, x_342);
lean_ctor_set(x_343, 3, x_339);
lean_ctor_set(x_343, 4, x_340);
x_344 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_264, x_343, x_260);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
lean_dec(x_344);
x_347 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_347, 0, x_345);
x_269 = x_347;
x_270 = x_346;
goto block_323;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_348 = lean_ctor_get(x_344, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_344, 1);
lean_inc(x_349);
lean_dec(x_344);
x_350 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_350, 0, x_348);
x_269 = x_350;
x_270 = x_349;
goto block_323;
}
}
block_323:
{
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_271 = lean_ctor_get(x_270, 2);
lean_inc(x_271);
x_272 = lean_ctor_get(x_269, 0);
lean_inc(x_272);
lean_dec(x_269);
x_273 = !lean_is_exclusive(x_270);
if (x_273 == 0)
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_270, 2);
lean_dec(x_274);
x_275 = !lean_is_exclusive(x_271);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_271, 2);
lean_dec(x_276);
lean_ctor_set(x_271, 2, x_268);
if (lean_is_scalar(x_261)) {
 x_277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_277 = x_261;
 lean_ctor_set_tag(x_277, 1);
}
lean_ctor_set(x_277, 0, x_272);
lean_ctor_set(x_277, 1, x_270);
return x_277;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_278 = lean_ctor_get(x_271, 0);
x_279 = lean_ctor_get(x_271, 1);
x_280 = lean_ctor_get(x_271, 3);
x_281 = lean_ctor_get(x_271, 4);
lean_inc(x_281);
lean_inc(x_280);
lean_inc(x_279);
lean_inc(x_278);
lean_dec(x_271);
x_282 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_282, 0, x_278);
lean_ctor_set(x_282, 1, x_279);
lean_ctor_set(x_282, 2, x_268);
lean_ctor_set(x_282, 3, x_280);
lean_ctor_set(x_282, 4, x_281);
lean_ctor_set(x_270, 2, x_282);
if (lean_is_scalar(x_261)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_261;
 lean_ctor_set_tag(x_283, 1);
}
lean_ctor_set(x_283, 0, x_272);
lean_ctor_set(x_283, 1, x_270);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_284 = lean_ctor_get(x_270, 0);
x_285 = lean_ctor_get(x_270, 1);
x_286 = lean_ctor_get(x_270, 3);
x_287 = lean_ctor_get(x_270, 4);
x_288 = lean_ctor_get(x_270, 5);
lean_inc(x_288);
lean_inc(x_287);
lean_inc(x_286);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_270);
x_289 = lean_ctor_get(x_271, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_271, 1);
lean_inc(x_290);
x_291 = lean_ctor_get(x_271, 3);
lean_inc(x_291);
x_292 = lean_ctor_get(x_271, 4);
lean_inc(x_292);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 lean_ctor_release(x_271, 2);
 lean_ctor_release(x_271, 3);
 lean_ctor_release(x_271, 4);
 x_293 = x_271;
} else {
 lean_dec_ref(x_271);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(0, 5, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_289);
lean_ctor_set(x_294, 1, x_290);
lean_ctor_set(x_294, 2, x_268);
lean_ctor_set(x_294, 3, x_291);
lean_ctor_set(x_294, 4, x_292);
x_295 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_295, 0, x_284);
lean_ctor_set(x_295, 1, x_285);
lean_ctor_set(x_295, 2, x_294);
lean_ctor_set(x_295, 3, x_286);
lean_ctor_set(x_295, 4, x_287);
lean_ctor_set(x_295, 5, x_288);
if (lean_is_scalar(x_261)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_261;
 lean_ctor_set_tag(x_296, 1);
}
lean_ctor_set(x_296, 0, x_272);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
else
{
lean_object* x_297; lean_object* x_298; uint8_t x_299; 
x_297 = lean_ctor_get(x_270, 2);
lean_inc(x_297);
x_298 = lean_ctor_get(x_269, 0);
lean_inc(x_298);
lean_dec(x_269);
x_299 = !lean_is_exclusive(x_270);
if (x_299 == 0)
{
lean_object* x_300; uint8_t x_301; 
x_300 = lean_ctor_get(x_270, 2);
lean_dec(x_300);
x_301 = !lean_is_exclusive(x_297);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_297, 2);
lean_dec(x_302);
lean_ctor_set(x_297, 2, x_268);
if (lean_is_scalar(x_261)) {
 x_303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_303 = x_261;
}
lean_ctor_set(x_303, 0, x_298);
lean_ctor_set(x_303, 1, x_270);
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_304 = lean_ctor_get(x_297, 0);
x_305 = lean_ctor_get(x_297, 1);
x_306 = lean_ctor_get(x_297, 3);
x_307 = lean_ctor_get(x_297, 4);
lean_inc(x_307);
lean_inc(x_306);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_297);
x_308 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_308, 0, x_304);
lean_ctor_set(x_308, 1, x_305);
lean_ctor_set(x_308, 2, x_268);
lean_ctor_set(x_308, 3, x_306);
lean_ctor_set(x_308, 4, x_307);
lean_ctor_set(x_270, 2, x_308);
if (lean_is_scalar(x_261)) {
 x_309 = lean_alloc_ctor(0, 2, 0);
} else {
 x_309 = x_261;
}
lean_ctor_set(x_309, 0, x_298);
lean_ctor_set(x_309, 1, x_270);
return x_309;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_310 = lean_ctor_get(x_270, 0);
x_311 = lean_ctor_get(x_270, 1);
x_312 = lean_ctor_get(x_270, 3);
x_313 = lean_ctor_get(x_270, 4);
x_314 = lean_ctor_get(x_270, 5);
lean_inc(x_314);
lean_inc(x_313);
lean_inc(x_312);
lean_inc(x_311);
lean_inc(x_310);
lean_dec(x_270);
x_315 = lean_ctor_get(x_297, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_297, 1);
lean_inc(x_316);
x_317 = lean_ctor_get(x_297, 3);
lean_inc(x_317);
x_318 = lean_ctor_get(x_297, 4);
lean_inc(x_318);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 lean_ctor_release(x_297, 4);
 x_319 = x_297;
} else {
 lean_dec_ref(x_297);
 x_319 = lean_box(0);
}
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(0, 5, 0);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_315);
lean_ctor_set(x_320, 1, x_316);
lean_ctor_set(x_320, 2, x_268);
lean_ctor_set(x_320, 3, x_317);
lean_ctor_set(x_320, 4, x_318);
x_321 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_321, 0, x_310);
lean_ctor_set(x_321, 1, x_311);
lean_ctor_set(x_321, 2, x_320);
lean_ctor_set(x_321, 3, x_312);
lean_ctor_set(x_321, 4, x_313);
lean_ctor_set(x_321, 5, x_314);
if (lean_is_scalar(x_261)) {
 x_322 = lean_alloc_ctor(0, 2, 0);
} else {
 x_322 = x_261;
}
lean_ctor_set(x_322, 0, x_298);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
}
}
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_351 = lean_ctor_get(x_266, 0);
x_352 = lean_ctor_get(x_266, 1);
x_353 = lean_ctor_get(x_266, 2);
x_354 = lean_ctor_get(x_266, 3);
x_355 = lean_ctor_get(x_266, 4);
lean_inc(x_355);
lean_inc(x_354);
lean_inc(x_353);
lean_inc(x_352);
lean_inc(x_351);
lean_dec(x_266);
x_391 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_392 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_392, 0, x_351);
lean_ctor_set(x_392, 1, x_352);
lean_ctor_set(x_392, 2, x_391);
lean_ctor_set(x_392, 3, x_354);
lean_ctor_set(x_392, 4, x_355);
lean_ctor_set(x_260, 2, x_392);
x_393 = lean_ctor_get(x_6, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_6, 1);
lean_inc(x_394);
x_395 = lean_ctor_get(x_6, 2);
lean_inc(x_395);
x_396 = lean_ctor_get(x_6, 3);
lean_inc(x_396);
x_397 = lean_ctor_get(x_6, 4);
lean_inc(x_397);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_398 = x_6;
} else {
 lean_dec_ref(x_6);
 x_398 = lean_box(0);
}
x_399 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_399, 0, x_262);
lean_ctor_set(x_399, 1, x_27);
x_400 = lean_array_push(x_395, x_399);
if (lean_is_scalar(x_398)) {
 x_401 = lean_alloc_ctor(0, 5, 0);
} else {
 x_401 = x_398;
}
lean_ctor_set(x_401, 0, x_393);
lean_ctor_set(x_401, 1, x_394);
lean_ctor_set(x_401, 2, x_400);
lean_ctor_set(x_401, 3, x_396);
lean_ctor_set(x_401, 4, x_397);
x_402 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_264, x_401, x_260);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
x_405 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_405, 0, x_403);
x_356 = x_405;
x_357 = x_404;
goto block_390;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_402, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_402, 1);
lean_inc(x_407);
lean_dec(x_402);
x_408 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_408, 0, x_406);
x_356 = x_408;
x_357 = x_407;
goto block_390;
}
block_390:
{
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_358 = lean_ctor_get(x_357, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_356, 0);
lean_inc(x_359);
lean_dec(x_356);
x_360 = lean_ctor_get(x_357, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_357, 1);
lean_inc(x_361);
x_362 = lean_ctor_get(x_357, 3);
lean_inc(x_362);
x_363 = lean_ctor_get(x_357, 4);
lean_inc(x_363);
x_364 = lean_ctor_get(x_357, 5);
lean_inc(x_364);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 lean_ctor_release(x_357, 2);
 lean_ctor_release(x_357, 3);
 lean_ctor_release(x_357, 4);
 lean_ctor_release(x_357, 5);
 x_365 = x_357;
} else {
 lean_dec_ref(x_357);
 x_365 = lean_box(0);
}
x_366 = lean_ctor_get(x_358, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_358, 1);
lean_inc(x_367);
x_368 = lean_ctor_get(x_358, 3);
lean_inc(x_368);
x_369 = lean_ctor_get(x_358, 4);
lean_inc(x_369);
if (lean_is_exclusive(x_358)) {
 lean_ctor_release(x_358, 0);
 lean_ctor_release(x_358, 1);
 lean_ctor_release(x_358, 2);
 lean_ctor_release(x_358, 3);
 lean_ctor_release(x_358, 4);
 x_370 = x_358;
} else {
 lean_dec_ref(x_358);
 x_370 = lean_box(0);
}
if (lean_is_scalar(x_370)) {
 x_371 = lean_alloc_ctor(0, 5, 0);
} else {
 x_371 = x_370;
}
lean_ctor_set(x_371, 0, x_366);
lean_ctor_set(x_371, 1, x_367);
lean_ctor_set(x_371, 2, x_353);
lean_ctor_set(x_371, 3, x_368);
lean_ctor_set(x_371, 4, x_369);
if (lean_is_scalar(x_365)) {
 x_372 = lean_alloc_ctor(0, 6, 0);
} else {
 x_372 = x_365;
}
lean_ctor_set(x_372, 0, x_360);
lean_ctor_set(x_372, 1, x_361);
lean_ctor_set(x_372, 2, x_371);
lean_ctor_set(x_372, 3, x_362);
lean_ctor_set(x_372, 4, x_363);
lean_ctor_set(x_372, 5, x_364);
if (lean_is_scalar(x_261)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_261;
 lean_ctor_set_tag(x_373, 1);
}
lean_ctor_set(x_373, 0, x_359);
lean_ctor_set(x_373, 1, x_372);
return x_373;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_374 = lean_ctor_get(x_357, 2);
lean_inc(x_374);
x_375 = lean_ctor_get(x_356, 0);
lean_inc(x_375);
lean_dec(x_356);
x_376 = lean_ctor_get(x_357, 0);
lean_inc(x_376);
x_377 = lean_ctor_get(x_357, 1);
lean_inc(x_377);
x_378 = lean_ctor_get(x_357, 3);
lean_inc(x_378);
x_379 = lean_ctor_get(x_357, 4);
lean_inc(x_379);
x_380 = lean_ctor_get(x_357, 5);
lean_inc(x_380);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 lean_ctor_release(x_357, 2);
 lean_ctor_release(x_357, 3);
 lean_ctor_release(x_357, 4);
 lean_ctor_release(x_357, 5);
 x_381 = x_357;
} else {
 lean_dec_ref(x_357);
 x_381 = lean_box(0);
}
x_382 = lean_ctor_get(x_374, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_374, 1);
lean_inc(x_383);
x_384 = lean_ctor_get(x_374, 3);
lean_inc(x_384);
x_385 = lean_ctor_get(x_374, 4);
lean_inc(x_385);
if (lean_is_exclusive(x_374)) {
 lean_ctor_release(x_374, 0);
 lean_ctor_release(x_374, 1);
 lean_ctor_release(x_374, 2);
 lean_ctor_release(x_374, 3);
 lean_ctor_release(x_374, 4);
 x_386 = x_374;
} else {
 lean_dec_ref(x_374);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(0, 5, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_382);
lean_ctor_set(x_387, 1, x_383);
lean_ctor_set(x_387, 2, x_353);
lean_ctor_set(x_387, 3, x_384);
lean_ctor_set(x_387, 4, x_385);
if (lean_is_scalar(x_381)) {
 x_388 = lean_alloc_ctor(0, 6, 0);
} else {
 x_388 = x_381;
}
lean_ctor_set(x_388, 0, x_376);
lean_ctor_set(x_388, 1, x_377);
lean_ctor_set(x_388, 2, x_387);
lean_ctor_set(x_388, 3, x_378);
lean_ctor_set(x_388, 4, x_379);
lean_ctor_set(x_388, 5, x_380);
if (lean_is_scalar(x_261)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_261;
}
lean_ctor_set(x_389, 0, x_375);
lean_ctor_set(x_389, 1, x_388);
return x_389;
}
}
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_409 = lean_ctor_get(x_260, 2);
x_410 = lean_ctor_get(x_260, 0);
x_411 = lean_ctor_get(x_260, 1);
x_412 = lean_ctor_get(x_260, 3);
x_413 = lean_ctor_get(x_260, 4);
x_414 = lean_ctor_get(x_260, 5);
lean_inc(x_414);
lean_inc(x_413);
lean_inc(x_412);
lean_inc(x_409);
lean_inc(x_411);
lean_inc(x_410);
lean_dec(x_260);
x_415 = lean_ctor_get(x_409, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_409, 1);
lean_inc(x_416);
x_417 = lean_ctor_get(x_409, 2);
lean_inc(x_417);
x_418 = lean_ctor_get(x_409, 3);
lean_inc(x_418);
x_419 = lean_ctor_get(x_409, 4);
lean_inc(x_419);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 lean_ctor_release(x_409, 2);
 lean_ctor_release(x_409, 3);
 lean_ctor_release(x_409, 4);
 x_420 = x_409;
} else {
 lean_dec_ref(x_409);
 x_420 = lean_box(0);
}
x_456 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_420)) {
 x_457 = lean_alloc_ctor(0, 5, 0);
} else {
 x_457 = x_420;
}
lean_ctor_set(x_457, 0, x_415);
lean_ctor_set(x_457, 1, x_416);
lean_ctor_set(x_457, 2, x_456);
lean_ctor_set(x_457, 3, x_418);
lean_ctor_set(x_457, 4, x_419);
x_458 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_458, 0, x_410);
lean_ctor_set(x_458, 1, x_411);
lean_ctor_set(x_458, 2, x_457);
lean_ctor_set(x_458, 3, x_412);
lean_ctor_set(x_458, 4, x_413);
lean_ctor_set(x_458, 5, x_414);
x_459 = lean_ctor_get(x_6, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_6, 1);
lean_inc(x_460);
x_461 = lean_ctor_get(x_6, 2);
lean_inc(x_461);
x_462 = lean_ctor_get(x_6, 3);
lean_inc(x_462);
x_463 = lean_ctor_get(x_6, 4);
lean_inc(x_463);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_464 = x_6;
} else {
 lean_dec_ref(x_6);
 x_464 = lean_box(0);
}
x_465 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_465, 0, x_262);
lean_ctor_set(x_465, 1, x_27);
x_466 = lean_array_push(x_461, x_465);
if (lean_is_scalar(x_464)) {
 x_467 = lean_alloc_ctor(0, 5, 0);
} else {
 x_467 = x_464;
}
lean_ctor_set(x_467, 0, x_459);
lean_ctor_set(x_467, 1, x_460);
lean_ctor_set(x_467, 2, x_466);
lean_ctor_set(x_467, 3, x_462);
lean_ctor_set(x_467, 4, x_463);
x_468 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_264, x_467, x_458);
if (lean_obj_tag(x_468) == 0)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; 
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 1);
lean_inc(x_470);
lean_dec(x_468);
x_471 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_471, 0, x_469);
x_421 = x_471;
x_422 = x_470;
goto block_455;
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_468, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_468, 1);
lean_inc(x_473);
lean_dec(x_468);
x_474 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_474, 0, x_472);
x_421 = x_474;
x_422 = x_473;
goto block_455;
}
block_455:
{
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_423 = lean_ctor_get(x_422, 2);
lean_inc(x_423);
x_424 = lean_ctor_get(x_421, 0);
lean_inc(x_424);
lean_dec(x_421);
x_425 = lean_ctor_get(x_422, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_422, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_422, 3);
lean_inc(x_427);
x_428 = lean_ctor_get(x_422, 4);
lean_inc(x_428);
x_429 = lean_ctor_get(x_422, 5);
lean_inc(x_429);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 lean_ctor_release(x_422, 2);
 lean_ctor_release(x_422, 3);
 lean_ctor_release(x_422, 4);
 lean_ctor_release(x_422, 5);
 x_430 = x_422;
} else {
 lean_dec_ref(x_422);
 x_430 = lean_box(0);
}
x_431 = lean_ctor_get(x_423, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_423, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_423, 3);
lean_inc(x_433);
x_434 = lean_ctor_get(x_423, 4);
lean_inc(x_434);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 lean_ctor_release(x_423, 4);
 x_435 = x_423;
} else {
 lean_dec_ref(x_423);
 x_435 = lean_box(0);
}
if (lean_is_scalar(x_435)) {
 x_436 = lean_alloc_ctor(0, 5, 0);
} else {
 x_436 = x_435;
}
lean_ctor_set(x_436, 0, x_431);
lean_ctor_set(x_436, 1, x_432);
lean_ctor_set(x_436, 2, x_417);
lean_ctor_set(x_436, 3, x_433);
lean_ctor_set(x_436, 4, x_434);
if (lean_is_scalar(x_430)) {
 x_437 = lean_alloc_ctor(0, 6, 0);
} else {
 x_437 = x_430;
}
lean_ctor_set(x_437, 0, x_425);
lean_ctor_set(x_437, 1, x_426);
lean_ctor_set(x_437, 2, x_436);
lean_ctor_set(x_437, 3, x_427);
lean_ctor_set(x_437, 4, x_428);
lean_ctor_set(x_437, 5, x_429);
if (lean_is_scalar(x_261)) {
 x_438 = lean_alloc_ctor(1, 2, 0);
} else {
 x_438 = x_261;
 lean_ctor_set_tag(x_438, 1);
}
lean_ctor_set(x_438, 0, x_424);
lean_ctor_set(x_438, 1, x_437);
return x_438;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_439 = lean_ctor_get(x_422, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_421, 0);
lean_inc(x_440);
lean_dec(x_421);
x_441 = lean_ctor_get(x_422, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_422, 1);
lean_inc(x_442);
x_443 = lean_ctor_get(x_422, 3);
lean_inc(x_443);
x_444 = lean_ctor_get(x_422, 4);
lean_inc(x_444);
x_445 = lean_ctor_get(x_422, 5);
lean_inc(x_445);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 lean_ctor_release(x_422, 2);
 lean_ctor_release(x_422, 3);
 lean_ctor_release(x_422, 4);
 lean_ctor_release(x_422, 5);
 x_446 = x_422;
} else {
 lean_dec_ref(x_422);
 x_446 = lean_box(0);
}
x_447 = lean_ctor_get(x_439, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_439, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_439, 3);
lean_inc(x_449);
x_450 = lean_ctor_get(x_439, 4);
lean_inc(x_450);
if (lean_is_exclusive(x_439)) {
 lean_ctor_release(x_439, 0);
 lean_ctor_release(x_439, 1);
 lean_ctor_release(x_439, 2);
 lean_ctor_release(x_439, 3);
 lean_ctor_release(x_439, 4);
 x_451 = x_439;
} else {
 lean_dec_ref(x_439);
 x_451 = lean_box(0);
}
if (lean_is_scalar(x_451)) {
 x_452 = lean_alloc_ctor(0, 5, 0);
} else {
 x_452 = x_451;
}
lean_ctor_set(x_452, 0, x_447);
lean_ctor_set(x_452, 1, x_448);
lean_ctor_set(x_452, 2, x_417);
lean_ctor_set(x_452, 3, x_449);
lean_ctor_set(x_452, 4, x_450);
if (lean_is_scalar(x_446)) {
 x_453 = lean_alloc_ctor(0, 6, 0);
} else {
 x_453 = x_446;
}
lean_ctor_set(x_453, 0, x_441);
lean_ctor_set(x_453, 1, x_442);
lean_ctor_set(x_453, 2, x_452);
lean_ctor_set(x_453, 3, x_443);
lean_ctor_set(x_453, 4, x_444);
lean_ctor_set(x_453, 5, x_445);
if (lean_is_scalar(x_261)) {
 x_454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_454 = x_261;
}
lean_ctor_set(x_454, 0, x_440);
lean_ctor_set(x_454, 1, x_453);
return x_454;
}
}
}
}
}
else
{
uint8_t x_475; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_475 = !lean_is_exclusive(x_254);
if (x_475 == 0)
{
return x_254;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_254, 0);
x_477 = lean_ctor_get(x_254, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_254);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
}
}
else
{
uint8_t x_479; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_479 = !lean_is_exclusive(x_32);
if (x_479 == 0)
{
return x_32;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; 
x_480 = lean_ctor_get(x_32, 0);
x_481 = lean_ctor_get(x_32, 1);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_32);
x_482 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_482, 0, x_480);
lean_ctor_set(x_482, 1, x_481);
return x_482;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_483 = !lean_is_exclusive(x_28);
if (x_483 == 0)
{
return x_28;
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_484 = lean_ctor_get(x_28, 0);
x_485 = lean_ctor_get(x_28, 1);
lean_inc(x_485);
lean_inc(x_484);
lean_dec(x_28);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
return x_486;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Expr_isForall(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_11 = l_Array_empty___closed__1;
lean_inc(x_2);
x_12 = l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(x_1, x_2, x_2, x_11, x_8, x_9);
lean_dec(x_2);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
lean_dec(x_1);
x_16 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_14, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
lean_dec(x_1);
x_21 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_18, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
x_28 = l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3(x_4, x_5, x_6, x_1, x_2, x_7, x_8, x_9);
return x_28;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_inc(x_8);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_whnf), 3, 1);
lean_closure_set(x_13, 0, x_8);
x_14 = lean_box(x_1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1___boxed), 9, 6);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_7);
lean_closure_set(x_15, 2, x_8);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_2);
lean_closure_set(x_15, 5, x_3);
x_16 = lean_array_get_size(x_9);
x_17 = lean_nat_dec_lt(x_10, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(x_13, x_15, x_11, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_13);
x_19 = lean_array_fget(x_9, x_10);
lean_inc(x_11);
x_20 = l_Lean_Meta_getFVarLocalDecl(x_19, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_LocalDecl_type(x_21);
lean_dec(x_21);
lean_inc(x_11);
lean_inc(x_23);
x_24 = l_Lean_Meta_isClassQuick___main(x_23, x_11, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
switch (lean_obj_tag(x_25)) {
case 0:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_19);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_10, x_27);
lean_dec(x_10);
x_10 = x_28;
x_12 = x_26;
goto _start;
}
case 1:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_23);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_31 = x_24;
} else {
 lean_dec_ref(x_24);
 x_31 = lean_box(0);
}
x_32 = lean_ctor_get(x_25, 0);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_10, x_33);
lean_dec(x_10);
x_35 = !lean_is_exclusive(x_30);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_30, 2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_94; uint8_t x_95; 
x_38 = lean_ctor_get(x_36, 2);
x_94 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_36, 2, x_94);
x_95 = !lean_is_exclusive(x_11);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_11, 2);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_32);
lean_ctor_set(x_97, 1, x_19);
x_98 = lean_array_push(x_96, x_97);
lean_ctor_set(x_11, 2, x_98);
x_99 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_34, x_11, x_30);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_100);
x_39 = x_102;
x_40 = x_101;
goto block_93;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_99, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_99, 1);
lean_inc(x_104);
lean_dec(x_99);
x_105 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_105, 0, x_103);
x_39 = x_105;
x_40 = x_104;
goto block_93;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_106 = lean_ctor_get(x_11, 0);
x_107 = lean_ctor_get(x_11, 1);
x_108 = lean_ctor_get(x_11, 2);
x_109 = lean_ctor_get(x_11, 3);
x_110 = lean_ctor_get(x_11, 4);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_11);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_32);
lean_ctor_set(x_111, 1, x_19);
x_112 = lean_array_push(x_108, x_111);
x_113 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_107);
lean_ctor_set(x_113, 2, x_112);
lean_ctor_set(x_113, 3, x_109);
lean_ctor_set(x_113, 4, x_110);
x_114 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_34, x_113, x_30);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_115);
x_39 = x_117;
x_40 = x_116;
goto block_93;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_114, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_114, 1);
lean_inc(x_119);
lean_dec(x_114);
x_120 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_120, 0, x_118);
x_39 = x_120;
x_40 = x_119;
goto block_93;
}
}
block_93:
{
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_40, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
x_43 = !lean_is_exclusive(x_40);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_40, 2);
lean_dec(x_44);
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_41, 2);
lean_dec(x_46);
lean_ctor_set(x_41, 2, x_38);
if (lean_is_scalar(x_31)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_31;
 lean_ctor_set_tag(x_47, 1);
}
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_40);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_41, 0);
x_49 = lean_ctor_get(x_41, 1);
x_50 = lean_ctor_get(x_41, 3);
x_51 = lean_ctor_get(x_41, 4);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_41);
x_52 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_49);
lean_ctor_set(x_52, 2, x_38);
lean_ctor_set(x_52, 3, x_50);
lean_ctor_set(x_52, 4, x_51);
lean_ctor_set(x_40, 2, x_52);
if (lean_is_scalar(x_31)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_31;
 lean_ctor_set_tag(x_53, 1);
}
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_40);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
x_56 = lean_ctor_get(x_40, 3);
x_57 = lean_ctor_get(x_40, 4);
x_58 = lean_ctor_get(x_40, 5);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_40);
x_59 = lean_ctor_get(x_41, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_41, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_41, 3);
lean_inc(x_61);
x_62 = lean_ctor_get(x_41, 4);
lean_inc(x_62);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 lean_ctor_release(x_41, 2);
 lean_ctor_release(x_41, 3);
 lean_ctor_release(x_41, 4);
 x_63 = x_41;
} else {
 lean_dec_ref(x_41);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 5, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set(x_64, 2, x_38);
lean_ctor_set(x_64, 3, x_61);
lean_ctor_set(x_64, 4, x_62);
x_65 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_65, 0, x_54);
lean_ctor_set(x_65, 1, x_55);
lean_ctor_set(x_65, 2, x_64);
lean_ctor_set(x_65, 3, x_56);
lean_ctor_set(x_65, 4, x_57);
lean_ctor_set(x_65, 5, x_58);
if (lean_is_scalar(x_31)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_31;
 lean_ctor_set_tag(x_66, 1);
}
lean_ctor_set(x_66, 0, x_42);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_67 = lean_ctor_get(x_40, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_39, 0);
lean_inc(x_68);
lean_dec(x_39);
x_69 = !lean_is_exclusive(x_40);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_40, 2);
lean_dec(x_70);
x_71 = !lean_is_exclusive(x_67);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_67, 2);
lean_dec(x_72);
lean_ctor_set(x_67, 2, x_38);
if (lean_is_scalar(x_31)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_31;
}
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_40);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_74 = lean_ctor_get(x_67, 0);
x_75 = lean_ctor_get(x_67, 1);
x_76 = lean_ctor_get(x_67, 3);
x_77 = lean_ctor_get(x_67, 4);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_67);
x_78 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_78, 0, x_74);
lean_ctor_set(x_78, 1, x_75);
lean_ctor_set(x_78, 2, x_38);
lean_ctor_set(x_78, 3, x_76);
lean_ctor_set(x_78, 4, x_77);
lean_ctor_set(x_40, 2, x_78);
if (lean_is_scalar(x_31)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_31;
}
lean_ctor_set(x_79, 0, x_68);
lean_ctor_set(x_79, 1, x_40);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_80 = lean_ctor_get(x_40, 0);
x_81 = lean_ctor_get(x_40, 1);
x_82 = lean_ctor_get(x_40, 3);
x_83 = lean_ctor_get(x_40, 4);
x_84 = lean_ctor_get(x_40, 5);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_40);
x_85 = lean_ctor_get(x_67, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_67, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_67, 3);
lean_inc(x_87);
x_88 = lean_ctor_get(x_67, 4);
lean_inc(x_88);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 lean_ctor_release(x_67, 2);
 lean_ctor_release(x_67, 3);
 lean_ctor_release(x_67, 4);
 x_89 = x_67;
} else {
 lean_dec_ref(x_67);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(0, 5, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_86);
lean_ctor_set(x_90, 2, x_38);
lean_ctor_set(x_90, 3, x_87);
lean_ctor_set(x_90, 4, x_88);
x_91 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_91, 0, x_80);
lean_ctor_set(x_91, 1, x_81);
lean_ctor_set(x_91, 2, x_90);
lean_ctor_set(x_91, 3, x_82);
lean_ctor_set(x_91, 4, x_83);
lean_ctor_set(x_91, 5, x_84);
if (lean_is_scalar(x_31)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_31;
}
lean_ctor_set(x_92, 0, x_68);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_121 = lean_ctor_get(x_36, 0);
x_122 = lean_ctor_get(x_36, 1);
x_123 = lean_ctor_get(x_36, 2);
x_124 = lean_ctor_get(x_36, 3);
x_125 = lean_ctor_get(x_36, 4);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_36);
x_161 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_162 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_162, 0, x_121);
lean_ctor_set(x_162, 1, x_122);
lean_ctor_set(x_162, 2, x_161);
lean_ctor_set(x_162, 3, x_124);
lean_ctor_set(x_162, 4, x_125);
lean_ctor_set(x_30, 2, x_162);
x_163 = lean_ctor_get(x_11, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_11, 1);
lean_inc(x_164);
x_165 = lean_ctor_get(x_11, 2);
lean_inc(x_165);
x_166 = lean_ctor_get(x_11, 3);
lean_inc(x_166);
x_167 = lean_ctor_get(x_11, 4);
lean_inc(x_167);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 x_168 = x_11;
} else {
 lean_dec_ref(x_11);
 x_168 = lean_box(0);
}
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_32);
lean_ctor_set(x_169, 1, x_19);
x_170 = lean_array_push(x_165, x_169);
if (lean_is_scalar(x_168)) {
 x_171 = lean_alloc_ctor(0, 5, 0);
} else {
 x_171 = x_168;
}
lean_ctor_set(x_171, 0, x_163);
lean_ctor_set(x_171, 1, x_164);
lean_ctor_set(x_171, 2, x_170);
lean_ctor_set(x_171, 3, x_166);
lean_ctor_set(x_171, 4, x_167);
x_172 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_34, x_171, x_30);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_175, 0, x_173);
x_126 = x_175;
x_127 = x_174;
goto block_160;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_172, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_dec(x_172);
x_178 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_178, 0, x_176);
x_126 = x_178;
x_127 = x_177;
goto block_160;
}
block_160:
{
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_128 = lean_ctor_get(x_127, 2);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 0);
lean_inc(x_129);
lean_dec(x_126);
x_130 = lean_ctor_get(x_127, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_127, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_127, 3);
lean_inc(x_132);
x_133 = lean_ctor_get(x_127, 4);
lean_inc(x_133);
x_134 = lean_ctor_get(x_127, 5);
lean_inc(x_134);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 lean_ctor_release(x_127, 5);
 x_135 = x_127;
} else {
 lean_dec_ref(x_127);
 x_135 = lean_box(0);
}
x_136 = lean_ctor_get(x_128, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_128, 1);
lean_inc(x_137);
x_138 = lean_ctor_get(x_128, 3);
lean_inc(x_138);
x_139 = lean_ctor_get(x_128, 4);
lean_inc(x_139);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 lean_ctor_release(x_128, 4);
 x_140 = x_128;
} else {
 lean_dec_ref(x_128);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(0, 5, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_136);
lean_ctor_set(x_141, 1, x_137);
lean_ctor_set(x_141, 2, x_123);
lean_ctor_set(x_141, 3, x_138);
lean_ctor_set(x_141, 4, x_139);
if (lean_is_scalar(x_135)) {
 x_142 = lean_alloc_ctor(0, 6, 0);
} else {
 x_142 = x_135;
}
lean_ctor_set(x_142, 0, x_130);
lean_ctor_set(x_142, 1, x_131);
lean_ctor_set(x_142, 2, x_141);
lean_ctor_set(x_142, 3, x_132);
lean_ctor_set(x_142, 4, x_133);
lean_ctor_set(x_142, 5, x_134);
if (lean_is_scalar(x_31)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_31;
 lean_ctor_set_tag(x_143, 1);
}
lean_ctor_set(x_143, 0, x_129);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_144 = lean_ctor_get(x_127, 2);
lean_inc(x_144);
x_145 = lean_ctor_get(x_126, 0);
lean_inc(x_145);
lean_dec(x_126);
x_146 = lean_ctor_get(x_127, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_127, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_127, 3);
lean_inc(x_148);
x_149 = lean_ctor_get(x_127, 4);
lean_inc(x_149);
x_150 = lean_ctor_get(x_127, 5);
lean_inc(x_150);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 lean_ctor_release(x_127, 5);
 x_151 = x_127;
} else {
 lean_dec_ref(x_127);
 x_151 = lean_box(0);
}
x_152 = lean_ctor_get(x_144, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_144, 1);
lean_inc(x_153);
x_154 = lean_ctor_get(x_144, 3);
lean_inc(x_154);
x_155 = lean_ctor_get(x_144, 4);
lean_inc(x_155);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 lean_ctor_release(x_144, 2);
 lean_ctor_release(x_144, 3);
 lean_ctor_release(x_144, 4);
 x_156 = x_144;
} else {
 lean_dec_ref(x_144);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(0, 5, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_152);
lean_ctor_set(x_157, 1, x_153);
lean_ctor_set(x_157, 2, x_123);
lean_ctor_set(x_157, 3, x_154);
lean_ctor_set(x_157, 4, x_155);
if (lean_is_scalar(x_151)) {
 x_158 = lean_alloc_ctor(0, 6, 0);
} else {
 x_158 = x_151;
}
lean_ctor_set(x_158, 0, x_146);
lean_ctor_set(x_158, 1, x_147);
lean_ctor_set(x_158, 2, x_157);
lean_ctor_set(x_158, 3, x_148);
lean_ctor_set(x_158, 4, x_149);
lean_ctor_set(x_158, 5, x_150);
if (lean_is_scalar(x_31)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_31;
}
lean_ctor_set(x_159, 0, x_145);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_179 = lean_ctor_get(x_30, 2);
x_180 = lean_ctor_get(x_30, 0);
x_181 = lean_ctor_get(x_30, 1);
x_182 = lean_ctor_get(x_30, 3);
x_183 = lean_ctor_get(x_30, 4);
x_184 = lean_ctor_get(x_30, 5);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_179);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_30);
x_185 = lean_ctor_get(x_179, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_179, 1);
lean_inc(x_186);
x_187 = lean_ctor_get(x_179, 2);
lean_inc(x_187);
x_188 = lean_ctor_get(x_179, 3);
lean_inc(x_188);
x_189 = lean_ctor_get(x_179, 4);
lean_inc(x_189);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 lean_ctor_release(x_179, 2);
 lean_ctor_release(x_179, 3);
 lean_ctor_release(x_179, 4);
 x_190 = x_179;
} else {
 lean_dec_ref(x_179);
 x_190 = lean_box(0);
}
x_226 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_190)) {
 x_227 = lean_alloc_ctor(0, 5, 0);
} else {
 x_227 = x_190;
}
lean_ctor_set(x_227, 0, x_185);
lean_ctor_set(x_227, 1, x_186);
lean_ctor_set(x_227, 2, x_226);
lean_ctor_set(x_227, 3, x_188);
lean_ctor_set(x_227, 4, x_189);
x_228 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_228, 0, x_180);
lean_ctor_set(x_228, 1, x_181);
lean_ctor_set(x_228, 2, x_227);
lean_ctor_set(x_228, 3, x_182);
lean_ctor_set(x_228, 4, x_183);
lean_ctor_set(x_228, 5, x_184);
x_229 = lean_ctor_get(x_11, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_11, 1);
lean_inc(x_230);
x_231 = lean_ctor_get(x_11, 2);
lean_inc(x_231);
x_232 = lean_ctor_get(x_11, 3);
lean_inc(x_232);
x_233 = lean_ctor_get(x_11, 4);
lean_inc(x_233);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 x_234 = x_11;
} else {
 lean_dec_ref(x_11);
 x_234 = lean_box(0);
}
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_32);
lean_ctor_set(x_235, 1, x_19);
x_236 = lean_array_push(x_231, x_235);
if (lean_is_scalar(x_234)) {
 x_237 = lean_alloc_ctor(0, 5, 0);
} else {
 x_237 = x_234;
}
lean_ctor_set(x_237, 0, x_229);
lean_ctor_set(x_237, 1, x_230);
lean_ctor_set(x_237, 2, x_236);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set(x_237, 4, x_233);
x_238 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_34, x_237, x_228);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_241, 0, x_239);
x_191 = x_241;
x_192 = x_240;
goto block_225;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_238, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_238, 1);
lean_inc(x_243);
lean_dec(x_238);
x_244 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_244, 0, x_242);
x_191 = x_244;
x_192 = x_243;
goto block_225;
}
block_225:
{
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_193 = lean_ctor_get(x_192, 2);
lean_inc(x_193);
x_194 = lean_ctor_get(x_191, 0);
lean_inc(x_194);
lean_dec(x_191);
x_195 = lean_ctor_get(x_192, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_192, 1);
lean_inc(x_196);
x_197 = lean_ctor_get(x_192, 3);
lean_inc(x_197);
x_198 = lean_ctor_get(x_192, 4);
lean_inc(x_198);
x_199 = lean_ctor_get(x_192, 5);
lean_inc(x_199);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 lean_ctor_release(x_192, 2);
 lean_ctor_release(x_192, 3);
 lean_ctor_release(x_192, 4);
 lean_ctor_release(x_192, 5);
 x_200 = x_192;
} else {
 lean_dec_ref(x_192);
 x_200 = lean_box(0);
}
x_201 = lean_ctor_get(x_193, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_193, 1);
lean_inc(x_202);
x_203 = lean_ctor_get(x_193, 3);
lean_inc(x_203);
x_204 = lean_ctor_get(x_193, 4);
lean_inc(x_204);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 lean_ctor_release(x_193, 2);
 lean_ctor_release(x_193, 3);
 lean_ctor_release(x_193, 4);
 x_205 = x_193;
} else {
 lean_dec_ref(x_193);
 x_205 = lean_box(0);
}
if (lean_is_scalar(x_205)) {
 x_206 = lean_alloc_ctor(0, 5, 0);
} else {
 x_206 = x_205;
}
lean_ctor_set(x_206, 0, x_201);
lean_ctor_set(x_206, 1, x_202);
lean_ctor_set(x_206, 2, x_187);
lean_ctor_set(x_206, 3, x_203);
lean_ctor_set(x_206, 4, x_204);
if (lean_is_scalar(x_200)) {
 x_207 = lean_alloc_ctor(0, 6, 0);
} else {
 x_207 = x_200;
}
lean_ctor_set(x_207, 0, x_195);
lean_ctor_set(x_207, 1, x_196);
lean_ctor_set(x_207, 2, x_206);
lean_ctor_set(x_207, 3, x_197);
lean_ctor_set(x_207, 4, x_198);
lean_ctor_set(x_207, 5, x_199);
if (lean_is_scalar(x_31)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_31;
 lean_ctor_set_tag(x_208, 1);
}
lean_ctor_set(x_208, 0, x_194);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_209 = lean_ctor_get(x_192, 2);
lean_inc(x_209);
x_210 = lean_ctor_get(x_191, 0);
lean_inc(x_210);
lean_dec(x_191);
x_211 = lean_ctor_get(x_192, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_192, 1);
lean_inc(x_212);
x_213 = lean_ctor_get(x_192, 3);
lean_inc(x_213);
x_214 = lean_ctor_get(x_192, 4);
lean_inc(x_214);
x_215 = lean_ctor_get(x_192, 5);
lean_inc(x_215);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 lean_ctor_release(x_192, 2);
 lean_ctor_release(x_192, 3);
 lean_ctor_release(x_192, 4);
 lean_ctor_release(x_192, 5);
 x_216 = x_192;
} else {
 lean_dec_ref(x_192);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_209, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_209, 1);
lean_inc(x_218);
x_219 = lean_ctor_get(x_209, 3);
lean_inc(x_219);
x_220 = lean_ctor_get(x_209, 4);
lean_inc(x_220);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 lean_ctor_release(x_209, 2);
 lean_ctor_release(x_209, 3);
 lean_ctor_release(x_209, 4);
 x_221 = x_209;
} else {
 lean_dec_ref(x_209);
 x_221 = lean_box(0);
}
if (lean_is_scalar(x_221)) {
 x_222 = lean_alloc_ctor(0, 5, 0);
} else {
 x_222 = x_221;
}
lean_ctor_set(x_222, 0, x_217);
lean_ctor_set(x_222, 1, x_218);
lean_ctor_set(x_222, 2, x_187);
lean_ctor_set(x_222, 3, x_219);
lean_ctor_set(x_222, 4, x_220);
if (lean_is_scalar(x_216)) {
 x_223 = lean_alloc_ctor(0, 6, 0);
} else {
 x_223 = x_216;
}
lean_ctor_set(x_223, 0, x_211);
lean_ctor_set(x_223, 1, x_212);
lean_ctor_set(x_223, 2, x_222);
lean_ctor_set(x_223, 3, x_213);
lean_ctor_set(x_223, 4, x_214);
lean_ctor_set(x_223, 5, x_215);
if (lean_is_scalar(x_31)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_31;
}
lean_ctor_set(x_224, 0, x_210);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
}
default: 
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_24, 1);
lean_inc(x_245);
lean_dec(x_24);
lean_inc(x_11);
x_246 = l_Lean_Meta_isClassExpensive___main(x_23, x_11, x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_19);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_unsigned_to_nat(1u);
x_250 = lean_nat_add(x_10, x_249);
lean_dec(x_10);
x_10 = x_250;
x_12 = x_248;
goto _start;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; 
x_252 = lean_ctor_get(x_246, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_253 = x_246;
} else {
 lean_dec_ref(x_246);
 x_253 = lean_box(0);
}
x_254 = lean_ctor_get(x_247, 0);
lean_inc(x_254);
lean_dec(x_247);
x_255 = lean_unsigned_to_nat(1u);
x_256 = lean_nat_add(x_10, x_255);
lean_dec(x_10);
x_257 = !lean_is_exclusive(x_252);
if (x_257 == 0)
{
lean_object* x_258; uint8_t x_259; 
x_258 = lean_ctor_get(x_252, 2);
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_316; uint8_t x_317; 
x_260 = lean_ctor_get(x_258, 2);
x_316 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_258, 2, x_316);
x_317 = !lean_is_exclusive(x_11);
if (x_317 == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_318 = lean_ctor_get(x_11, 2);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_254);
lean_ctor_set(x_319, 1, x_19);
x_320 = lean_array_push(x_318, x_319);
lean_ctor_set(x_11, 2, x_320);
x_321 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_256, x_11, x_252);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
lean_dec(x_321);
x_324 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_324, 0, x_322);
x_261 = x_324;
x_262 = x_323;
goto block_315;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_321, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_321, 1);
lean_inc(x_326);
lean_dec(x_321);
x_327 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_327, 0, x_325);
x_261 = x_327;
x_262 = x_326;
goto block_315;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_328 = lean_ctor_get(x_11, 0);
x_329 = lean_ctor_get(x_11, 1);
x_330 = lean_ctor_get(x_11, 2);
x_331 = lean_ctor_get(x_11, 3);
x_332 = lean_ctor_get(x_11, 4);
lean_inc(x_332);
lean_inc(x_331);
lean_inc(x_330);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_11);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_254);
lean_ctor_set(x_333, 1, x_19);
x_334 = lean_array_push(x_330, x_333);
x_335 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_335, 0, x_328);
lean_ctor_set(x_335, 1, x_329);
lean_ctor_set(x_335, 2, x_334);
lean_ctor_set(x_335, 3, x_331);
lean_ctor_set(x_335, 4, x_332);
x_336 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_256, x_335, x_252);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
x_339 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_339, 0, x_337);
x_261 = x_339;
x_262 = x_338;
goto block_315;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_340 = lean_ctor_get(x_336, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_336, 1);
lean_inc(x_341);
lean_dec(x_336);
x_342 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_342, 0, x_340);
x_261 = x_342;
x_262 = x_341;
goto block_315;
}
}
block_315:
{
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_263 = lean_ctor_get(x_262, 2);
lean_inc(x_263);
x_264 = lean_ctor_get(x_261, 0);
lean_inc(x_264);
lean_dec(x_261);
x_265 = !lean_is_exclusive(x_262);
if (x_265 == 0)
{
lean_object* x_266; uint8_t x_267; 
x_266 = lean_ctor_get(x_262, 2);
lean_dec(x_266);
x_267 = !lean_is_exclusive(x_263);
if (x_267 == 0)
{
lean_object* x_268; lean_object* x_269; 
x_268 = lean_ctor_get(x_263, 2);
lean_dec(x_268);
lean_ctor_set(x_263, 2, x_260);
if (lean_is_scalar(x_253)) {
 x_269 = lean_alloc_ctor(1, 2, 0);
} else {
 x_269 = x_253;
 lean_ctor_set_tag(x_269, 1);
}
lean_ctor_set(x_269, 0, x_264);
lean_ctor_set(x_269, 1, x_262);
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_270 = lean_ctor_get(x_263, 0);
x_271 = lean_ctor_get(x_263, 1);
x_272 = lean_ctor_get(x_263, 3);
x_273 = lean_ctor_get(x_263, 4);
lean_inc(x_273);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_263);
x_274 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_274, 0, x_270);
lean_ctor_set(x_274, 1, x_271);
lean_ctor_set(x_274, 2, x_260);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set(x_274, 4, x_273);
lean_ctor_set(x_262, 2, x_274);
if (lean_is_scalar(x_253)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_253;
 lean_ctor_set_tag(x_275, 1);
}
lean_ctor_set(x_275, 0, x_264);
lean_ctor_set(x_275, 1, x_262);
return x_275;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_276 = lean_ctor_get(x_262, 0);
x_277 = lean_ctor_get(x_262, 1);
x_278 = lean_ctor_get(x_262, 3);
x_279 = lean_ctor_get(x_262, 4);
x_280 = lean_ctor_get(x_262, 5);
lean_inc(x_280);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_262);
x_281 = lean_ctor_get(x_263, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_263, 1);
lean_inc(x_282);
x_283 = lean_ctor_get(x_263, 3);
lean_inc(x_283);
x_284 = lean_ctor_get(x_263, 4);
lean_inc(x_284);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 lean_ctor_release(x_263, 2);
 lean_ctor_release(x_263, 3);
 lean_ctor_release(x_263, 4);
 x_285 = x_263;
} else {
 lean_dec_ref(x_263);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(0, 5, 0);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_281);
lean_ctor_set(x_286, 1, x_282);
lean_ctor_set(x_286, 2, x_260);
lean_ctor_set(x_286, 3, x_283);
lean_ctor_set(x_286, 4, x_284);
x_287 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_287, 0, x_276);
lean_ctor_set(x_287, 1, x_277);
lean_ctor_set(x_287, 2, x_286);
lean_ctor_set(x_287, 3, x_278);
lean_ctor_set(x_287, 4, x_279);
lean_ctor_set(x_287, 5, x_280);
if (lean_is_scalar(x_253)) {
 x_288 = lean_alloc_ctor(1, 2, 0);
} else {
 x_288 = x_253;
 lean_ctor_set_tag(x_288, 1);
}
lean_ctor_set(x_288, 0, x_264);
lean_ctor_set(x_288, 1, x_287);
return x_288;
}
}
else
{
lean_object* x_289; lean_object* x_290; uint8_t x_291; 
x_289 = lean_ctor_get(x_262, 2);
lean_inc(x_289);
x_290 = lean_ctor_get(x_261, 0);
lean_inc(x_290);
lean_dec(x_261);
x_291 = !lean_is_exclusive(x_262);
if (x_291 == 0)
{
lean_object* x_292; uint8_t x_293; 
x_292 = lean_ctor_get(x_262, 2);
lean_dec(x_292);
x_293 = !lean_is_exclusive(x_289);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; 
x_294 = lean_ctor_get(x_289, 2);
lean_dec(x_294);
lean_ctor_set(x_289, 2, x_260);
if (lean_is_scalar(x_253)) {
 x_295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_295 = x_253;
}
lean_ctor_set(x_295, 0, x_290);
lean_ctor_set(x_295, 1, x_262);
return x_295;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
x_296 = lean_ctor_get(x_289, 0);
x_297 = lean_ctor_get(x_289, 1);
x_298 = lean_ctor_get(x_289, 3);
x_299 = lean_ctor_get(x_289, 4);
lean_inc(x_299);
lean_inc(x_298);
lean_inc(x_297);
lean_inc(x_296);
lean_dec(x_289);
x_300 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_300, 0, x_296);
lean_ctor_set(x_300, 1, x_297);
lean_ctor_set(x_300, 2, x_260);
lean_ctor_set(x_300, 3, x_298);
lean_ctor_set(x_300, 4, x_299);
lean_ctor_set(x_262, 2, x_300);
if (lean_is_scalar(x_253)) {
 x_301 = lean_alloc_ctor(0, 2, 0);
} else {
 x_301 = x_253;
}
lean_ctor_set(x_301, 0, x_290);
lean_ctor_set(x_301, 1, x_262);
return x_301;
}
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_302 = lean_ctor_get(x_262, 0);
x_303 = lean_ctor_get(x_262, 1);
x_304 = lean_ctor_get(x_262, 3);
x_305 = lean_ctor_get(x_262, 4);
x_306 = lean_ctor_get(x_262, 5);
lean_inc(x_306);
lean_inc(x_305);
lean_inc(x_304);
lean_inc(x_303);
lean_inc(x_302);
lean_dec(x_262);
x_307 = lean_ctor_get(x_289, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_289, 1);
lean_inc(x_308);
x_309 = lean_ctor_get(x_289, 3);
lean_inc(x_309);
x_310 = lean_ctor_get(x_289, 4);
lean_inc(x_310);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 lean_ctor_release(x_289, 2);
 lean_ctor_release(x_289, 3);
 lean_ctor_release(x_289, 4);
 x_311 = x_289;
} else {
 lean_dec_ref(x_289);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(0, 5, 0);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_307);
lean_ctor_set(x_312, 1, x_308);
lean_ctor_set(x_312, 2, x_260);
lean_ctor_set(x_312, 3, x_309);
lean_ctor_set(x_312, 4, x_310);
x_313 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_313, 0, x_302);
lean_ctor_set(x_313, 1, x_303);
lean_ctor_set(x_313, 2, x_312);
lean_ctor_set(x_313, 3, x_304);
lean_ctor_set(x_313, 4, x_305);
lean_ctor_set(x_313, 5, x_306);
if (lean_is_scalar(x_253)) {
 x_314 = lean_alloc_ctor(0, 2, 0);
} else {
 x_314 = x_253;
}
lean_ctor_set(x_314, 0, x_290);
lean_ctor_set(x_314, 1, x_313);
return x_314;
}
}
}
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_343 = lean_ctor_get(x_258, 0);
x_344 = lean_ctor_get(x_258, 1);
x_345 = lean_ctor_get(x_258, 2);
x_346 = lean_ctor_get(x_258, 3);
x_347 = lean_ctor_get(x_258, 4);
lean_inc(x_347);
lean_inc(x_346);
lean_inc(x_345);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_258);
x_383 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_384 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_384, 0, x_343);
lean_ctor_set(x_384, 1, x_344);
lean_ctor_set(x_384, 2, x_383);
lean_ctor_set(x_384, 3, x_346);
lean_ctor_set(x_384, 4, x_347);
lean_ctor_set(x_252, 2, x_384);
x_385 = lean_ctor_get(x_11, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_11, 1);
lean_inc(x_386);
x_387 = lean_ctor_get(x_11, 2);
lean_inc(x_387);
x_388 = lean_ctor_get(x_11, 3);
lean_inc(x_388);
x_389 = lean_ctor_get(x_11, 4);
lean_inc(x_389);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 x_390 = x_11;
} else {
 lean_dec_ref(x_11);
 x_390 = lean_box(0);
}
x_391 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_391, 0, x_254);
lean_ctor_set(x_391, 1, x_19);
x_392 = lean_array_push(x_387, x_391);
if (lean_is_scalar(x_390)) {
 x_393 = lean_alloc_ctor(0, 5, 0);
} else {
 x_393 = x_390;
}
lean_ctor_set(x_393, 0, x_385);
lean_ctor_set(x_393, 1, x_386);
lean_ctor_set(x_393, 2, x_392);
lean_ctor_set(x_393, 3, x_388);
lean_ctor_set(x_393, 4, x_389);
x_394 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_256, x_393, x_252);
if (lean_obj_tag(x_394) == 0)
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; 
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_394, 1);
lean_inc(x_396);
lean_dec(x_394);
x_397 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_397, 0, x_395);
x_348 = x_397;
x_349 = x_396;
goto block_382;
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_398 = lean_ctor_get(x_394, 0);
lean_inc(x_398);
x_399 = lean_ctor_get(x_394, 1);
lean_inc(x_399);
lean_dec(x_394);
x_400 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_400, 0, x_398);
x_348 = x_400;
x_349 = x_399;
goto block_382;
}
block_382:
{
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_350 = lean_ctor_get(x_349, 2);
lean_inc(x_350);
x_351 = lean_ctor_get(x_348, 0);
lean_inc(x_351);
lean_dec(x_348);
x_352 = lean_ctor_get(x_349, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_349, 1);
lean_inc(x_353);
x_354 = lean_ctor_get(x_349, 3);
lean_inc(x_354);
x_355 = lean_ctor_get(x_349, 4);
lean_inc(x_355);
x_356 = lean_ctor_get(x_349, 5);
lean_inc(x_356);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 lean_ctor_release(x_349, 2);
 lean_ctor_release(x_349, 3);
 lean_ctor_release(x_349, 4);
 lean_ctor_release(x_349, 5);
 x_357 = x_349;
} else {
 lean_dec_ref(x_349);
 x_357 = lean_box(0);
}
x_358 = lean_ctor_get(x_350, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_350, 1);
lean_inc(x_359);
x_360 = lean_ctor_get(x_350, 3);
lean_inc(x_360);
x_361 = lean_ctor_get(x_350, 4);
lean_inc(x_361);
if (lean_is_exclusive(x_350)) {
 lean_ctor_release(x_350, 0);
 lean_ctor_release(x_350, 1);
 lean_ctor_release(x_350, 2);
 lean_ctor_release(x_350, 3);
 lean_ctor_release(x_350, 4);
 x_362 = x_350;
} else {
 lean_dec_ref(x_350);
 x_362 = lean_box(0);
}
if (lean_is_scalar(x_362)) {
 x_363 = lean_alloc_ctor(0, 5, 0);
} else {
 x_363 = x_362;
}
lean_ctor_set(x_363, 0, x_358);
lean_ctor_set(x_363, 1, x_359);
lean_ctor_set(x_363, 2, x_345);
lean_ctor_set(x_363, 3, x_360);
lean_ctor_set(x_363, 4, x_361);
if (lean_is_scalar(x_357)) {
 x_364 = lean_alloc_ctor(0, 6, 0);
} else {
 x_364 = x_357;
}
lean_ctor_set(x_364, 0, x_352);
lean_ctor_set(x_364, 1, x_353);
lean_ctor_set(x_364, 2, x_363);
lean_ctor_set(x_364, 3, x_354);
lean_ctor_set(x_364, 4, x_355);
lean_ctor_set(x_364, 5, x_356);
if (lean_is_scalar(x_253)) {
 x_365 = lean_alloc_ctor(1, 2, 0);
} else {
 x_365 = x_253;
 lean_ctor_set_tag(x_365, 1);
}
lean_ctor_set(x_365, 0, x_351);
lean_ctor_set(x_365, 1, x_364);
return x_365;
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_366 = lean_ctor_get(x_349, 2);
lean_inc(x_366);
x_367 = lean_ctor_get(x_348, 0);
lean_inc(x_367);
lean_dec(x_348);
x_368 = lean_ctor_get(x_349, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_349, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_349, 3);
lean_inc(x_370);
x_371 = lean_ctor_get(x_349, 4);
lean_inc(x_371);
x_372 = lean_ctor_get(x_349, 5);
lean_inc(x_372);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 lean_ctor_release(x_349, 2);
 lean_ctor_release(x_349, 3);
 lean_ctor_release(x_349, 4);
 lean_ctor_release(x_349, 5);
 x_373 = x_349;
} else {
 lean_dec_ref(x_349);
 x_373 = lean_box(0);
}
x_374 = lean_ctor_get(x_366, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_366, 1);
lean_inc(x_375);
x_376 = lean_ctor_get(x_366, 3);
lean_inc(x_376);
x_377 = lean_ctor_get(x_366, 4);
lean_inc(x_377);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 lean_ctor_release(x_366, 2);
 lean_ctor_release(x_366, 3);
 lean_ctor_release(x_366, 4);
 x_378 = x_366;
} else {
 lean_dec_ref(x_366);
 x_378 = lean_box(0);
}
if (lean_is_scalar(x_378)) {
 x_379 = lean_alloc_ctor(0, 5, 0);
} else {
 x_379 = x_378;
}
lean_ctor_set(x_379, 0, x_374);
lean_ctor_set(x_379, 1, x_375);
lean_ctor_set(x_379, 2, x_345);
lean_ctor_set(x_379, 3, x_376);
lean_ctor_set(x_379, 4, x_377);
if (lean_is_scalar(x_373)) {
 x_380 = lean_alloc_ctor(0, 6, 0);
} else {
 x_380 = x_373;
}
lean_ctor_set(x_380, 0, x_368);
lean_ctor_set(x_380, 1, x_369);
lean_ctor_set(x_380, 2, x_379);
lean_ctor_set(x_380, 3, x_370);
lean_ctor_set(x_380, 4, x_371);
lean_ctor_set(x_380, 5, x_372);
if (lean_is_scalar(x_253)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_253;
}
lean_ctor_set(x_381, 0, x_367);
lean_ctor_set(x_381, 1, x_380);
return x_381;
}
}
}
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_401 = lean_ctor_get(x_252, 2);
x_402 = lean_ctor_get(x_252, 0);
x_403 = lean_ctor_get(x_252, 1);
x_404 = lean_ctor_get(x_252, 3);
x_405 = lean_ctor_get(x_252, 4);
x_406 = lean_ctor_get(x_252, 5);
lean_inc(x_406);
lean_inc(x_405);
lean_inc(x_404);
lean_inc(x_401);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_252);
x_407 = lean_ctor_get(x_401, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_401, 1);
lean_inc(x_408);
x_409 = lean_ctor_get(x_401, 2);
lean_inc(x_409);
x_410 = lean_ctor_get(x_401, 3);
lean_inc(x_410);
x_411 = lean_ctor_get(x_401, 4);
lean_inc(x_411);
if (lean_is_exclusive(x_401)) {
 lean_ctor_release(x_401, 0);
 lean_ctor_release(x_401, 1);
 lean_ctor_release(x_401, 2);
 lean_ctor_release(x_401, 3);
 lean_ctor_release(x_401, 4);
 x_412 = x_401;
} else {
 lean_dec_ref(x_401);
 x_412 = lean_box(0);
}
x_448 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_412)) {
 x_449 = lean_alloc_ctor(0, 5, 0);
} else {
 x_449 = x_412;
}
lean_ctor_set(x_449, 0, x_407);
lean_ctor_set(x_449, 1, x_408);
lean_ctor_set(x_449, 2, x_448);
lean_ctor_set(x_449, 3, x_410);
lean_ctor_set(x_449, 4, x_411);
x_450 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_450, 0, x_402);
lean_ctor_set(x_450, 1, x_403);
lean_ctor_set(x_450, 2, x_449);
lean_ctor_set(x_450, 3, x_404);
lean_ctor_set(x_450, 4, x_405);
lean_ctor_set(x_450, 5, x_406);
x_451 = lean_ctor_get(x_11, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_11, 1);
lean_inc(x_452);
x_453 = lean_ctor_get(x_11, 2);
lean_inc(x_453);
x_454 = lean_ctor_get(x_11, 3);
lean_inc(x_454);
x_455 = lean_ctor_get(x_11, 4);
lean_inc(x_455);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 lean_ctor_release(x_11, 3);
 lean_ctor_release(x_11, 4);
 x_456 = x_11;
} else {
 lean_dec_ref(x_11);
 x_456 = lean_box(0);
}
x_457 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_457, 0, x_254);
lean_ctor_set(x_457, 1, x_19);
x_458 = lean_array_push(x_453, x_457);
if (lean_is_scalar(x_456)) {
 x_459 = lean_alloc_ctor(0, 5, 0);
} else {
 x_459 = x_456;
}
lean_ctor_set(x_459, 0, x_451);
lean_ctor_set(x_459, 1, x_452);
lean_ctor_set(x_459, 2, x_458);
lean_ctor_set(x_459, 3, x_454);
lean_ctor_set(x_459, 4, x_455);
x_460 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_256, x_459, x_450);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_461 = lean_ctor_get(x_460, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_460, 1);
lean_inc(x_462);
lean_dec(x_460);
x_463 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_463, 0, x_461);
x_413 = x_463;
x_414 = x_462;
goto block_447;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; 
x_464 = lean_ctor_get(x_460, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_460, 1);
lean_inc(x_465);
lean_dec(x_460);
x_466 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_466, 0, x_464);
x_413 = x_466;
x_414 = x_465;
goto block_447;
}
block_447:
{
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_415 = lean_ctor_get(x_414, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_413, 0);
lean_inc(x_416);
lean_dec(x_413);
x_417 = lean_ctor_get(x_414, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_414, 1);
lean_inc(x_418);
x_419 = lean_ctor_get(x_414, 3);
lean_inc(x_419);
x_420 = lean_ctor_get(x_414, 4);
lean_inc(x_420);
x_421 = lean_ctor_get(x_414, 5);
lean_inc(x_421);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 lean_ctor_release(x_414, 2);
 lean_ctor_release(x_414, 3);
 lean_ctor_release(x_414, 4);
 lean_ctor_release(x_414, 5);
 x_422 = x_414;
} else {
 lean_dec_ref(x_414);
 x_422 = lean_box(0);
}
x_423 = lean_ctor_get(x_415, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_415, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_415, 3);
lean_inc(x_425);
x_426 = lean_ctor_get(x_415, 4);
lean_inc(x_426);
if (lean_is_exclusive(x_415)) {
 lean_ctor_release(x_415, 0);
 lean_ctor_release(x_415, 1);
 lean_ctor_release(x_415, 2);
 lean_ctor_release(x_415, 3);
 lean_ctor_release(x_415, 4);
 x_427 = x_415;
} else {
 lean_dec_ref(x_415);
 x_427 = lean_box(0);
}
if (lean_is_scalar(x_427)) {
 x_428 = lean_alloc_ctor(0, 5, 0);
} else {
 x_428 = x_427;
}
lean_ctor_set(x_428, 0, x_423);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_409);
lean_ctor_set(x_428, 3, x_425);
lean_ctor_set(x_428, 4, x_426);
if (lean_is_scalar(x_422)) {
 x_429 = lean_alloc_ctor(0, 6, 0);
} else {
 x_429 = x_422;
}
lean_ctor_set(x_429, 0, x_417);
lean_ctor_set(x_429, 1, x_418);
lean_ctor_set(x_429, 2, x_428);
lean_ctor_set(x_429, 3, x_419);
lean_ctor_set(x_429, 4, x_420);
lean_ctor_set(x_429, 5, x_421);
if (lean_is_scalar(x_253)) {
 x_430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_430 = x_253;
 lean_ctor_set_tag(x_430, 1);
}
lean_ctor_set(x_430, 0, x_416);
lean_ctor_set(x_430, 1, x_429);
return x_430;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_431 = lean_ctor_get(x_414, 2);
lean_inc(x_431);
x_432 = lean_ctor_get(x_413, 0);
lean_inc(x_432);
lean_dec(x_413);
x_433 = lean_ctor_get(x_414, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_414, 1);
lean_inc(x_434);
x_435 = lean_ctor_get(x_414, 3);
lean_inc(x_435);
x_436 = lean_ctor_get(x_414, 4);
lean_inc(x_436);
x_437 = lean_ctor_get(x_414, 5);
lean_inc(x_437);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 lean_ctor_release(x_414, 2);
 lean_ctor_release(x_414, 3);
 lean_ctor_release(x_414, 4);
 lean_ctor_release(x_414, 5);
 x_438 = x_414;
} else {
 lean_dec_ref(x_414);
 x_438 = lean_box(0);
}
x_439 = lean_ctor_get(x_431, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_431, 1);
lean_inc(x_440);
x_441 = lean_ctor_get(x_431, 3);
lean_inc(x_441);
x_442 = lean_ctor_get(x_431, 4);
lean_inc(x_442);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 lean_ctor_release(x_431, 2);
 lean_ctor_release(x_431, 3);
 lean_ctor_release(x_431, 4);
 x_443 = x_431;
} else {
 lean_dec_ref(x_431);
 x_443 = lean_box(0);
}
if (lean_is_scalar(x_443)) {
 x_444 = lean_alloc_ctor(0, 5, 0);
} else {
 x_444 = x_443;
}
lean_ctor_set(x_444, 0, x_439);
lean_ctor_set(x_444, 1, x_440);
lean_ctor_set(x_444, 2, x_409);
lean_ctor_set(x_444, 3, x_441);
lean_ctor_set(x_444, 4, x_442);
if (lean_is_scalar(x_438)) {
 x_445 = lean_alloc_ctor(0, 6, 0);
} else {
 x_445 = x_438;
}
lean_ctor_set(x_445, 0, x_433);
lean_ctor_set(x_445, 1, x_434);
lean_ctor_set(x_445, 2, x_444);
lean_ctor_set(x_445, 3, x_435);
lean_ctor_set(x_445, 4, x_436);
lean_ctor_set(x_445, 5, x_437);
if (lean_is_scalar(x_253)) {
 x_446 = lean_alloc_ctor(0, 2, 0);
} else {
 x_446 = x_253;
}
lean_ctor_set(x_446, 0, x_432);
lean_ctor_set(x_446, 1, x_445);
return x_446;
}
}
}
}
}
else
{
uint8_t x_467; 
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_467 = !lean_is_exclusive(x_246);
if (x_467 == 0)
{
return x_246;
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; 
x_468 = lean_ctor_get(x_246, 0);
x_469 = lean_ctor_get(x_246, 1);
lean_inc(x_469);
lean_inc(x_468);
lean_dec(x_246);
x_470 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_470, 0, x_468);
lean_ctor_set(x_470, 1, x_469);
return x_470;
}
}
}
}
}
else
{
uint8_t x_471; 
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_471 = !lean_is_exclusive(x_24);
if (x_471 == 0)
{
return x_24;
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_24, 0);
x_473 = lean_ctor_get(x_24, 1);
lean_inc(x_473);
lean_inc(x_472);
lean_dec(x_24);
x_474 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_474, 0, x_472);
lean_ctor_set(x_474, 1, x_473);
return x_474;
}
}
}
else
{
uint8_t x_475; 
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_475 = !lean_is_exclusive(x_20);
if (x_475 == 0)
{
return x_20;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_20, 0);
x_477 = lean_ctor_get(x_20, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_20);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_nat_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = l_Array_empty___closed__1;
lean_inc(x_2);
x_11 = l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(x_1, x_2, x_2, x_10, x_6, x_7);
lean_dec(x_2);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
x_15 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_13, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_1, x_3);
x_20 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_17, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_array_fget(x_4, x_5);
lean_inc(x_6);
x_28 = l_Lean_Meta_getFVarLocalDecl(x_27, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_LocalDecl_type(x_29);
lean_dec(x_29);
lean_inc(x_6);
lean_inc(x_31);
x_32 = l_Lean_Meta_isClassQuick___main(x_31, x_6, x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
switch (lean_obj_tag(x_33)) {
case 0:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_27);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_5, x_35);
lean_dec(x_5);
x_5 = x_36;
x_7 = x_34;
goto _start;
}
case 1:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_31);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_39 = x_32;
} else {
 lean_dec_ref(x_32);
 x_39 = lean_box(0);
}
x_40 = lean_ctor_get(x_33, 0);
lean_inc(x_40);
lean_dec(x_33);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_5, x_41);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_38, 2);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_102; uint8_t x_103; 
x_46 = lean_ctor_get(x_44, 2);
x_102 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_44, 2, x_102);
x_103 = !lean_is_exclusive(x_6);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_6, 2);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_40);
lean_ctor_set(x_105, 1, x_27);
x_106 = lean_array_push(x_104, x_105);
lean_ctor_set(x_6, 2, x_106);
x_107 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_42, x_6, x_38);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_110, 0, x_108);
x_47 = x_110;
x_48 = x_109;
goto block_101;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_107, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_dec(x_107);
x_113 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_113, 0, x_111);
x_47 = x_113;
x_48 = x_112;
goto block_101;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_114 = lean_ctor_get(x_6, 0);
x_115 = lean_ctor_get(x_6, 1);
x_116 = lean_ctor_get(x_6, 2);
x_117 = lean_ctor_get(x_6, 3);
x_118 = lean_ctor_get(x_6, 4);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_6);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_40);
lean_ctor_set(x_119, 1, x_27);
x_120 = lean_array_push(x_116, x_119);
x_121 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_121, 0, x_114);
lean_ctor_set(x_121, 1, x_115);
lean_ctor_set(x_121, 2, x_120);
lean_ctor_set(x_121, 3, x_117);
lean_ctor_set(x_121, 4, x_118);
x_122 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_42, x_121, x_38);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_123);
x_47 = x_125;
x_48 = x_124;
goto block_101;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_122, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_126);
x_47 = x_128;
x_48 = x_127;
goto block_101;
}
}
block_101:
{
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_48, 2);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
lean_dec(x_47);
x_51 = !lean_is_exclusive(x_48);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_48, 2);
lean_dec(x_52);
x_53 = !lean_is_exclusive(x_49);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_49, 2);
lean_dec(x_54);
lean_ctor_set(x_49, 2, x_46);
if (lean_is_scalar(x_39)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_39;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_49, 0);
x_57 = lean_ctor_get(x_49, 1);
x_58 = lean_ctor_get(x_49, 3);
x_59 = lean_ctor_get(x_49, 4);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_49);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_57);
lean_ctor_set(x_60, 2, x_46);
lean_ctor_set(x_60, 3, x_58);
lean_ctor_set(x_60, 4, x_59);
lean_ctor_set(x_48, 2, x_60);
if (lean_is_scalar(x_39)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_39;
 lean_ctor_set_tag(x_61, 1);
}
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_48);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_48, 0);
x_63 = lean_ctor_get(x_48, 1);
x_64 = lean_ctor_get(x_48, 3);
x_65 = lean_ctor_get(x_48, 4);
x_66 = lean_ctor_get(x_48, 5);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_48);
x_67 = lean_ctor_get(x_49, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_49, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_49, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_49, 4);
lean_inc(x_70);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 lean_ctor_release(x_49, 3);
 lean_ctor_release(x_49, 4);
 x_71 = x_49;
} else {
 lean_dec_ref(x_49);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 5, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_68);
lean_ctor_set(x_72, 2, x_46);
lean_ctor_set(x_72, 3, x_69);
lean_ctor_set(x_72, 4, x_70);
x_73 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_73, 0, x_62);
lean_ctor_set(x_73, 1, x_63);
lean_ctor_set(x_73, 2, x_72);
lean_ctor_set(x_73, 3, x_64);
lean_ctor_set(x_73, 4, x_65);
lean_ctor_set(x_73, 5, x_66);
if (lean_is_scalar(x_39)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_39;
 lean_ctor_set_tag(x_74, 1);
}
lean_ctor_set(x_74, 0, x_50);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_75 = lean_ctor_get(x_48, 2);
lean_inc(x_75);
x_76 = lean_ctor_get(x_47, 0);
lean_inc(x_76);
lean_dec(x_47);
x_77 = !lean_is_exclusive(x_48);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
x_78 = lean_ctor_get(x_48, 2);
lean_dec(x_78);
x_79 = !lean_is_exclusive(x_75);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_75, 2);
lean_dec(x_80);
lean_ctor_set(x_75, 2, x_46);
if (lean_is_scalar(x_39)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_39;
}
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_48);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_75, 0);
x_83 = lean_ctor_get(x_75, 1);
x_84 = lean_ctor_get(x_75, 3);
x_85 = lean_ctor_get(x_75, 4);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_75);
x_86 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_86, 0, x_82);
lean_ctor_set(x_86, 1, x_83);
lean_ctor_set(x_86, 2, x_46);
lean_ctor_set(x_86, 3, x_84);
lean_ctor_set(x_86, 4, x_85);
lean_ctor_set(x_48, 2, x_86);
if (lean_is_scalar(x_39)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_39;
}
lean_ctor_set(x_87, 0, x_76);
lean_ctor_set(x_87, 1, x_48);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_88 = lean_ctor_get(x_48, 0);
x_89 = lean_ctor_get(x_48, 1);
x_90 = lean_ctor_get(x_48, 3);
x_91 = lean_ctor_get(x_48, 4);
x_92 = lean_ctor_get(x_48, 5);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_48);
x_93 = lean_ctor_get(x_75, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_75, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_75, 3);
lean_inc(x_95);
x_96 = lean_ctor_get(x_75, 4);
lean_inc(x_96);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 lean_ctor_release(x_75, 4);
 x_97 = x_75;
} else {
 lean_dec_ref(x_75);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 5, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_94);
lean_ctor_set(x_98, 2, x_46);
lean_ctor_set(x_98, 3, x_95);
lean_ctor_set(x_98, 4, x_96);
x_99 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_99, 0, x_88);
lean_ctor_set(x_99, 1, x_89);
lean_ctor_set(x_99, 2, x_98);
lean_ctor_set(x_99, 3, x_90);
lean_ctor_set(x_99, 4, x_91);
lean_ctor_set(x_99, 5, x_92);
if (lean_is_scalar(x_39)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_39;
}
lean_ctor_set(x_100, 0, x_76);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_129 = lean_ctor_get(x_44, 0);
x_130 = lean_ctor_get(x_44, 1);
x_131 = lean_ctor_get(x_44, 2);
x_132 = lean_ctor_get(x_44, 3);
x_133 = lean_ctor_get(x_44, 4);
lean_inc(x_133);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_44);
x_169 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_170 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_170, 0, x_129);
lean_ctor_set(x_170, 1, x_130);
lean_ctor_set(x_170, 2, x_169);
lean_ctor_set(x_170, 3, x_132);
lean_ctor_set(x_170, 4, x_133);
lean_ctor_set(x_38, 2, x_170);
x_171 = lean_ctor_get(x_6, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_6, 1);
lean_inc(x_172);
x_173 = lean_ctor_get(x_6, 2);
lean_inc(x_173);
x_174 = lean_ctor_get(x_6, 3);
lean_inc(x_174);
x_175 = lean_ctor_get(x_6, 4);
lean_inc(x_175);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_176 = x_6;
} else {
 lean_dec_ref(x_6);
 x_176 = lean_box(0);
}
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_40);
lean_ctor_set(x_177, 1, x_27);
x_178 = lean_array_push(x_173, x_177);
if (lean_is_scalar(x_176)) {
 x_179 = lean_alloc_ctor(0, 5, 0);
} else {
 x_179 = x_176;
}
lean_ctor_set(x_179, 0, x_171);
lean_ctor_set(x_179, 1, x_172);
lean_ctor_set(x_179, 2, x_178);
lean_ctor_set(x_179, 3, x_174);
lean_ctor_set(x_179, 4, x_175);
x_180 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_42, x_179, x_38);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_181);
x_134 = x_183;
x_135 = x_182;
goto block_168;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_180, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_dec(x_180);
x_186 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_186, 0, x_184);
x_134 = x_186;
x_135 = x_185;
goto block_168;
}
block_168:
{
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_136 = lean_ctor_get(x_135, 2);
lean_inc(x_136);
x_137 = lean_ctor_get(x_134, 0);
lean_inc(x_137);
lean_dec(x_134);
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_135, 3);
lean_inc(x_140);
x_141 = lean_ctor_get(x_135, 4);
lean_inc(x_141);
x_142 = lean_ctor_get(x_135, 5);
lean_inc(x_142);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 lean_ctor_release(x_135, 4);
 lean_ctor_release(x_135, 5);
 x_143 = x_135;
} else {
 lean_dec_ref(x_135);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_136, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_136, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_136, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_136, 4);
lean_inc(x_147);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 lean_ctor_release(x_136, 4);
 x_148 = x_136;
} else {
 lean_dec_ref(x_136);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(0, 5, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_144);
lean_ctor_set(x_149, 1, x_145);
lean_ctor_set(x_149, 2, x_131);
lean_ctor_set(x_149, 3, x_146);
lean_ctor_set(x_149, 4, x_147);
if (lean_is_scalar(x_143)) {
 x_150 = lean_alloc_ctor(0, 6, 0);
} else {
 x_150 = x_143;
}
lean_ctor_set(x_150, 0, x_138);
lean_ctor_set(x_150, 1, x_139);
lean_ctor_set(x_150, 2, x_149);
lean_ctor_set(x_150, 3, x_140);
lean_ctor_set(x_150, 4, x_141);
lean_ctor_set(x_150, 5, x_142);
if (lean_is_scalar(x_39)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_39;
 lean_ctor_set_tag(x_151, 1);
}
lean_ctor_set(x_151, 0, x_137);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_152 = lean_ctor_get(x_135, 2);
lean_inc(x_152);
x_153 = lean_ctor_get(x_134, 0);
lean_inc(x_153);
lean_dec(x_134);
x_154 = lean_ctor_get(x_135, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_135, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_135, 3);
lean_inc(x_156);
x_157 = lean_ctor_get(x_135, 4);
lean_inc(x_157);
x_158 = lean_ctor_get(x_135, 5);
lean_inc(x_158);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 lean_ctor_release(x_135, 4);
 lean_ctor_release(x_135, 5);
 x_159 = x_135;
} else {
 lean_dec_ref(x_135);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_152, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_152, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_152, 3);
lean_inc(x_162);
x_163 = lean_ctor_get(x_152, 4);
lean_inc(x_163);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 x_164 = x_152;
} else {
 lean_dec_ref(x_152);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(0, 5, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_161);
lean_ctor_set(x_165, 2, x_131);
lean_ctor_set(x_165, 3, x_162);
lean_ctor_set(x_165, 4, x_163);
if (lean_is_scalar(x_159)) {
 x_166 = lean_alloc_ctor(0, 6, 0);
} else {
 x_166 = x_159;
}
lean_ctor_set(x_166, 0, x_154);
lean_ctor_set(x_166, 1, x_155);
lean_ctor_set(x_166, 2, x_165);
lean_ctor_set(x_166, 3, x_156);
lean_ctor_set(x_166, 4, x_157);
lean_ctor_set(x_166, 5, x_158);
if (lean_is_scalar(x_39)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_39;
}
lean_ctor_set(x_167, 0, x_153);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_187 = lean_ctor_get(x_38, 2);
x_188 = lean_ctor_get(x_38, 0);
x_189 = lean_ctor_get(x_38, 1);
x_190 = lean_ctor_get(x_38, 3);
x_191 = lean_ctor_get(x_38, 4);
x_192 = lean_ctor_get(x_38, 5);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_187);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_38);
x_193 = lean_ctor_get(x_187, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_187, 1);
lean_inc(x_194);
x_195 = lean_ctor_get(x_187, 2);
lean_inc(x_195);
x_196 = lean_ctor_get(x_187, 3);
lean_inc(x_196);
x_197 = lean_ctor_get(x_187, 4);
lean_inc(x_197);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 lean_ctor_release(x_187, 2);
 lean_ctor_release(x_187, 3);
 lean_ctor_release(x_187, 4);
 x_198 = x_187;
} else {
 lean_dec_ref(x_187);
 x_198 = lean_box(0);
}
x_234 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_198)) {
 x_235 = lean_alloc_ctor(0, 5, 0);
} else {
 x_235 = x_198;
}
lean_ctor_set(x_235, 0, x_193);
lean_ctor_set(x_235, 1, x_194);
lean_ctor_set(x_235, 2, x_234);
lean_ctor_set(x_235, 3, x_196);
lean_ctor_set(x_235, 4, x_197);
x_236 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_236, 0, x_188);
lean_ctor_set(x_236, 1, x_189);
lean_ctor_set(x_236, 2, x_235);
lean_ctor_set(x_236, 3, x_190);
lean_ctor_set(x_236, 4, x_191);
lean_ctor_set(x_236, 5, x_192);
x_237 = lean_ctor_get(x_6, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_6, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_6, 2);
lean_inc(x_239);
x_240 = lean_ctor_get(x_6, 3);
lean_inc(x_240);
x_241 = lean_ctor_get(x_6, 4);
lean_inc(x_241);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_242 = x_6;
} else {
 lean_dec_ref(x_6);
 x_242 = lean_box(0);
}
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_40);
lean_ctor_set(x_243, 1, x_27);
x_244 = lean_array_push(x_239, x_243);
if (lean_is_scalar(x_242)) {
 x_245 = lean_alloc_ctor(0, 5, 0);
} else {
 x_245 = x_242;
}
lean_ctor_set(x_245, 0, x_237);
lean_ctor_set(x_245, 1, x_238);
lean_ctor_set(x_245, 2, x_244);
lean_ctor_set(x_245, 3, x_240);
lean_ctor_set(x_245, 4, x_241);
x_246 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_42, x_245, x_236);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_247);
x_199 = x_249;
x_200 = x_248;
goto block_233;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_246, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_246, 1);
lean_inc(x_251);
lean_dec(x_246);
x_252 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_252, 0, x_250);
x_199 = x_252;
x_200 = x_251;
goto block_233;
}
block_233:
{
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_201 = lean_ctor_get(x_200, 2);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 0);
lean_inc(x_202);
lean_dec(x_199);
x_203 = lean_ctor_get(x_200, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_200, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_200, 3);
lean_inc(x_205);
x_206 = lean_ctor_get(x_200, 4);
lean_inc(x_206);
x_207 = lean_ctor_get(x_200, 5);
lean_inc(x_207);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 lean_ctor_release(x_200, 4);
 lean_ctor_release(x_200, 5);
 x_208 = x_200;
} else {
 lean_dec_ref(x_200);
 x_208 = lean_box(0);
}
x_209 = lean_ctor_get(x_201, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_201, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_201, 3);
lean_inc(x_211);
x_212 = lean_ctor_get(x_201, 4);
lean_inc(x_212);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 lean_ctor_release(x_201, 2);
 lean_ctor_release(x_201, 3);
 lean_ctor_release(x_201, 4);
 x_213 = x_201;
} else {
 lean_dec_ref(x_201);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(0, 5, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_209);
lean_ctor_set(x_214, 1, x_210);
lean_ctor_set(x_214, 2, x_195);
lean_ctor_set(x_214, 3, x_211);
lean_ctor_set(x_214, 4, x_212);
if (lean_is_scalar(x_208)) {
 x_215 = lean_alloc_ctor(0, 6, 0);
} else {
 x_215 = x_208;
}
lean_ctor_set(x_215, 0, x_203);
lean_ctor_set(x_215, 1, x_204);
lean_ctor_set(x_215, 2, x_214);
lean_ctor_set(x_215, 3, x_205);
lean_ctor_set(x_215, 4, x_206);
lean_ctor_set(x_215, 5, x_207);
if (lean_is_scalar(x_39)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_39;
 lean_ctor_set_tag(x_216, 1);
}
lean_ctor_set(x_216, 0, x_202);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_217 = lean_ctor_get(x_200, 2);
lean_inc(x_217);
x_218 = lean_ctor_get(x_199, 0);
lean_inc(x_218);
lean_dec(x_199);
x_219 = lean_ctor_get(x_200, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_200, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_200, 3);
lean_inc(x_221);
x_222 = lean_ctor_get(x_200, 4);
lean_inc(x_222);
x_223 = lean_ctor_get(x_200, 5);
lean_inc(x_223);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 lean_ctor_release(x_200, 4);
 lean_ctor_release(x_200, 5);
 x_224 = x_200;
} else {
 lean_dec_ref(x_200);
 x_224 = lean_box(0);
}
x_225 = lean_ctor_get(x_217, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_217, 1);
lean_inc(x_226);
x_227 = lean_ctor_get(x_217, 3);
lean_inc(x_227);
x_228 = lean_ctor_get(x_217, 4);
lean_inc(x_228);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 lean_ctor_release(x_217, 2);
 lean_ctor_release(x_217, 3);
 lean_ctor_release(x_217, 4);
 x_229 = x_217;
} else {
 lean_dec_ref(x_217);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(0, 5, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_225);
lean_ctor_set(x_230, 1, x_226);
lean_ctor_set(x_230, 2, x_195);
lean_ctor_set(x_230, 3, x_227);
lean_ctor_set(x_230, 4, x_228);
if (lean_is_scalar(x_224)) {
 x_231 = lean_alloc_ctor(0, 6, 0);
} else {
 x_231 = x_224;
}
lean_ctor_set(x_231, 0, x_219);
lean_ctor_set(x_231, 1, x_220);
lean_ctor_set(x_231, 2, x_230);
lean_ctor_set(x_231, 3, x_221);
lean_ctor_set(x_231, 4, x_222);
lean_ctor_set(x_231, 5, x_223);
if (lean_is_scalar(x_39)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_39;
}
lean_ctor_set(x_232, 0, x_218);
lean_ctor_set(x_232, 1, x_231);
return x_232;
}
}
}
}
default: 
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_ctor_get(x_32, 1);
lean_inc(x_253);
lean_dec(x_32);
lean_inc(x_6);
x_254 = l_Lean_Meta_isClassExpensive___main(x_31, x_6, x_253);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_27);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
x_257 = lean_unsigned_to_nat(1u);
x_258 = lean_nat_add(x_5, x_257);
lean_dec(x_5);
x_5 = x_258;
x_7 = x_256;
goto _start;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_260 = lean_ctor_get(x_254, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_261 = x_254;
} else {
 lean_dec_ref(x_254);
 x_261 = lean_box(0);
}
x_262 = lean_ctor_get(x_255, 0);
lean_inc(x_262);
lean_dec(x_255);
x_263 = lean_unsigned_to_nat(1u);
x_264 = lean_nat_add(x_5, x_263);
lean_dec(x_5);
x_265 = !lean_is_exclusive(x_260);
if (x_265 == 0)
{
lean_object* x_266; uint8_t x_267; 
x_266 = lean_ctor_get(x_260, 2);
x_267 = !lean_is_exclusive(x_266);
if (x_267 == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_324; uint8_t x_325; 
x_268 = lean_ctor_get(x_266, 2);
x_324 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
lean_ctor_set(x_266, 2, x_324);
x_325 = !lean_is_exclusive(x_6);
if (x_325 == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_326 = lean_ctor_get(x_6, 2);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_262);
lean_ctor_set(x_327, 1, x_27);
x_328 = lean_array_push(x_326, x_327);
lean_ctor_set(x_6, 2, x_328);
x_329 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_264, x_6, x_260);
if (lean_obj_tag(x_329) == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_332 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_332, 0, x_330);
x_269 = x_332;
x_270 = x_331;
goto block_323;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_329, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_329, 1);
lean_inc(x_334);
lean_dec(x_329);
x_335 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_335, 0, x_333);
x_269 = x_335;
x_270 = x_334;
goto block_323;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_336 = lean_ctor_get(x_6, 0);
x_337 = lean_ctor_get(x_6, 1);
x_338 = lean_ctor_get(x_6, 2);
x_339 = lean_ctor_get(x_6, 3);
x_340 = lean_ctor_get(x_6, 4);
lean_inc(x_340);
lean_inc(x_339);
lean_inc(x_338);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_6);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_262);
lean_ctor_set(x_341, 1, x_27);
x_342 = lean_array_push(x_338, x_341);
x_343 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_343, 0, x_336);
lean_ctor_set(x_343, 1, x_337);
lean_ctor_set(x_343, 2, x_342);
lean_ctor_set(x_343, 3, x_339);
lean_ctor_set(x_343, 4, x_340);
x_344 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_264, x_343, x_260);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
lean_dec(x_344);
x_347 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_347, 0, x_345);
x_269 = x_347;
x_270 = x_346;
goto block_323;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_348 = lean_ctor_get(x_344, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_344, 1);
lean_inc(x_349);
lean_dec(x_344);
x_350 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_350, 0, x_348);
x_269 = x_350;
x_270 = x_349;
goto block_323;
}
}
block_323:
{
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_271 = lean_ctor_get(x_270, 2);
lean_inc(x_271);
x_272 = lean_ctor_get(x_269, 0);
lean_inc(x_272);
lean_dec(x_269);
x_273 = !lean_is_exclusive(x_270);
if (x_273 == 0)
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_270, 2);
lean_dec(x_274);
x_275 = !lean_is_exclusive(x_271);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_271, 2);
lean_dec(x_276);
lean_ctor_set(x_271, 2, x_268);
if (lean_is_scalar(x_261)) {
 x_277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_277 = x_261;
 lean_ctor_set_tag(x_277, 1);
}
lean_ctor_set(x_277, 0, x_272);
lean_ctor_set(x_277, 1, x_270);
return x_277;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_278 = lean_ctor_get(x_271, 0);
x_279 = lean_ctor_get(x_271, 1);
x_280 = lean_ctor_get(x_271, 3);
x_281 = lean_ctor_get(x_271, 4);
lean_inc(x_281);
lean_inc(x_280);
lean_inc(x_279);
lean_inc(x_278);
lean_dec(x_271);
x_282 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_282, 0, x_278);
lean_ctor_set(x_282, 1, x_279);
lean_ctor_set(x_282, 2, x_268);
lean_ctor_set(x_282, 3, x_280);
lean_ctor_set(x_282, 4, x_281);
lean_ctor_set(x_270, 2, x_282);
if (lean_is_scalar(x_261)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_261;
 lean_ctor_set_tag(x_283, 1);
}
lean_ctor_set(x_283, 0, x_272);
lean_ctor_set(x_283, 1, x_270);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_284 = lean_ctor_get(x_270, 0);
x_285 = lean_ctor_get(x_270, 1);
x_286 = lean_ctor_get(x_270, 3);
x_287 = lean_ctor_get(x_270, 4);
x_288 = lean_ctor_get(x_270, 5);
lean_inc(x_288);
lean_inc(x_287);
lean_inc(x_286);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_270);
x_289 = lean_ctor_get(x_271, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_271, 1);
lean_inc(x_290);
x_291 = lean_ctor_get(x_271, 3);
lean_inc(x_291);
x_292 = lean_ctor_get(x_271, 4);
lean_inc(x_292);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 lean_ctor_release(x_271, 2);
 lean_ctor_release(x_271, 3);
 lean_ctor_release(x_271, 4);
 x_293 = x_271;
} else {
 lean_dec_ref(x_271);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(0, 5, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_289);
lean_ctor_set(x_294, 1, x_290);
lean_ctor_set(x_294, 2, x_268);
lean_ctor_set(x_294, 3, x_291);
lean_ctor_set(x_294, 4, x_292);
x_295 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_295, 0, x_284);
lean_ctor_set(x_295, 1, x_285);
lean_ctor_set(x_295, 2, x_294);
lean_ctor_set(x_295, 3, x_286);
lean_ctor_set(x_295, 4, x_287);
lean_ctor_set(x_295, 5, x_288);
if (lean_is_scalar(x_261)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_261;
 lean_ctor_set_tag(x_296, 1);
}
lean_ctor_set(x_296, 0, x_272);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
else
{
lean_object* x_297; lean_object* x_298; uint8_t x_299; 
x_297 = lean_ctor_get(x_270, 2);
lean_inc(x_297);
x_298 = lean_ctor_get(x_269, 0);
lean_inc(x_298);
lean_dec(x_269);
x_299 = !lean_is_exclusive(x_270);
if (x_299 == 0)
{
lean_object* x_300; uint8_t x_301; 
x_300 = lean_ctor_get(x_270, 2);
lean_dec(x_300);
x_301 = !lean_is_exclusive(x_297);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_297, 2);
lean_dec(x_302);
lean_ctor_set(x_297, 2, x_268);
if (lean_is_scalar(x_261)) {
 x_303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_303 = x_261;
}
lean_ctor_set(x_303, 0, x_298);
lean_ctor_set(x_303, 1, x_270);
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_304 = lean_ctor_get(x_297, 0);
x_305 = lean_ctor_get(x_297, 1);
x_306 = lean_ctor_get(x_297, 3);
x_307 = lean_ctor_get(x_297, 4);
lean_inc(x_307);
lean_inc(x_306);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_297);
x_308 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_308, 0, x_304);
lean_ctor_set(x_308, 1, x_305);
lean_ctor_set(x_308, 2, x_268);
lean_ctor_set(x_308, 3, x_306);
lean_ctor_set(x_308, 4, x_307);
lean_ctor_set(x_270, 2, x_308);
if (lean_is_scalar(x_261)) {
 x_309 = lean_alloc_ctor(0, 2, 0);
} else {
 x_309 = x_261;
}
lean_ctor_set(x_309, 0, x_298);
lean_ctor_set(x_309, 1, x_270);
return x_309;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_310 = lean_ctor_get(x_270, 0);
x_311 = lean_ctor_get(x_270, 1);
x_312 = lean_ctor_get(x_270, 3);
x_313 = lean_ctor_get(x_270, 4);
x_314 = lean_ctor_get(x_270, 5);
lean_inc(x_314);
lean_inc(x_313);
lean_inc(x_312);
lean_inc(x_311);
lean_inc(x_310);
lean_dec(x_270);
x_315 = lean_ctor_get(x_297, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_297, 1);
lean_inc(x_316);
x_317 = lean_ctor_get(x_297, 3);
lean_inc(x_317);
x_318 = lean_ctor_get(x_297, 4);
lean_inc(x_318);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 lean_ctor_release(x_297, 4);
 x_319 = x_297;
} else {
 lean_dec_ref(x_297);
 x_319 = lean_box(0);
}
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(0, 5, 0);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_315);
lean_ctor_set(x_320, 1, x_316);
lean_ctor_set(x_320, 2, x_268);
lean_ctor_set(x_320, 3, x_317);
lean_ctor_set(x_320, 4, x_318);
x_321 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_321, 0, x_310);
lean_ctor_set(x_321, 1, x_311);
lean_ctor_set(x_321, 2, x_320);
lean_ctor_set(x_321, 3, x_312);
lean_ctor_set(x_321, 4, x_313);
lean_ctor_set(x_321, 5, x_314);
if (lean_is_scalar(x_261)) {
 x_322 = lean_alloc_ctor(0, 2, 0);
} else {
 x_322 = x_261;
}
lean_ctor_set(x_322, 0, x_298);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
}
}
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_351 = lean_ctor_get(x_266, 0);
x_352 = lean_ctor_get(x_266, 1);
x_353 = lean_ctor_get(x_266, 2);
x_354 = lean_ctor_get(x_266, 3);
x_355 = lean_ctor_get(x_266, 4);
lean_inc(x_355);
lean_inc(x_354);
lean_inc(x_353);
lean_inc(x_352);
lean_inc(x_351);
lean_dec(x_266);
x_391 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
x_392 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_392, 0, x_351);
lean_ctor_set(x_392, 1, x_352);
lean_ctor_set(x_392, 2, x_391);
lean_ctor_set(x_392, 3, x_354);
lean_ctor_set(x_392, 4, x_355);
lean_ctor_set(x_260, 2, x_392);
x_393 = lean_ctor_get(x_6, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_6, 1);
lean_inc(x_394);
x_395 = lean_ctor_get(x_6, 2);
lean_inc(x_395);
x_396 = lean_ctor_get(x_6, 3);
lean_inc(x_396);
x_397 = lean_ctor_get(x_6, 4);
lean_inc(x_397);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_398 = x_6;
} else {
 lean_dec_ref(x_6);
 x_398 = lean_box(0);
}
x_399 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_399, 0, x_262);
lean_ctor_set(x_399, 1, x_27);
x_400 = lean_array_push(x_395, x_399);
if (lean_is_scalar(x_398)) {
 x_401 = lean_alloc_ctor(0, 5, 0);
} else {
 x_401 = x_398;
}
lean_ctor_set(x_401, 0, x_393);
lean_ctor_set(x_401, 1, x_394);
lean_ctor_set(x_401, 2, x_400);
lean_ctor_set(x_401, 3, x_396);
lean_ctor_set(x_401, 4, x_397);
x_402 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_264, x_401, x_260);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
x_405 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_405, 0, x_403);
x_356 = x_405;
x_357 = x_404;
goto block_390;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_402, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_402, 1);
lean_inc(x_407);
lean_dec(x_402);
x_408 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_408, 0, x_406);
x_356 = x_408;
x_357 = x_407;
goto block_390;
}
block_390:
{
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_358 = lean_ctor_get(x_357, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_356, 0);
lean_inc(x_359);
lean_dec(x_356);
x_360 = lean_ctor_get(x_357, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_357, 1);
lean_inc(x_361);
x_362 = lean_ctor_get(x_357, 3);
lean_inc(x_362);
x_363 = lean_ctor_get(x_357, 4);
lean_inc(x_363);
x_364 = lean_ctor_get(x_357, 5);
lean_inc(x_364);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 lean_ctor_release(x_357, 2);
 lean_ctor_release(x_357, 3);
 lean_ctor_release(x_357, 4);
 lean_ctor_release(x_357, 5);
 x_365 = x_357;
} else {
 lean_dec_ref(x_357);
 x_365 = lean_box(0);
}
x_366 = lean_ctor_get(x_358, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_358, 1);
lean_inc(x_367);
x_368 = lean_ctor_get(x_358, 3);
lean_inc(x_368);
x_369 = lean_ctor_get(x_358, 4);
lean_inc(x_369);
if (lean_is_exclusive(x_358)) {
 lean_ctor_release(x_358, 0);
 lean_ctor_release(x_358, 1);
 lean_ctor_release(x_358, 2);
 lean_ctor_release(x_358, 3);
 lean_ctor_release(x_358, 4);
 x_370 = x_358;
} else {
 lean_dec_ref(x_358);
 x_370 = lean_box(0);
}
if (lean_is_scalar(x_370)) {
 x_371 = lean_alloc_ctor(0, 5, 0);
} else {
 x_371 = x_370;
}
lean_ctor_set(x_371, 0, x_366);
lean_ctor_set(x_371, 1, x_367);
lean_ctor_set(x_371, 2, x_353);
lean_ctor_set(x_371, 3, x_368);
lean_ctor_set(x_371, 4, x_369);
if (lean_is_scalar(x_365)) {
 x_372 = lean_alloc_ctor(0, 6, 0);
} else {
 x_372 = x_365;
}
lean_ctor_set(x_372, 0, x_360);
lean_ctor_set(x_372, 1, x_361);
lean_ctor_set(x_372, 2, x_371);
lean_ctor_set(x_372, 3, x_362);
lean_ctor_set(x_372, 4, x_363);
lean_ctor_set(x_372, 5, x_364);
if (lean_is_scalar(x_261)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_261;
 lean_ctor_set_tag(x_373, 1);
}
lean_ctor_set(x_373, 0, x_359);
lean_ctor_set(x_373, 1, x_372);
return x_373;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_374 = lean_ctor_get(x_357, 2);
lean_inc(x_374);
x_375 = lean_ctor_get(x_356, 0);
lean_inc(x_375);
lean_dec(x_356);
x_376 = lean_ctor_get(x_357, 0);
lean_inc(x_376);
x_377 = lean_ctor_get(x_357, 1);
lean_inc(x_377);
x_378 = lean_ctor_get(x_357, 3);
lean_inc(x_378);
x_379 = lean_ctor_get(x_357, 4);
lean_inc(x_379);
x_380 = lean_ctor_get(x_357, 5);
lean_inc(x_380);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 lean_ctor_release(x_357, 2);
 lean_ctor_release(x_357, 3);
 lean_ctor_release(x_357, 4);
 lean_ctor_release(x_357, 5);
 x_381 = x_357;
} else {
 lean_dec_ref(x_357);
 x_381 = lean_box(0);
}
x_382 = lean_ctor_get(x_374, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_374, 1);
lean_inc(x_383);
x_384 = lean_ctor_get(x_374, 3);
lean_inc(x_384);
x_385 = lean_ctor_get(x_374, 4);
lean_inc(x_385);
if (lean_is_exclusive(x_374)) {
 lean_ctor_release(x_374, 0);
 lean_ctor_release(x_374, 1);
 lean_ctor_release(x_374, 2);
 lean_ctor_release(x_374, 3);
 lean_ctor_release(x_374, 4);
 x_386 = x_374;
} else {
 lean_dec_ref(x_374);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(0, 5, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_382);
lean_ctor_set(x_387, 1, x_383);
lean_ctor_set(x_387, 2, x_353);
lean_ctor_set(x_387, 3, x_384);
lean_ctor_set(x_387, 4, x_385);
if (lean_is_scalar(x_381)) {
 x_388 = lean_alloc_ctor(0, 6, 0);
} else {
 x_388 = x_381;
}
lean_ctor_set(x_388, 0, x_376);
lean_ctor_set(x_388, 1, x_377);
lean_ctor_set(x_388, 2, x_387);
lean_ctor_set(x_388, 3, x_378);
lean_ctor_set(x_388, 4, x_379);
lean_ctor_set(x_388, 5, x_380);
if (lean_is_scalar(x_261)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_261;
}
lean_ctor_set(x_389, 0, x_375);
lean_ctor_set(x_389, 1, x_388);
return x_389;
}
}
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_409 = lean_ctor_get(x_260, 2);
x_410 = lean_ctor_get(x_260, 0);
x_411 = lean_ctor_get(x_260, 1);
x_412 = lean_ctor_get(x_260, 3);
x_413 = lean_ctor_get(x_260, 4);
x_414 = lean_ctor_get(x_260, 5);
lean_inc(x_414);
lean_inc(x_413);
lean_inc(x_412);
lean_inc(x_409);
lean_inc(x_411);
lean_inc(x_410);
lean_dec(x_260);
x_415 = lean_ctor_get(x_409, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_409, 1);
lean_inc(x_416);
x_417 = lean_ctor_get(x_409, 2);
lean_inc(x_417);
x_418 = lean_ctor_get(x_409, 3);
lean_inc(x_418);
x_419 = lean_ctor_get(x_409, 4);
lean_inc(x_419);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 lean_ctor_release(x_409, 2);
 lean_ctor_release(x_409, 3);
 lean_ctor_release(x_409, 4);
 x_420 = x_409;
} else {
 lean_dec_ref(x_409);
 x_420 = lean_box(0);
}
x_456 = l_Lean_Meta_resettingSynthInstanceCache___rarg___closed__1;
if (lean_is_scalar(x_420)) {
 x_457 = lean_alloc_ctor(0, 5, 0);
} else {
 x_457 = x_420;
}
lean_ctor_set(x_457, 0, x_415);
lean_ctor_set(x_457, 1, x_416);
lean_ctor_set(x_457, 2, x_456);
lean_ctor_set(x_457, 3, x_418);
lean_ctor_set(x_457, 4, x_419);
x_458 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_458, 0, x_410);
lean_ctor_set(x_458, 1, x_411);
lean_ctor_set(x_458, 2, x_457);
lean_ctor_set(x_458, 3, x_412);
lean_ctor_set(x_458, 4, x_413);
lean_ctor_set(x_458, 5, x_414);
x_459 = lean_ctor_get(x_6, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_6, 1);
lean_inc(x_460);
x_461 = lean_ctor_get(x_6, 2);
lean_inc(x_461);
x_462 = lean_ctor_get(x_6, 3);
lean_inc(x_462);
x_463 = lean_ctor_get(x_6, 4);
lean_inc(x_463);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_464 = x_6;
} else {
 lean_dec_ref(x_6);
 x_464 = lean_box(0);
}
x_465 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_465, 0, x_262);
lean_ctor_set(x_465, 1, x_27);
x_466 = lean_array_push(x_461, x_465);
if (lean_is_scalar(x_464)) {
 x_467 = lean_alloc_ctor(0, 5, 0);
} else {
 x_467 = x_464;
}
lean_ctor_set(x_467, 0, x_459);
lean_ctor_set(x_467, 1, x_460);
lean_ctor_set(x_467, 2, x_466);
lean_ctor_set(x_467, 3, x_462);
lean_ctor_set(x_467, 4, x_463);
x_468 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_264, x_467, x_458);
if (lean_obj_tag(x_468) == 0)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; 
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 1);
lean_inc(x_470);
lean_dec(x_468);
x_471 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_471, 0, x_469);
x_421 = x_471;
x_422 = x_470;
goto block_455;
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_468, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_468, 1);
lean_inc(x_473);
lean_dec(x_468);
x_474 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_474, 0, x_472);
x_421 = x_474;
x_422 = x_473;
goto block_455;
}
block_455:
{
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_423 = lean_ctor_get(x_422, 2);
lean_inc(x_423);
x_424 = lean_ctor_get(x_421, 0);
lean_inc(x_424);
lean_dec(x_421);
x_425 = lean_ctor_get(x_422, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_422, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_422, 3);
lean_inc(x_427);
x_428 = lean_ctor_get(x_422, 4);
lean_inc(x_428);
x_429 = lean_ctor_get(x_422, 5);
lean_inc(x_429);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 lean_ctor_release(x_422, 2);
 lean_ctor_release(x_422, 3);
 lean_ctor_release(x_422, 4);
 lean_ctor_release(x_422, 5);
 x_430 = x_422;
} else {
 lean_dec_ref(x_422);
 x_430 = lean_box(0);
}
x_431 = lean_ctor_get(x_423, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_423, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_423, 3);
lean_inc(x_433);
x_434 = lean_ctor_get(x_423, 4);
lean_inc(x_434);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 lean_ctor_release(x_423, 4);
 x_435 = x_423;
} else {
 lean_dec_ref(x_423);
 x_435 = lean_box(0);
}
if (lean_is_scalar(x_435)) {
 x_436 = lean_alloc_ctor(0, 5, 0);
} else {
 x_436 = x_435;
}
lean_ctor_set(x_436, 0, x_431);
lean_ctor_set(x_436, 1, x_432);
lean_ctor_set(x_436, 2, x_417);
lean_ctor_set(x_436, 3, x_433);
lean_ctor_set(x_436, 4, x_434);
if (lean_is_scalar(x_430)) {
 x_437 = lean_alloc_ctor(0, 6, 0);
} else {
 x_437 = x_430;
}
lean_ctor_set(x_437, 0, x_425);
lean_ctor_set(x_437, 1, x_426);
lean_ctor_set(x_437, 2, x_436);
lean_ctor_set(x_437, 3, x_427);
lean_ctor_set(x_437, 4, x_428);
lean_ctor_set(x_437, 5, x_429);
if (lean_is_scalar(x_261)) {
 x_438 = lean_alloc_ctor(1, 2, 0);
} else {
 x_438 = x_261;
 lean_ctor_set_tag(x_438, 1);
}
lean_ctor_set(x_438, 0, x_424);
lean_ctor_set(x_438, 1, x_437);
return x_438;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_439 = lean_ctor_get(x_422, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_421, 0);
lean_inc(x_440);
lean_dec(x_421);
x_441 = lean_ctor_get(x_422, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_422, 1);
lean_inc(x_442);
x_443 = lean_ctor_get(x_422, 3);
lean_inc(x_443);
x_444 = lean_ctor_get(x_422, 4);
lean_inc(x_444);
x_445 = lean_ctor_get(x_422, 5);
lean_inc(x_445);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 lean_ctor_release(x_422, 2);
 lean_ctor_release(x_422, 3);
 lean_ctor_release(x_422, 4);
 lean_ctor_release(x_422, 5);
 x_446 = x_422;
} else {
 lean_dec_ref(x_422);
 x_446 = lean_box(0);
}
x_447 = lean_ctor_get(x_439, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_439, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_439, 3);
lean_inc(x_449);
x_450 = lean_ctor_get(x_439, 4);
lean_inc(x_450);
if (lean_is_exclusive(x_439)) {
 lean_ctor_release(x_439, 0);
 lean_ctor_release(x_439, 1);
 lean_ctor_release(x_439, 2);
 lean_ctor_release(x_439, 3);
 lean_ctor_release(x_439, 4);
 x_451 = x_439;
} else {
 lean_dec_ref(x_439);
 x_451 = lean_box(0);
}
if (lean_is_scalar(x_451)) {
 x_452 = lean_alloc_ctor(0, 5, 0);
} else {
 x_452 = x_451;
}
lean_ctor_set(x_452, 0, x_447);
lean_ctor_set(x_452, 1, x_448);
lean_ctor_set(x_452, 2, x_417);
lean_ctor_set(x_452, 3, x_449);
lean_ctor_set(x_452, 4, x_450);
if (lean_is_scalar(x_446)) {
 x_453 = lean_alloc_ctor(0, 6, 0);
} else {
 x_453 = x_446;
}
lean_ctor_set(x_453, 0, x_441);
lean_ctor_set(x_453, 1, x_442);
lean_ctor_set(x_453, 2, x_452);
lean_ctor_set(x_453, 3, x_443);
lean_ctor_set(x_453, 4, x_444);
lean_ctor_set(x_453, 5, x_445);
if (lean_is_scalar(x_261)) {
 x_454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_454 = x_261;
}
lean_ctor_set(x_454, 0, x_440);
lean_ctor_set(x_454, 1, x_453);
return x_454;
}
}
}
}
}
else
{
uint8_t x_475; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_475 = !lean_is_exclusive(x_254);
if (x_475 == 0)
{
return x_254;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_254, 0);
x_477 = lean_ctor_get(x_254, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_254);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
}
}
else
{
uint8_t x_479; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_479 = !lean_is_exclusive(x_32);
if (x_479 == 0)
{
return x_32;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; 
x_480 = lean_ctor_get(x_32, 0);
x_481 = lean_ctor_get(x_32, 1);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_32);
x_482 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_482, 0, x_480);
lean_ctor_set(x_482, 1, x_481);
return x_482;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_483 = !lean_is_exclusive(x_28);
if (x_483 == 0)
{
return x_28;
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_484 = lean_ctor_get(x_28, 0);
x_485 = lean_ctor_get(x_28, 1);
lean_inc(x_485);
lean_inc(x_484);
lean_dec(x_28);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
return x_486;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_6) == 7)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_6, 2);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_28 = lean_array_get_size(x_4);
x_29 = lean_expr_instantiate_rev_range(x_25, x_5, x_28, x_4);
lean_dec(x_28);
lean_dec(x_25);
x_30 = l_Lean_Meta_mkFreshId___rarg(x_8);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = (uint8_t)((x_27 << 24) >> 61);
lean_inc(x_31);
x_34 = lean_local_ctx_mk_local_decl(x_3, x_31, x_24, x_29, x_33);
x_35 = l_Lean_mkFVar(x_31);
x_36 = lean_array_push(x_4, x_35);
x_3 = x_34;
x_4 = x_36;
x_6 = x_26;
x_8 = x_32;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_38 = lean_ctor_get(x_6, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_6, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_6, 2);
lean_inc(x_40);
x_41 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
x_42 = lean_ctor_get(x_2, 0);
lean_inc(x_42);
x_43 = lean_array_get_size(x_4);
x_44 = lean_nat_dec_lt(x_43, x_42);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_2);
x_45 = lean_expr_instantiate_rev_range(x_6, x_5, x_43, x_4);
lean_dec(x_6);
x_46 = !lean_is_exclusive(x_7);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_7, 1);
lean_dec(x_47);
lean_ctor_set(x_7, 1, x_3);
x_48 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_4, x_43, x_45, x_4, x_5, x_7, x_8);
lean_dec(x_45);
lean_dec(x_4);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_7, 0);
x_50 = lean_ctor_get(x_7, 2);
x_51 = lean_ctor_get(x_7, 3);
x_52 = lean_ctor_get(x_7, 4);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_7);
x_53 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_53, 0, x_49);
lean_ctor_set(x_53, 1, x_3);
lean_ctor_set(x_53, 2, x_50);
lean_ctor_set(x_53, 3, x_51);
lean_ctor_set(x_53, 4, x_52);
x_54 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_4, x_43, x_45, x_4, x_5, x_53, x_8);
lean_dec(x_45);
lean_dec(x_4);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_6);
x_55 = lean_expr_instantiate_rev_range(x_39, x_5, x_43, x_4);
lean_dec(x_43);
lean_dec(x_39);
x_56 = l_Lean_Meta_mkFreshId___rarg(x_8);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = (uint8_t)((x_41 << 24) >> 61);
lean_inc(x_57);
x_60 = lean_local_ctx_mk_local_decl(x_3, x_57, x_38, x_55, x_59);
x_61 = l_Lean_mkFVar(x_57);
x_62 = lean_array_push(x_4, x_61);
x_3 = x_60;
x_4 = x_62;
x_6 = x_40;
x_8 = x_58;
goto _start;
}
}
}
else
{
lean_object* x_64; 
x_64 = lean_box(0);
x_9 = x_64;
goto block_23;
}
block_23:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_9);
x_10 = lean_array_get_size(x_4);
x_11 = lean_expr_instantiate_rev_range(x_6, x_5, x_10, x_4);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_7, 1);
lean_dec(x_13);
lean_inc(x_3);
lean_ctor_set(x_7, 1, x_3);
if (x_1 == 0)
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_14 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_4, x_10, x_11, x_4, x_5, x_7, x_8);
lean_dec(x_11);
lean_dec(x_4);
return x_14;
}
else
{
lean_object* x_15; 
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_4, x_5, x_7, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 2);
x_18 = lean_ctor_get(x_7, 3);
x_19 = lean_ctor_get(x_7, 4);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_3);
x_20 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set(x_20, 2, x_17);
lean_ctor_set(x_20, 3, x_18);
lean_ctor_set(x_20, 4, x_19);
if (x_1 == 0)
{
lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_4, x_10, x_11, x_4, x_5, x_20, x_8);
lean_dec(x_11);
lean_dec(x_4);
return x_21;
}
else
{
lean_object* x_22; 
lean_inc(x_5);
lean_inc(x_4);
x_22 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_4, x_5, x_20, x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_22;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_Lean_Meta_whnf(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Expr_isForall(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_2);
x_9 = l_Array_empty___closed__1;
x_10 = l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1;
x_11 = l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(x_9, x_10, x_10, x_9, x_3, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_9, x_1);
lean_dec(x_1);
x_15 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_13, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = l___private_Lean_Meta_FunInfo_4__collectDeps(x_9, x_1);
lean_dec(x_1);
x_20 = l___private_Lean_Meta_FunInfo_5__updateHasFwdDeps(x_17, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
x_28 = 1;
x_29 = l_Array_empty___closed__1;
x_30 = lean_unsigned_to_nat(0u);
x_31 = l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3(x_28, x_2, x_27, x_29, x_30, x_6, x_3, x_7);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_5);
if (x_32 == 0)
{
return x_5;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_5, 0);
x_34 = lean_ctor_get(x_5, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_5);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_6__getFunInfoAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 3);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 4);
lean_inc(x_9);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 6);
x_13 = lean_ctor_get(x_4, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_15 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set_uint8(x_15, sizeof(void*)*2, x_12);
x_16 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_inc(x_3);
x_17 = l_Lean_Meta_inferType(x_1, x_3, x_4);
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_3, 4);
lean_dec(x_19);
x_20 = lean_ctor_get(x_3, 3);
lean_dec(x_20);
x_21 = lean_ctor_get(x_3, 2);
lean_dec(x_21);
x_22 = lean_ctor_get(x_3, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_3, 0);
lean_dec(x_23);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = 1;
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 6, x_26);
x_27 = l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2(x_24, x_2, x_3, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_dec(x_32);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_28, 2);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
x_37 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_36, x_15, x_31);
lean_ctor_set(x_29, 1, x_37);
return x_27;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
x_40 = lean_ctor_get(x_29, 2);
x_41 = lean_ctor_get(x_29, 3);
x_42 = lean_ctor_get(x_29, 4);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
lean_inc(x_31);
x_43 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_39, x_15, x_31);
x_44 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_40);
lean_ctor_set(x_44, 3, x_41);
lean_ctor_set(x_44, 4, x_42);
lean_ctor_set(x_28, 2, x_44);
return x_27;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_45 = lean_ctor_get(x_28, 0);
x_46 = lean_ctor_get(x_28, 1);
x_47 = lean_ctor_get(x_28, 3);
x_48 = lean_ctor_get(x_28, 4);
x_49 = lean_ctor_get(x_28, 5);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_28);
x_50 = lean_ctor_get(x_29, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_29, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_29, 2);
lean_inc(x_52);
x_53 = lean_ctor_get(x_29, 3);
lean_inc(x_53);
x_54 = lean_ctor_get(x_29, 4);
lean_inc(x_54);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 lean_ctor_release(x_29, 2);
 lean_ctor_release(x_29, 3);
 lean_ctor_release(x_29, 4);
 x_55 = x_29;
} else {
 lean_dec_ref(x_29);
 x_55 = lean_box(0);
}
lean_inc(x_31);
x_56 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_51, x_15, x_31);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 5, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_50);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_52);
lean_ctor_set(x_57, 3, x_53);
lean_ctor_set(x_57, 4, x_54);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_45);
lean_ctor_set(x_58, 1, x_46);
lean_ctor_set(x_58, 2, x_57);
lean_ctor_set(x_58, 3, x_47);
lean_ctor_set(x_58, 4, x_48);
lean_ctor_set(x_58, 5, x_49);
lean_ctor_set(x_27, 1, x_58);
return x_27;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_59 = lean_ctor_get(x_27, 0);
lean_inc(x_59);
lean_dec(x_27);
x_60 = lean_ctor_get(x_28, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_28, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_28, 3);
lean_inc(x_62);
x_63 = lean_ctor_get(x_28, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_28, 5);
lean_inc(x_64);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 lean_ctor_release(x_28, 2);
 lean_ctor_release(x_28, 3);
 lean_ctor_release(x_28, 4);
 lean_ctor_release(x_28, 5);
 x_65 = x_28;
} else {
 lean_dec_ref(x_28);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_29, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_29, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_29, 2);
lean_inc(x_68);
x_69 = lean_ctor_get(x_29, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_29, 4);
lean_inc(x_70);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 lean_ctor_release(x_29, 2);
 lean_ctor_release(x_29, 3);
 lean_ctor_release(x_29, 4);
 x_71 = x_29;
} else {
 lean_dec_ref(x_29);
 x_71 = lean_box(0);
}
lean_inc(x_59);
x_72 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_67, x_15, x_59);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 5, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_66);
lean_ctor_set(x_73, 1, x_72);
lean_ctor_set(x_73, 2, x_68);
lean_ctor_set(x_73, 3, x_69);
lean_ctor_set(x_73, 4, x_70);
if (lean_is_scalar(x_65)) {
 x_74 = lean_alloc_ctor(0, 6, 0);
} else {
 x_74 = x_65;
}
lean_ctor_set(x_74, 0, x_60);
lean_ctor_set(x_74, 1, x_61);
lean_ctor_set(x_74, 2, x_73);
lean_ctor_set(x_74, 3, x_62);
lean_ctor_set(x_74, 4, x_63);
lean_ctor_set(x_74, 5, x_64);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_59);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_15);
x_76 = !lean_is_exclusive(x_27);
if (x_76 == 0)
{
return x_27;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_27, 0);
x_78 = lean_ctor_get(x_27, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_27);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_free_object(x_3);
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_17);
if (x_80 == 0)
{
return x_17;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_17, 0);
x_82 = lean_ctor_get(x_17, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_17);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; 
x_84 = lean_ctor_get(x_17, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_17, 1);
lean_inc(x_85);
lean_dec(x_17);
x_86 = 1;
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 6, x_86);
x_87 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_87, 0, x_5);
lean_ctor_set(x_87, 1, x_6);
lean_ctor_set(x_87, 2, x_7);
lean_ctor_set(x_87, 3, x_8);
lean_ctor_set(x_87, 4, x_9);
x_88 = l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2(x_84, x_2, x_87, x_85);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 2);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 0);
lean_inc(x_91);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_92 = x_88;
} else {
 lean_dec_ref(x_88);
 x_92 = lean_box(0);
}
x_93 = lean_ctor_get(x_89, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_89, 3);
lean_inc(x_95);
x_96 = lean_ctor_get(x_89, 4);
lean_inc(x_96);
x_97 = lean_ctor_get(x_89, 5);
lean_inc(x_97);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 lean_ctor_release(x_89, 2);
 lean_ctor_release(x_89, 3);
 lean_ctor_release(x_89, 4);
 lean_ctor_release(x_89, 5);
 x_98 = x_89;
} else {
 lean_dec_ref(x_89);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_90, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_90, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_90, 2);
lean_inc(x_101);
x_102 = lean_ctor_get(x_90, 3);
lean_inc(x_102);
x_103 = lean_ctor_get(x_90, 4);
lean_inc(x_103);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 lean_ctor_release(x_90, 2);
 lean_ctor_release(x_90, 3);
 lean_ctor_release(x_90, 4);
 x_104 = x_90;
} else {
 lean_dec_ref(x_90);
 x_104 = lean_box(0);
}
lean_inc(x_91);
x_105 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_100, x_15, x_91);
if (lean_is_scalar(x_104)) {
 x_106 = lean_alloc_ctor(0, 5, 0);
} else {
 x_106 = x_104;
}
lean_ctor_set(x_106, 0, x_99);
lean_ctor_set(x_106, 1, x_105);
lean_ctor_set(x_106, 2, x_101);
lean_ctor_set(x_106, 3, x_102);
lean_ctor_set(x_106, 4, x_103);
if (lean_is_scalar(x_98)) {
 x_107 = lean_alloc_ctor(0, 6, 0);
} else {
 x_107 = x_98;
}
lean_ctor_set(x_107, 0, x_93);
lean_ctor_set(x_107, 1, x_94);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_95);
lean_ctor_set(x_107, 4, x_96);
lean_ctor_set(x_107, 5, x_97);
if (lean_is_scalar(x_92)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_92;
}
lean_ctor_set(x_108, 0, x_91);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_15);
x_109 = lean_ctor_get(x_88, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_88, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_111 = x_88;
} else {
 lean_dec_ref(x_88);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_113 = lean_ctor_get(x_17, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_17, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_115 = x_17;
} else {
 lean_dec_ref(x_17);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_117 = lean_ctor_get(x_16, 0);
lean_inc(x_117);
lean_dec(x_16);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_4);
return x_118;
}
}
else
{
lean_object* x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; uint8_t x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_119 = lean_ctor_get(x_5, 0);
x_120 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_121 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 1);
x_122 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 2);
x_123 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 3);
x_124 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 4);
x_125 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 5);
x_126 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 6);
lean_inc(x_119);
lean_dec(x_5);
x_127 = lean_ctor_get(x_4, 2);
lean_inc(x_127);
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
lean_dec(x_127);
lean_inc(x_2);
lean_inc(x_1);
x_129 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_129, 0, x_1);
lean_ctor_set(x_129, 1, x_2);
lean_ctor_set_uint8(x_129, sizeof(void*)*2, x_126);
x_130 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__1(x_128, x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; 
lean_inc(x_3);
x_131 = l_Lean_Meta_inferType(x_1, x_3, x_4);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 x_132 = x_3;
} else {
 lean_dec_ref(x_3);
 x_132 = lean_box(0);
}
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
lean_dec(x_131);
x_135 = 1;
x_136 = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(x_136, 0, x_119);
lean_ctor_set_uint8(x_136, sizeof(void*)*1, x_120);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 1, x_121);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 2, x_122);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 3, x_123);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 4, x_124);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 5, x_125);
lean_ctor_set_uint8(x_136, sizeof(void*)*1 + 6, x_135);
if (lean_is_scalar(x_132)) {
 x_137 = lean_alloc_ctor(0, 5, 0);
} else {
 x_137 = x_132;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_6);
lean_ctor_set(x_137, 2, x_7);
lean_ctor_set(x_137, 3, x_8);
lean_ctor_set(x_137, 4, x_9);
x_138 = l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2(x_133, x_2, x_137, x_134);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_139, 2);
lean_inc(x_140);
x_141 = lean_ctor_get(x_138, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_142 = x_138;
} else {
 lean_dec_ref(x_138);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get(x_139, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_139, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_139, 3);
lean_inc(x_145);
x_146 = lean_ctor_get(x_139, 4);
lean_inc(x_146);
x_147 = lean_ctor_get(x_139, 5);
lean_inc(x_147);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 lean_ctor_release(x_139, 2);
 lean_ctor_release(x_139, 3);
 lean_ctor_release(x_139, 4);
 lean_ctor_release(x_139, 5);
 x_148 = x_139;
} else {
 lean_dec_ref(x_139);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_140, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_140, 1);
lean_inc(x_150);
x_151 = lean_ctor_get(x_140, 2);
lean_inc(x_151);
x_152 = lean_ctor_get(x_140, 3);
lean_inc(x_152);
x_153 = lean_ctor_get(x_140, 4);
lean_inc(x_153);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 lean_ctor_release(x_140, 2);
 lean_ctor_release(x_140, 3);
 lean_ctor_release(x_140, 4);
 x_154 = x_140;
} else {
 lean_dec_ref(x_140);
 x_154 = lean_box(0);
}
lean_inc(x_141);
x_155 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_FunInfo_1__checkFunInfoCache___spec__4(x_150, x_129, x_141);
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(0, 5, 0);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_149);
lean_ctor_set(x_156, 1, x_155);
lean_ctor_set(x_156, 2, x_151);
lean_ctor_set(x_156, 3, x_152);
lean_ctor_set(x_156, 4, x_153);
if (lean_is_scalar(x_148)) {
 x_157 = lean_alloc_ctor(0, 6, 0);
} else {
 x_157 = x_148;
}
lean_ctor_set(x_157, 0, x_143);
lean_ctor_set(x_157, 1, x_144);
lean_ctor_set(x_157, 2, x_156);
lean_ctor_set(x_157, 3, x_145);
lean_ctor_set(x_157, 4, x_146);
lean_ctor_set(x_157, 5, x_147);
if (lean_is_scalar(x_142)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_142;
}
lean_ctor_set(x_158, 0, x_141);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_129);
x_159 = lean_ctor_get(x_138, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_138, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_161 = x_138;
} else {
 lean_dec_ref(x_138);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_119);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_163 = lean_ctor_get(x_131, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_131, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_165 = x_131;
} else {
 lean_dec_ref(x_131);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; 
lean_dec(x_129);
lean_dec(x_119);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_167 = lean_ctor_get(x_130, 0);
lean_inc(x_167);
lean_dec(x_130);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_4);
return x_168;
}
}
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_foldMAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___lambda__1(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__5(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l___private_Lean_Meta_Basic_5__forallTelescopeReducingAuxAux___main___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__3(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_getFunInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l___private_Lean_Meta_FunInfo_6__getFunInfoAux(x_1, x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = l___private_Lean_Meta_FunInfo_6__getFunInfoAux(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_FunInfo(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1 = _init_l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_6__forallTelescopeReducingAux___at___private_Lean_Meta_FunInfo_6__getFunInfoAux___spec__2___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif

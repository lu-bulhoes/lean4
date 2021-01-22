mutual

inductive TreePos (α : Type u) (β : Type v) where
  | leaf (a : α)
  | node (children : List (List (TreeNeg α β)))

inductive TreeNeg (α : Type u) (β : Type v) where
  | leaf (a : β)
  | node (children : List (List (TreePos α β)))

end

theorem aux_1 [SizeOf α] [SizeOf β] (cs : List (TreePos α β)) : TreePos._sizeOf_6 cs = sizeOf cs :=
  @List.rec (TreePos α β) (fun cs => TreePos._sizeOf_6 cs = sizeOf cs)
    rfl
    (fun h t ih => by
      show 1 + TreePos._sizeOf_1 h + TreePos._sizeOf_6 t = sizeOf (h::t)
      rw ih
      rfl)
    cs

theorem aux_2 [SizeOf α] [SizeOf β] (cs : List (List (TreePos α β))) : TreePos._sizeOf_4 cs = sizeOf cs :=
  @List.rec (List (TreePos α β)) (fun cs => TreePos._sizeOf_4 cs = sizeOf cs)
    rfl
    (fun h t ih =>  by
      show 1 + TreePos._sizeOf_6 h + TreePos._sizeOf_4 t = sizeOf (h :: t)
      rw aux_1
      rw ih
      rfl)
    cs

theorem aux_3 [SizeOf α] [SizeOf β] (cs : List (TreeNeg α β)) : TreePos._sizeOf_5 cs = sizeOf cs :=
  @List.rec (TreeNeg α β) (fun cs => TreePos._sizeOf_5 cs = sizeOf cs)
    rfl
    (fun h t ih => by
      show 1 + TreePos._sizeOf_2 h + TreePos._sizeOf_5 t = sizeOf (h::t)
      rw ih
      rfl)
    cs

theorem aux_4 [SizeOf α] [SizeOf β] (cs : List (List (TreeNeg α β))) : TreePos._sizeOf_3 cs = sizeOf cs :=
  @List.rec (List (TreeNeg α β)) (fun cs => TreePos._sizeOf_3 cs = sizeOf cs)
    rfl
    (fun h t ih => by
      show 1 + TreePos._sizeOf_5 h + TreePos._sizeOf_3 t = sizeOf (h :: t)
      rw ih
      rw aux_3
      rfl)
    cs

theorem TreePos.leaf.sizeOf_spec [SizeOf α] [SizeOf β] (a : α) : sizeOf (TreePos.leaf (β := β) a) = 1 + sizeOf a :=
  rfl

theorem TreePos.node.sizeOf_spec [SizeOf α] [SizeOf β] (cs : List (List (TreeNeg α β))) : sizeOf (TreePos.node cs) = 1 + sizeOf cs := by
  show 1 + TreePos._sizeOf_3 cs = 1 + sizeOf cs
  rw aux_4

theorem TreeNeg.leaf.sizeOf_spec [SizeOf α] [SizeOf β] (b : β) : sizeOf (TreeNeg.leaf (α := α) b) = 1 + sizeOf b :=
  rfl

theorem TreeNeg.node.sizeOf_spec [SizeOf α] [SizeOf β] (cs : List (List (TreePos α β))) : sizeOf (TreeNeg.node cs) = 1 + sizeOf cs := by
  show 1 + TreePos._sizeOf_4 cs = 1 + sizeOf cs
  rw aux_2

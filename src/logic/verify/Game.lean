import Lean

@[extern "increase_c_counter"]
opaque increase_c_counter
  (added : Uint32)
  : IO UInt32

@[export create_user]
def create_user
  : IO UInt32 := Id.run
do
  increase_c_counter (1 : UInt32)

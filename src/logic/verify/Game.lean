import Lean

def hello := "world"

structure User where
  password_hash_high: UInt64
  password_hash_low: UInt64
deriving Repr

def users: Array User := #[]
def default_return_code : UInt32 := 0

def create_user_safe (database : Array User) (password_hash_high: UInt64) (password_hash_low: UInt64) :=
  let user : User := {
    password_hash_high := password_hash_high,
    password_hash_low := password_hash_low
  }
  (Array.push database user).size.toUInt32 - 1

@[export create_user]
def GAME_create_user (password_hash_high: UInt64) (password_hash_low: UInt64) : UInt32 := Id.run do
  create_user_safe users password_hash_high password_hash_low

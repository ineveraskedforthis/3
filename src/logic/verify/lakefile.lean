import Lake
open System Lake DSL

package Game

@[default_target]
lean_lib Game where
  defaultFacets := #[LeanLib.staticFacet]

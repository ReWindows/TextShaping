// Flat C exports observed in TextShaping.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef TEXTSHAPING_C_H
#define TEXTSHAPING_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: GetOtlFeatureDefs (ABI unverified)
// Export: FreeOtlResources (ABI unverified)
// Export: ShapingGetBreakingProperties (ABI unverified)
// Export: ShapingDrawGlyphs (ABI unverified)
// Export: ShapingGetGlyphs (ABI unverified)
// Export: ShapingGetGlyphPositions (ABI unverified)
// Export: BuildOtlCache (ABI unverified)
// Export: ShapingCreateFontCacheData (ABI unverified)
// Export: ShapingGetCombiningOptions (ABI unverified)
// Export: ValidateLogClust (ABI unverified)
// Export: ShapingLoadScriptEngine (ABI unverified)
// Export: GetOtlVersion (ABI unverified)
// Export: GetOtlScriptList (ABI unverified)
// Export: OtlAssertFailed (ABI unverified)
// Export: ShapingSetAssertFunction (ABI unverified)
// Export: ShapingSetInvariantAssertFunction (ABI unverified)
// Export: _guard_check_icall_nop (ABI unverified)
// Export: wil_StagingConfig_LogFeatureProcessUsage (ABI unverified)
// Export: GetOtlGlyphAlternates (ABI unverified)
// Export: GetOtlLangSysList (ABI unverified)
// Export: RepositionOtlSingleGlyph (ABI unverified)
// Export: SubstituteOtlSingleGlyph (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // TEXTSHAPING_C_H

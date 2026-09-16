#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 116 member(s).
class ShapingLibraryInternal {
public:
    class CFontTable;
    class MyanmarCluster;
    class StretchGlyphPositioner;
    class StretchGlyphShaper;
    class UniversalCluster;
    class UniversalEngineGsubFontFeatures;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHebPutoutList@ShapingLibraryInternal@@YAGPEAU_HEBREW_PUTOUTINFO_Structtag@1@PEBG1GG@Z
    unsigned short AddToHebPutoutList(WindissectOpaque *, unsigned short const *, unsigned short const *, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPutOutList@ShapingLibraryInternal@@YAGPEAUARABIC_SHAPEStructtag@1@PEBGKKPEBEH@Z
    unsigned short AddToPutOutList(WindissectOpaque *, unsigned short const *, unsigned long, unsigned long, unsigned char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocIndex2LigMap@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAU_INDEX2LIGINFO@1@PEBULigatureSubst@1@@Z
    long AllocIndex2LigMap(IShapingClient *, WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDynamicLigInfoIntoFSM@ShapingLibraryInternal@@YAXPEAU_HEBREW_SHAPE_Structtag@1@PEBEPEAU_HEB_LIGATURE_INFO_Structtag@1@PEAU_INDEX2LIGINFO@1@PEBG@Z
    void BuildDynamicLigInfoIntoFSM(WindissectOpaque *, unsigned char const *, WindissectOpaque *, WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDynamicLigInfoIntoFSM@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@PEAU_INDEX2LIGINFO@1@@Z
    int BuildDynamicLigInfoIntoFSM(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDynamicStatesStaticInputs@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@U_INDEX2LIGINFO@1@@Z
    int BuildDynamicStatesStaticInputs(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildExtenderGlyphTable@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEAGK@Z
    long BuildExtenderGlyphTable(IShapingClient *, IShapingFont *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFSM@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAUARABIC_SHAPEStructtag@1@@Z
    long BuildFSM(IShapingClient *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFixedStateDyanmicInputs@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@U_INDEX2LIGINFO@1@PEBG@Z
    int BuildFixedStateDyanmicInputs(WindissectOpaque *, WindissectOpaque, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildHebrewDynamicStatesFixedInputs@ShapingLibraryInternal@@YAXPEAU_HEBREW_SHAPE_Structtag@1@PEBEPEAU_HEB_LIGATURE_INFO_Structtag@1@PEAU_INDEX2LIGINFO@1@PEBG@Z
    void BuildHebrewDynamicStatesFixedInputs(WindissectOpaque *, unsigned char const *, WindissectOpaque *, WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildHebrewFixedStateDynamicInputs@ShapingLibraryInternal@@YAXPEAU_HEBREW_SHAPE_Structtag@1@PEAU_INDEX2LIGINFO@1@PEBE@Z
    void BuildHebrewFixedStateDynamicInputs(WindissectOpaque *, WindissectOpaque *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanonicalReorderMarks@ShapingLibraryInternal@@YAXPEBUIndicTriggerClassification@1@GPEAK@Z
    void CanonicalReorderMarks(WindissectOpaque const *, unsigned short, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCalculationOverflow@ShapingLibraryInternal@@YAJKPEAK@Z
    long CheckCalculationOverflow(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFeatureExistenceWithFallback@ShapingLibraryInternal@@YAHPEAUotlRunProp@@PEAVotlList@@HHHH@Z
    int CheckFeatureExistenceWithFallback(otlRunProp *, otlList *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CmapLookup@ShapingLibraryInternal@@YAGPEAVIShapingClient@@PEAVIShapingFont@@PEBUCOMMON_FONT_CACHE_DATA@1@_NK@Z
    unsigned short CmapLookup(IShapingClient *, IShapingFont *, WindissectOpaque const *, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsumeConsonant@ShapingLibraryInternal@@YA?AW4ConsonantState@1@AEAUSylAttributes@1@GGGW421@PEAG@Z
    int ConsumeConsonant(WindissectOpaque &, unsigned short, unsigned short, unsigned short, int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGlyphsToUnicode@ShapingLibraryInternal@@YAHQEAUARABIC_SHAPEStructtag@1@PEBGKPEA_WPEAGPEAKPEAHK@Z
    int ConvertGlyphsToUnicode(WindissectOpaque * const, unsigned short const *, unsigned long, wchar_t *, unsigned short *, unsigned long *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyShapesToReallocBfrs@ShapingLibraryInternal@@YAGGPEAK0PEAUtag_OtlShapeInfo@1@G001@Z
    unsigned short CopyShapesToReallocBfrs(unsigned short, unsigned long *, unsigned long *, WindissectOpaque *, unsigned short, unsigned long *, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDynamicDCL@ShapingLibraryInternal@@YAHPEAT_DCL_Structtag@1@PEBG@Z
    int CreateDynamicDCL(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHebrewDynamicDCL@ShapingLibraryInternal@@YAHPEAT_DCL_Structtag@1@PEBE@Z
    int CreateHebrewDynamicDCL(WindissectOpaque *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHebrewStaticDCL@ShapingLibraryInternal@@YAHPEAT_DCL_Structtag@1@@Z
    int CreateHebrewStaticDCL(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndexTable@ShapingLibraryInternal@@YAPEAXPEAVIShapingClient@@PEFBGKPEAK@Z
    void * CreateIndexTable(IShapingClient *, unsigned long volatile & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIsStartOfRuleTable@ShapingLibraryInternal@@YAHPEAVIShapingClient@@PEAUARABIC_SHAPEStructtag@1@@Z
    int CreateIsStartOfRuleTable(IShapingClient *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStaticDCL@ShapingLibraryInternal@@YAHPEAT_DCL_Structtag@1@@Z
    int CreateStaticDCL(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteArabicTables@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAUARABIC_SHAPEStructtag@1@@Z
    long DeleteArabicTables(IShapingClient *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeCharMap@ShapingLibraryInternal@@YAJGPEBUotlGlyphInfo@@JPEBGPEAUSHAPING_GLYPHPROP@@AEAV?$CShapingVector@USHAPING_CHARPROP@@@@@Z
    long EncodeCharMap(unsigned short, otlGlyphInfo const *, long, unsigned short const *, SHAPING_GLYPHPROP *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FGlyphsDiacritics@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@PEBGK@Z
    int FGlyphsDiacritics(WindissectOpaque *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAndReorderReallocatedHangulShapeBfrs@ShapingLibraryInternal@@YAGGPEBKPEBUtag_OtlShapeInfo@1@GPEAKPEAU21@@Z
    unsigned short FillAndReorderReallocatedHangulShapeBfrs(unsigned short, unsigned long const *, WindissectOpaque const *, unsigned short, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillReallocatedArabicShapeBfrs@ShapingLibraryInternal@@YAGGGPEAKPEAUtag_OtlShapeInfo@1@@Z
    unsigned short FillReallocatedArabicShapeBfrs(unsigned short, unsigned short, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillReallocatedKhmerShapeBfrs@ShapingLibraryInternal@@YAGGGPEAKPEAUtag_OtlShapeInfo@1@@Z
    unsigned short FillReallocatedKhmerShapeBfrs(unsigned short, unsigned short, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillReallocatedShapeBfrs@ShapingLibraryInternal@@YAGGGPEAK0PEAUtag_OtlShapeInfo@1@@Z
    unsigned short FillReallocatedShapeBfrs(unsigned short, unsigned short, unsigned long *, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillReallocatedThaiLaoShapeBfrs@ShapingLibraryInternal@@YAGGGPEAKPEAUtag_OtlShapeInfo@1@@Z
    unsigned short FillReallocatedThaiLaoShapeBfrs(unsigned short, unsigned short, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeOffsets@ShapingLibraryInternal@@YAXAEAUSylAttributes@1@AEAW4ConsonantState@1@G@Z
    void FinalizeOffsets(WindissectOpaque &, int &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrebaseAnchor@ShapingLibraryInternal@@YAHPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@GPEAKPEAGPEAUotlGlyphInfo@@H3@Z
    int FindPrebaseAnchor(WindissectOpaque const *, WindissectOpaque &, unsigned short, unsigned long *, unsigned short *, otlGlyphInfo *, int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRephAnchor@ShapingLibraryInternal@@YAXPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@PEAKPEAGGPEAUotlGlyphInfo@@3@Z
    void FindRephAnchor(WindissectOpaque const *, WindissectOpaque &, unsigned long *, unsigned short *, unsigned short, otlGlyphInfo *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixupLamAlefInArabicFSM@ShapingLibraryInternal@@YAXPEAUARABIC_SHAPEStructtag@1@PEBG1KPEA_W2@Z
    void FixupLamAlefInArabicFSM(WindissectOpaque *, unsigned short const *, unsigned short const *, unsigned long, wchar_t *, wchar_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArabicCharClass@ShapingLibraryInternal@@YAEK@Z
    unsigned char GetArabicCharClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArabicFSMSize@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@PEAU_INDEX2LIGINFO@1@PEAULigatureSubst@1@PEAGPEAH@Z
    int GetArabicFSMSize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned short *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArabicLigatureAttributes@ShapingLibraryInternal@@YAHPEB_WKHPEAEH@Z
    int GetArabicLigatureAttributes(wchar_t const *, unsigned long, int, unsigned char *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBiDiGlyphOrigin@ShapingLibraryInternal@@YAGPEAUARABIC_SHAPEStructtag@1@_WG@Z
    unsigned short GetBiDiGlyphOrigin(WindissectOpaque *, wchar_t, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFSMPutOutRec@ShapingLibraryInternal@@YAKPEAUPUTOUTINFO_Structtag@1@G@Z
    unsigned long GetFSMPutOutRec(WindissectOpaque *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontKashidaInfo@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEAGJPEAJ@Z
    long GetFontKashidaInfo(IShapingClient *, IShapingFont *, unsigned short *, long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHangulCharClass@ShapingLibraryInternal@@YAEK@Z
    unsigned char GetHangulCharClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewCharClass@ShapingLibraryInternal@@YAEK@Z
    unsigned char GetHebrewCharClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewLigCount@ShapingLibraryInternal@@YAKPEAVIShapingClient@@PEAVIShapingFont@@PEA_WPEAGPEAU_HEB_LIGATURE_INFO_Structtag@1@GPEAE@Z
    unsigned long GetHebrewLigCount(IShapingClient *, IShapingFont *, wchar_t *, unsigned short *, WindissectOpaque *, unsigned short, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewLigStates@ShapingLibraryInternal@@YAXPEAU_INDEX2LIGINFO@1@PEAU_HEB_LIGATURE_INFO_Structtag@1@PEBEPEAEPEAK@Z
    void GetHebrewLigStates(WindissectOpaque *, WindissectOpaque *, unsigned char const *, unsigned char *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewPutoutData@ShapingLibraryInternal@@YAHPEBU_HEBREW_SHAPE_Structtag@1@PEB_WKPEAG2@Z
    int GetHebrewPutoutData(WindissectOpaque const *, wchar_t const *, unsigned long, unsigned short *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHebrewRuntimeState@ShapingLibraryInternal@@YAKPEAU_INDEX2LIGINFO@1@PEB_WK@Z
    unsigned long GetHebrewRuntimeState(WindissectOpaque *, wchar_t const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndicClassificationTable@ShapingLibraryInternal@@YAPEBUIndicTriggerClassification@1@J@Z
    WindissectOpaque const * GetIndicClassificationTable(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialArabicShape@ShapingLibraryInternal@@YAXPEAUtag_OtlShapeInfo@1@EE@Z
    void GetInitialArabicShape(WindissectOpaque *, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialHebrewShape@ShapingLibraryInternal@@YAXPEAUtag_OtlShapeInfo@1@E@Z
    void GetInitialHebrewShape(WindissectOpaque *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKhmerCharClass@ShapingLibraryInternal@@YAGK@Z
    unsigned short GetKhmerCharClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyFontCodePage@ShapingLibraryInternal@@YAIPEAVIShapingClient@@PEAVIShapingFont@@@Z
    unsigned int GetLegacyFontCodePage(IShapingClient *, IShapingFont *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMyanmarTriggerClass@ShapingLibraryInternal@@YAGPEBUMyanmarTriggerClassification@1@K@Z
    unsigned short GetMyanmarTriggerClass(WindissectOpaque const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOtlPlaceCharCount@ShapingLibraryInternal@@YAGGPEBUSHAPING_GLYPHPROP@@@Z
    unsigned short GetOtlPlaceCharCount(unsigned short, SHAPING_GLYPHPROP const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPutOutInfoSize@ShapingLibraryInternal@@YAJQEAUARABIC_SHAPEStructtag@1@PEAK@Z
    long GetPutOutInfoSize(WindissectOpaque * const, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReorderClass@ShapingLibraryInternal@@YAEK@Z
    unsigned char GetReorderClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeStateOfLigComp@ShapingLibraryInternal@@YAKPEAU_INDEX2LIGINFO@1@PEB_WKHH@Z
    unsigned long GetRuntimeStateOfLigComp(WindissectOpaque *, wchar_t const *, unsigned long, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapingCharFlags@ShapingLibraryInternal@@YA?AUSHAPING_CHAR_FLAGS@@PEAVIShapingClient@@_W@Z
    SHAPING_CHAR_FLAGS GetShapingCharFlags(IShapingClient *, wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyllable@ShapingLibraryInternal@@YAXPEBUIndicTriggerClassification@1@AEAVCShapingString@@GAEAUSylAttributes@1@@Z
    void GetSyllable(WindissectOpaque const *, CShapingString &, unsigned short, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThaiCharClass@ShapingLibraryInternal@@YAEK@Z
    unsigned char GetThaiCharClass(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTriggerClass@ShapingLibraryInternal@@YAGPEBUIndicTriggerClassification@1@K@Z
    unsigned short GetTriggerClass(WindissectOpaque const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOldArabicTTFFont@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEAPEAUARABIC_SHAPEStructtag@1@@Z
    long HandleOldArabicTTFFont(IShapingClient *, IShapingFont *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IS_COMBINING@ShapingLibraryInternal@@YAHK@Z
    int IS_COMBINING(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDclPage@ShapingLibraryInternal@@YAXPEAT_DCL_Structtag@1@T21@_W@Z
    void InitDclPage(WindissectOpaque *, WindissectOpaque, wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInvalidBaseChar@ShapingLibraryInternal@@YAXPEAK0PEAUtag_OtlShapeInfo@1@@Z
    void InsertInvalidBaseChar(unsigned long *, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKhmerInvalidBaseChar@ShapingLibraryInternal@@YAXPEAKPEAUtag_OtlShapeInfo@1@@Z
    void InsertKhmerInvalidBaseChar(unsigned long *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsArabicDiacritic@ShapingLibraryInternal@@YAHPEB_WK@Z
    int IsArabicDiacritic(wchar_t const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsArabicNumericString@ShapingLibraryInternal@@YAHAEBVCShapingString@@@Z
    int IsArabicNumericString(CShapingString const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGsubFeatureInFont@ShapingLibraryInternal@@YA_NPEAVIShapingClient@@PEAVIShapingFont@@JH@Z
    bool IsGsubFeatureInFont(IShapingClient *, IShapingFont *, long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLigatureRecord@ShapingLibraryInternal@@YAHPEAUARABIC_SHAPEStructtag@1@G@Z
    int IsLigatureRecord(WindissectOpaque *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidMatra@ShapingLibraryInternal@@YAHAEAVCShapingString@@GPEAGGAEAUSylAttributes@1@@Z
    int IsValidMatra(CShapingString &, unsigned short, unsigned short *, unsigned short, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidPair@ShapingLibraryInternal@@YAHEE@Z
    int IsValidPair(unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidVowelMatra@ShapingLibraryInternal@@YAHKK@Z
    int IsValidVowelMatra(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroWidthControlCharacter@ShapingLibraryInternal@@YA_NK@Z
    bool IsZeroWidthControlCharacter(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IterateArabicClustersForReordering@ShapingLibraryInternal@@YAHPEAKHPEAH1@Z
    int IterateArabicClustersForReordering(unsigned long *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadArabicShapeTables@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEAPEAUARABIC_SHAPEStructtag@1@@Z
    long LoadArabicShapeTables(IShapingClient *, IShapingFont *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHebrewShapingTables@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEAPEAU_HEBREW_SHAPE_Structtag@1@@Z
    long LoadHebrewShapingTables(IShapingClient *, IShapingFont *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadOpenTypeSupportedScripts@ShapingLibraryInternal@@YAXPEBEKKPEAK@Z
    void LoadOpenTypeSupportedScripts(unsigned char const *, unsigned long, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupHebrewRuntimeState@ShapingLibraryInternal@@YAKPEAU_INDEX2LIGINFO@1@PEB_WK@Z
    unsigned long LookupHebrewRuntimeState(WindissectOpaque *, wchar_t const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupRuntimeStateOfLigComp@ShapingLibraryInternal@@YAKPEAU_INDEX2LIGINFO@1@PEB_WKH@Z
    unsigned long LookupRuntimeStateOfLigComp(WindissectOpaque *, wchar_t const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveChars@ShapingLibraryInternal@@YAGAEAUSylAttributes@1@AEAUReorderStatus@1@GGGPEAK@Z
    unsigned short MoveChars(WindissectOpaque &, WindissectOpaque &, unsigned short, unsigned short, unsigned short, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsReorder@ShapingLibraryInternal@@YAHPEAKHPEAH1@Z
    int NeedsReorder(unsigned long *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OtlJustifyWithKashida@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEBGHPEBJ2PEBUSHAPING_GLYPHOFFSET@@KKHPEAPEAEPEAPEAGPEAPEAHPEAHPEAPEAU3@@Z
    long OtlJustifyWithKashida(IShapingClient *, unsigned short const *, int, long const *, long const *, SHAPING_GLYPHOFFSET const *, unsigned long, unsigned long, int, unsigned char * *, unsigned short * *, int * *, int *, SHAPING_GLYPHOFFSET * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionStretchGlyphs@ShapingLibraryInternal@@YAXPEBUSHAPING_PROPERTIES@@PEBGPEBUSHAPING_GLYPHPROP@@JPEAJ3PEAUSHAPING_GLYPHOFFSET@@@Z
    void PositionStretchGlyphs(SHAPING_PROPERTIES const *, unsigned short const *, SHAPING_GLYPHPROP const *, long, long *, long *, SHAPING_GLYPHOFFSET *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDiacritics@ShapingLibraryInternal@@YAXPEAUARABIC_SHAPEStructtag@1@PEAGK@Z
    void ProcessDiacritics(WindissectOpaque *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RePositionOtlGlyphsWithFallback@ShapingLibraryInternal@@YAHPEAUotlRunProp@@PEAVotlList@@PEBUotlFeatureSet@@11111HH@Z
    int RePositionOtlGlyphsWithFallback(otlRunProp *, otlList *, otlFeatureSet const *, otlList *, otlList *, otlList *, otlList *, otlList *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDataFromCache@ShapingLibraryInternal@@YAJPEBXJPEAPEAXJPEAJ@Z
    long ReadDataFromCache(void const *, long, void * *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderArabicCluster@ShapingLibraryInternal@@YAXPEAKH@Z
    void ReorderArabicCluster(unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderChars@ShapingLibraryInternal@@YAHPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@PEAK@Z
    int ReorderChars(WindissectOpaque const *, WindissectOpaque &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderCluster@ShapingLibraryInternal@@YAXHPEAK0@Z
    void ReorderCluster(int, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderGlyphBackward@ShapingLibraryInternal@@YAHGGGPEAGGPEAUotlGlyphInfo@@@Z
    int ReorderGlyphBackward(unsigned short, unsigned short, unsigned short, unsigned short *, unsigned short, otlGlyphInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderGlyphForward@ShapingLibraryInternal@@YAHGGGPEAGGPEAUotlGlyphInfo@@@Z
    int ReorderGlyphForward(unsigned short, unsigned short, unsigned short, unsigned short *, unsigned short, otlGlyphInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderGlyphs@ShapingLibraryInternal@@YAHPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@GPEAKPEAGPEAUotlGlyphInfo@@@Z
    int ReorderGlyphs(WindissectOpaque const *, WindissectOpaque &, unsigned short, unsigned long *, unsigned short *, otlGlyphInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderHalant@ShapingLibraryInternal@@YAXPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@AEAUReorderStatus@1@PEAK@Z
    void ReorderHalant(WindissectOpaque const *, WindissectOpaque &, WindissectOpaque &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderMatraChars@ShapingLibraryInternal@@YAXPEBUIndicTriggerClassification@1@AEAUSylAttributes@1@AEAUReorderStatus@1@PEAK@Z
    void ReorderMatraChars(WindissectOpaque const *, WindissectOpaque &, WindissectOpaque &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreCharMap@ShapingLibraryInternal@@YAXPEBGGPEAUotlGlyphInfo@@GPEAGPEBUSHAPING_GLYPHPROP@@AEAV?$CShapingVector@USHAPING_CHARPROP@@@@@Z
    void RestoreCharMap(unsigned short const *, unsigned short, otlGlyphInfo *, unsigned short, unsigned short *, SHAPING_GLYPHPROP const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseCopyArabicString@ShapingLibraryInternal@@YAXAEBVCShapingString@@PEAK@Z
    void ReverseCopyArabicString(CShapingString const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultCharacterProperties@ShapingLibraryInternal@@YAXAEBVCShapingString@@AEAV?$CShapingVector@USHAPING_CHARPROP@@@@_N@Z
    void SetDefaultCharacterProperties(CShapingString const &, WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeArabicText@ShapingLibraryInternal@@YAJPEAKGPEBUSHAPING_PROPERTIES@@PEAUtag_OtlShapeInfo@1@PEAG@Z
    long ShapeArabicText(unsigned long *, unsigned short, SHAPING_PROPERTIES const *, WindissectOpaque *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeHangulText@ShapingLibraryInternal@@YAJPEBKGPEAUtag_OtlShapeInfo@1@PEAGPEAH@Z
    long ShapeHangulText(unsigned long const *, unsigned short, WindissectOpaque *, unsigned short *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeHebrewText@ShapingLibraryInternal@@YAJPEAKGPEAUtag_OtlShapeInfo@1@PEAG@Z
    long ShapeHebrewText(unsigned long *, unsigned short, WindissectOpaque *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeKhmerText@ShapingLibraryInternal@@YAJPEAKGPEAUtag_OtlShapeInfo@1@PEAG@Z
    long ShapeKhmerText(unsigned long *, unsigned short, WindissectOpaque *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeStretchGlyphs@ShapingLibraryInternal@@YAJPEAVIShapingClient@@PEAVIShapingFont@@PEBUSHAPING_PROPERTIES@@PEBUCOMMON_FONT_CACHE_DATA@1@PEBKGPEAVotlList@@PEAUotlGlyphInfo@@PEAGJ@Z
    long ShapeStretchGlyphs(IShapingClient *, IShapingFont *, SHAPING_PROPERTIES const *, WindissectOpaque const *, unsigned long const *, unsigned short, otlList *, otlGlyphInfo *, unsigned short *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeThaiLaoText@ShapingLibraryInternal@@YAJPEAKGPEAUtag_OtlShapeInfo@1@PEAG@Z
    long ShapeThaiLaoText(unsigned long *, unsigned short, WindissectOpaque *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftMcmChars@ShapingLibraryInternal@@YAXPEAKHW4ARSYCH_CLASS@1@H@Z
    void ShiftMcmChars(unsigned long *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubstituteOtlGlyphsWithFallback@ShapingLibraryInternal@@YAHPEAUotlRunProp@@PEAVotlList@@PEBUotlFeatureSet@@111HH@Z
    int SubstituteOtlGlyphsWithFallback(otlRunProp *, otlList *, otlFeatureSet const *, otlList *, otlList *, otlList *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontClassificationTable@ShapingLibraryInternal@@YAHPEAUotlRunProp@@PEAVotlList@@1PEAUIndicTriggerClassification@1@HK@Z
    int UpdateFontClassificationTable(otlRunProp *, otlList *, otlList *, WindissectOpaque *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCharacterOrder@ShapingLibraryInternal@@YAXPEAKH@Z
    void VerifyCharacterOrder(unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDataToCache@ShapingLibraryInternal@@YAJPEAVIShapingCacheWriterBuffer@@PEAXJPEAJ@Z
    long WriteDataToCache(IShapingCacheWriterBuffer *, void *, long, long *);
};

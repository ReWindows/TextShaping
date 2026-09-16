#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 16 member(s).
class UniversalEngineShaper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphs@UniversalEngineShaper@@QEAAJPEBJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JAEAVCShapingString@@AEAV?$CShapingVector@G@@AEAV?$CShapingVector@USHAPING_CHARPROP@@@@GPEAGPEAUSHAPING_GLYPHPROP@@PEAJ@Z
    long GetGlyphs(long const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, CShapingString &, WindissectOpaque &, WindissectOpaque &, unsigned short, unsigned short *, SHAPING_GLYPHPROP *, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UniversalEngineShaper@@QEAA@PEAVIShapingClient@@PEAVIShapingFont@@PEBUSHAPING_PROPERTIES@@AEAVCShapingString@@G@Z
    UniversalEngineShaper(IShapingClient *, IShapingFont *, SHAPING_PROPERTIES const *, CShapingString &, unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UniversalEngineShaper@@QEAA@XZ
    ~UniversalEngineShaper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyEntireRunFeatures@UniversalEngineShaper@@IEAAJAEAUotlRunProp@@AEAVotlList@@PEAUotlFeatureDesc@@GG@Z
    long ApplyEntireRunFeatures(otlRunProp &, otlList &, otlFeatureDesc *, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPerClusterFeatures@UniversalEngineShaper@@IEAAJAEAUotlRunProp@@AEAVotlList@@PEAVUniversalCluster@ShapingLibraryInternal@@PEAGPEAK4PEAUotlGlyphInfo@@PEAUotlFeatureDesc@@3@Z
    long ApplyPerClusterFeatures(otlRunProp &, otlList &, WindissectOpaque *, unsigned short *, unsigned long *, unsigned long *, otlGlyphInfo *, otlFeatureDesc *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPerClusterGSUBFeatures@UniversalEngineShaper@@IEAAJAEAUotlRunProp@@AEAVotlList@@11GPEAUotlFeatureDesc@@G@Z
    long ApplyPerClusterGSUBFeatures(otlRunProp &, otlList &, otlList &, otlList &, unsigned short, otlFeatureDesc *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPositionalAlternatesFeatures@UniversalEngineShaper@@IEAAJAEAUotlRunProp@@AEAVotlList@@@Z
    long ApplyPositionalAlternatesFeatures(otlRunProp &, otlList &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySyllableIntoCharBuffer@UniversalEngineShaper@@IEAAXAEAVCShapingString@@GGPEAK1@Z
    void CopySyllableIntoCharBuffer(CShapingString &, unsigned short, unsigned short, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousClusterStart@UniversalEngineShaper@@IEAAGXZ
    unsigned short GetPreviousClusterStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformClusterShaping@UniversalEngineShaper@@MEAAJAEAVCShapingString@@AEAVotlList@@PEAUotlFeatureDesc@@AEAUotlRunProp@@@Z
    virtual long PerformClusterShaping(CShapingString &, otlList &, otlFeatureDesc *, otlRunProp &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformShaping@UniversalEngineShaper@@IEAAJPEBJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JAEAVCShapingString@@@Z
    long PerformShaping(long const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, CShapingString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordGlyphsAndGlyphProperties@UniversalEngineShaper@@IEAAJPEAGPEAUSHAPING_GLYPHPROP@@@Z
    long RecordGlyphsAndGlyphProperties(unsigned short *, SHAPING_GLYPHPROP *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordLogicalClusters@UniversalEngineShaper@@IEAAXAEAV?$CShapingVector@G@@@Z
    void RecordLogicalClusters(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordOutput@UniversalEngineShaper@@IEAAJAEAVCShapingString@@AEAV?$CShapingVector@G@@AEAV?$CShapingVector@USHAPING_CHARPROP@@@@PEAGPEAUSHAPING_GLYPHPROP@@PEAJ@Z
    long RecordOutput(CShapingString &, WindissectOpaque &, WindissectOpaque &, unsigned short *, SHAPING_GLYPHPROP *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordShapingInfo@UniversalEngineShaper@@IEAAXPEBVUniversalCluster@ShapingLibraryInternal@@PEAW4POSITIONAL_SHAPE_TYPE@@PEA_N_N@Z
    void RecordShapingInfo(WindissectOpaque const *, int *, bool *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteClusterToFullBuffers@UniversalEngineShaper@@IEAAXPEAGPEAUotlGlyphInfo@@GG@Z
    void WriteClusterToFullBuffers(unsigned short *, otlGlyphInfo *, unsigned short, unsigned short);
};

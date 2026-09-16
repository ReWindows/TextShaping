#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
namespace ShapingLibraryInternal {
class UniversalEngineGsubFontFeatures {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRequiredAndUserFeatures@UniversalEngineGsubFontFeatures@ShapingLibraryInternal@@SAJPEBUSHAPING_PROPERTIES@@PEBJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JAEAV?$MemoryBuffer@UotlFeatureDesc@@@@GPEAG4AEAW4DirectionalSubstitutions@2@@Z
    static long AddRequiredAndUserFeatures(SHAPING_PROPERTIES const *, long const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, WindissectOpaque &, unsigned short, unsigned short *, unsigned short *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserFeatures@UniversalEngineGsubFontFeatures@ShapingLibraryInternal@@SAJPEBUSHAPING_PROPERTIES@@PEBJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JAEAV?$MemoryBuffer@UotlFeatureDesc@@@@GPEAG4AEAW4DirectionalSubstitutions@2@@Z
    static long AddUserFeatures(SHAPING_PROPERTIES const *, long const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, WindissectOpaque &, unsigned short, unsigned short *, unsigned short *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumUserFeatures@UniversalEngineGsubFontFeatures@ShapingLibraryInternal@@SAJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JHPEAG@Z
    static long GetNumUserFeatures(SHAPING_TEXTRANGE_PROPERTIES const * *, long, int, unsigned short *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDefaultFeatures@UniversalEngineGsubFontFeatures@ShapingLibraryInternal@@CAJPEBUSHAPING_PROPERTIES@@AEAV?$MemoryBuffer@UotlFeatureDesc@@@@GPEAG@Z
    static long AddDefaultFeatures(SHAPING_PROPERTIES const *, WindissectOpaque &, unsigned short, unsigned short *);
};
} // namespace ShapingLibraryInternal

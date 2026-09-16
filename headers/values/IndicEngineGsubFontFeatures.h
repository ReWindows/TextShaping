#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 6 member(s).
class IndicEngineGsubFontFeatures {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserFeatures@IndicEngineGsubFontFeatures@@AEAAJPEBUSHAPING_PROPERTIES@@PEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JPEAV?$MemoryBuffer@UotlFeatureDesc@@@@G@Z
    long AddUserFeatures(SHAPING_PROPERTIES const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, WindissectOpaque *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumUserFeatures@IndicEngineGsubFontFeatures@@AEAAJPEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JH@Z
    long GetNumUserFeatures(SHAPING_TEXTRANGE_PROPERTIES const * *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionOptionalFontFeatures@IndicEngineGsubFontFeatures@@AEBAXPEAV?$MemoryBuffer@UotlFeatureDesc@@@@@Z
    void RepositionOptionalFontFeatures(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontFeature@IndicEngineGsubFontFeatures@@AEAAXAEBUSylAttributes@ShapingLibraryInternal@@PEAGAEAHKPEAV?$MemoryBuffer@UotlFeatureDesc@@@@@Z
    void SetFontFeature(WindissectOpaque const &, unsigned short *, int &, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreUserFeatureRecord@IndicEngineGsubFontFeatures@@AEAAXPEBUSHAPING_PROPERTIES@@PEBUTEXTRANGE_FEATURE_RECORD@@PEAV?$MemoryBuffer@UotlFeatureDesc@@@@G@Z
    void StoreUserFeatureRecord(SHAPING_PROPERTIES const *, TEXTRANGE_FEATURE_RECORD const *, WindissectOpaque *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreUserFeatures@IndicEngineGsubFontFeatures@@AEAAJPEBUSHAPING_PROPERTIES@@PEAPEBUSHAPING_TEXTRANGE_PROPERTIES@@JPEAV?$MemoryBuffer@UotlFeatureDesc@@@@G@Z
    long StoreUserFeatures(SHAPING_PROPERTIES const *, SHAPING_TEXTRANGE_PROPERTIES const * *, long, WindissectOpaque *, unsigned short);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlRealizedFeatureVariation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@otlRealizedFeatureVariation@@QEAAXAEAVotlResourceMgr@@@Z
    void Clear(otlResourceMgr &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFeatureSubstitutions@otlRealizedFeatureVariation@@AEAAHAEAVotlFeatureVariationFeatureSubstitutionTable@@AEAVotlResourceMgr@@HPEBEAEA_N@Z
    int ApplyFeatureSubstitutions(otlFeatureVariationFeatureSubstitutionTable &, otlResourceMgr &, int, unsigned char const *, bool &);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlFeatureVariationConditionSetTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?condition@otlFeatureVariationConditionSetTable@@QEBA?AVotlFeatureVariationConditionTable@@GPEBE@Z
    otlFeatureVariationConditionTable condition(unsigned short, unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlFeatureVariationConditionSetTable@@QEAA@PEBE0@Z
    otlFeatureVariationConditionSetTable(unsigned char const *, unsigned char const *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlFeatureVariationConditionTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?match@otlFeatureVariationConditionTable@@QEBA_NAEBVotlFeatureVariationParameters@@PEBE@Z
    bool match(otlFeatureVariationParameters const &, unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlFeatureVariationConditionTable@@QEAA@PEBE0@Z
    otlFeatureVariationConditionTable(unsigned char const *, unsigned char const *);
};

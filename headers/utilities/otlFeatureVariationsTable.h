#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlFeatureVariationsTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?conditionSet@otlFeatureVariationsTable@@QEBA?AVotlFeatureVariationConditionSetTable@@KPEBE@Z
    otlFeatureVariationConditionSetTable conditionSet(unsigned long, unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?featureSubstitution@otlFeatureVariationsTable@@QEBA?AVotlFeatureVariationFeatureSubstitutionTable@@KPEBE@Z
    otlFeatureVariationFeatureSubstitutionTable featureSubstitution(unsigned long, unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlFeatureVariationsTable@@QEAA@PEBE0@Z
    otlFeatureVariationsTable(unsigned char const *, unsigned char const *);
};

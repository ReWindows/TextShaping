#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlFeatureVariationFeatureSubstitutionTable {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlFeatureVariationFeatureSubstitutionTable@@QEAA@PEBE0@Z
    otlFeatureVariationFeatureSubstitutionTable(unsigned char const *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?substitutionFeatureTable@otlFeatureVariationFeatureSubstitutionTable@@QEBA?AVotlFeatureTable@@GPEBE@Z
    otlFeatureTable substitutionFeatureTable(unsigned short, unsigned char const *) const;
};

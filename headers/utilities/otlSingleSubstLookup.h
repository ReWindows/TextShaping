#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlSingleSubstLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlSingleSubstLookup@@QEAAHPEAVotlList@@GGPEAGPEBE@Z
    int apply(otlList *, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?applyToSingleGlyph@otlSingleSubstLookup@@QEAAHPEBEPEAG@Z
    int applyToSingleGlyph(unsigned char const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlSingleSubstLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

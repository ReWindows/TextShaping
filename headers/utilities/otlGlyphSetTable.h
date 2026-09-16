#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlGlyphSetTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?coverage@otlGlyphSetTable@@QEBA?AVotlCoverage@@GPEBE@Z
    otlCoverage coverage(unsigned short, unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?coverageCount@otlGlyphSetTable@@QEBAGXZ
    unsigned short coverageCount() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlGlyphSetTable@@QEAA@PEBE0@Z
    otlGlyphSetTable(unsigned char const *, unsigned char const *);
};

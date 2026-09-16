#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlAlternateSubTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?altenateSet@otlAlternateSubTable@@QEAA?AVotlAlternateSetTable@@GPEBE@Z
    otlAlternateSetTable altenateSet(unsigned short, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?alternateSetCount@otlAlternateSubTable@@QEAAGXZ
    unsigned short alternateSetCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?coverage@otlAlternateSubTable@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage coverage(unsigned char const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlAlternateSubTable@@QEAA@PEBE0@Z
    otlAlternateSubTable(unsigned char const *, unsigned char const *);
};

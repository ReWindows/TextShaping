#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlCursivePosSubTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?coverage@otlCursivePosSubTable@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage coverage(unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?entryAnchor@otlCursivePosSubTable@@QEAA?AVotlAnchor@@GPEBE@Z
    otlAnchor entryAnchor(unsigned short, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?exitAnchor@otlCursivePosSubTable@@QEAA?AVotlAnchor@@GPEBE@Z
    otlAnchor exitAnchor(unsigned short, unsigned char const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlCursivePosSubTable@@QEAA@PEBE0@Z
    otlCursivePosSubTable(unsigned char const *, unsigned char const *);
};

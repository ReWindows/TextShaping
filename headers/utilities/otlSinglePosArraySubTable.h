#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlSinglePosArraySubTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?coverage@otlSinglePosArraySubTable@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage coverage(unsigned char const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlSinglePosArraySubTable@@QEAA@PEBE0@Z
    otlSinglePosArraySubTable(unsigned char const *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?valueRecord@otlSinglePosArraySubTable@@QEAA?AVotlValueRecord@@GPEBE@Z
    otlValueRecord valueRecord(unsigned short, unsigned char const *);
};

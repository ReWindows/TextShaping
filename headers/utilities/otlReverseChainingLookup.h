#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlReverseChainingLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlReverseChainingLookup@@QEAAHPEAVotlList@@0AEAVotlResourceMgr@@GGGGPEAGPEBE@Z
    int apply(otlList *, otlList *, otlResourceMgr &, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlReverseChainingLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

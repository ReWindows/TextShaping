#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlMultiSubstLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlMultiSubstLookup@@QEAAHPEAVotlList@@0AEAVotlResourceMgr@@GGGGPEAGPEBE@Z
    int apply(otlList *, otlList *, otlResourceMgr &, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlMultiSubstLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

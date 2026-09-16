#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlChainingLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlChainingLookup@@QEAAHHPEAVotlList@@0AEAVotlResourceMgr@@GGHGAEBUotlMetrics@@00GGPEAGPEBE@Z
    int apply(int, otlList *, otlList *, otlResourceMgr &, unsigned short, unsigned short, int, unsigned short, otlMetrics const &, otlList *, otlList *, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlChainingLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

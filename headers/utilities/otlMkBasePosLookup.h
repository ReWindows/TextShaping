#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlMkBasePosLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlMkBasePosLookup@@QEAAHPEAVotlList@@0AEAVotlResourceMgr@@AEBUotlMetrics@@00GGPEAGPEBE@Z
    int apply(otlList *, otlList *, otlResourceMgr &, otlMetrics const &, otlList *, otlList *, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlMkBasePosLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

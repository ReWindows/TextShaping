#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlMkMkPosLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlMkMkPosLookup@@QEAAHPEAVotlList@@0AEAVotlResourceMgr@@GGAEBUotlMetrics@@00GGPEAGPEBE@Z
    int apply(otlList *, otlList *, otlResourceMgr &, unsigned short, unsigned short, otlMetrics const &, otlList *, otlList *, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlMkMkPosLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

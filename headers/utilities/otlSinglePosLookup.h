#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlSinglePosLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlSinglePosLookup@@QEAAHPEAVotlList@@AEBUotlMetrics@@00GGPEAGAEAVotlResourceMgr@@PEBE@Z
    int apply(otlList *, otlMetrics const &, otlList *, otlList *, unsigned short, unsigned short, unsigned short *, otlResourceMgr &, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?applyToSingleGlyph@otlSinglePosLookup@@QEAAHGAEBUotlMetrics@@AEAVotlResourceMgr@@PEBEPEAHPEAUotlPlacement@@@Z
    int applyToSingleGlyph(unsigned short, otlMetrics const &, otlResourceMgr &, unsigned char const *, int *, otlPlacement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getCoverageTable@otlSinglePosLookup@@QEAA?AVotlCoverage@@PEBE@Z
    otlCoverage getCoverageTable(unsigned char const *);
};

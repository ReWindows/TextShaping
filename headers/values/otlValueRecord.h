#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlValueRecord {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?adjustPos@otlValueRecord@@QEBAXAEBUotlMetrics@@PEAUotlPlacement@@PEAHAEAVotlResourceMgr@@PEBE@Z
    void adjustPos(otlMetrics const &, otlPlacement *, int *, otlResourceMgr &, unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlValueRecord@@QEAA@GPEBE00@Z
    otlValueRecord(unsigned short, unsigned char const *, unsigned char const *, unsigned char const *);
};

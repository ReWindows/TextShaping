#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlDeviceTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?isVariationIndex@otlDeviceTable@@QEBA_NXZ
    bool isVariationIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlDeviceTable@@QEAA@PEBE0@Z
    otlDeviceTable(unsigned char const *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?value@otlDeviceTable@@QEBAHGAEAVotlResourceMgr@@H@Z
    int value(unsigned short, otlResourceMgr &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?value@otlDeviceTable@@QEBAHG@Z
    int value(unsigned short) const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlLookupListTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?lookup@otlLookupListTable@@QEBA?AVotlLookupTable@@GPEBE@Z
    otlLookupTable lookup(unsigned short, unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?lookupCount@otlLookupListTable@@QEBAGXZ
    unsigned short lookupCount() const;
};

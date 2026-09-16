#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlLookupTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?lookupType@otlLookupTable@@QEBAGXZ
    unsigned short lookupType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?markFilteringSet@otlLookupTable@@QEBAGPEBE@Z
    unsigned short markFilteringSet(unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?subTable@otlLookupTable@@QEBA?AVotlLookupFormat@@GPEBE@Z
    otlLookupFormat subTable(unsigned short, unsigned char const *) const;
};

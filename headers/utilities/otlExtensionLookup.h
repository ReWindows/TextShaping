#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlExtensionLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?extensionSubTable@otlExtensionLookup@@QEBA?AVotlLookupFormat@@PEBE@Z
    otlLookupFormat extensionSubTable(unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlExtensionLookup@@QEAA@VotlLookupFormat@@PEBE@Z
    otlExtensionLookup(otlLookupFormat, unsigned char const *);
};

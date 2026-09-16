#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 2 member(s).
class otlContextClassRuleSetTable {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlContextClassRuleSetTable@@QEAA@PEBE0@Z
    otlContextClassRuleSetTable(unsigned char const *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?rule@otlContextClassRuleSetTable@@QEBA?AVotlContextClassRuleTable@@GPEBE@Z
    otlContextClassRuleTable rule(unsigned short, unsigned char const *) const;
};

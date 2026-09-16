#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class otlAlternateSubstLookup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@otlAlternateSubstLookup@@QEAAHPEAVotlList@@HGGPEAGPEBE@Z
    int apply(otlList *, int, unsigned short, unsigned short, unsigned short *, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?applyToSingleGlyph@otlAlternateSubstLookup@@QEAAHHPEBEPEAG@Z
    int applyToSingleGlyph(int, unsigned char const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getAlternateCount@otlAlternateSubstLookup@@QEAAGPEBEG@Z
    unsigned short getAlternateCount(unsigned char const *, unsigned short);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlGDefHeader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?attachClassDef@otlGDefHeader@@QEBA?AVotlClassDef@@PEBE@Z
    otlClassDef attachClassDef(unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?glyphClassDef@otlGDefHeader@@QEBA?AVotlClassDef@@PEBE@Z
    otlClassDef glyphClassDef(unsigned char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?glyphSets@otlGDefHeader@@QEBA?AVotlGlyphSetTable@@PEBE@Z
    otlGlyphSetTable glyphSets(unsigned char const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0otlGDefHeader@@QEAA@PEBE0@Z
    otlGDefHeader(unsigned char const *, unsigned char const *);
};

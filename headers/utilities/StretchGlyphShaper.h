#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 7 member(s).
namespace ShapingLibraryInternal {
class StretchGlyphShaper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeStretchGlyphs@StretchGlyphShaper@ShapingLibraryInternal@@QEAAJPEBK@Z
    long ShapeStretchGlyphs(unsigned long const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustCharMap@StretchGlyphShaper@ShapingLibraryInternal@@AEAAXXZ
    void AdjustCharMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRepeatingGlyphs@StretchGlyphShaper@ShapingLibraryInternal@@AEAAJXZ
    long InsertRepeatingGlyphs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRepeatingGlyphsSome@StretchGlyphShaper@ShapingLibraryInternal@@AEAAJH@Z
    long InsertRepeatingGlyphsSome(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertSpacingGlyph@StretchGlyphShaper@ShapingLibraryInternal@@AEAAXGG@Z
    void InsertSpacingGlyph(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveLastStretchGlyphAfterEnclosedGlyphs@StretchGlyphShaper@ShapingLibraryInternal@@AEAAXXZ
    void MoveLastStretchGlyphAfterEnclosedGlyphs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeStretchGlyph@StretchGlyphShaper@ShapingLibraryInternal@@AEAAJXZ
    long ShapeStretchGlyph();
};
} // namespace ShapingLibraryInternal

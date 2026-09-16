#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
namespace ShapingLibraryInternal {
class StretchGlyphPositioner {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcMinSpacingWidthNeeded@StretchGlyphPositioner@ShapingLibraryInternal@@AEAAHXZ
    int CalcMinSpacingWidthNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionFixedRepeatingPair@StretchGlyphPositioner@ShapingLibraryInternal@@AEAAXPEAH000H0@Z
    void PositionFixedRepeatingPair(int *, int *, int *, int *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionStretchGlyph@StretchGlyphPositioner@ShapingLibraryInternal@@AEAAXXZ
    void PositionStretchGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindNextStretchGlyph@StretchGlyphPositioner@ShapingLibraryInternal@@AEAAHXZ
    int TryFindNextStretchGlyph();
};
} // namespace ShapingLibraryInternal

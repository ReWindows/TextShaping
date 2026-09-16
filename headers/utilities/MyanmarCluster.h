#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
namespace ShapingLibraryInternal {
class MyanmarCluster {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MyanmarCluster@ShapingLibraryInternal@@QEAA@AEBVCShapingString@@G@Z
    MyanmarCluster(CShapingString const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderMyanmarChars@MyanmarCluster@ShapingLibraryInternal@@QEAAJPEAVIShapingClient@@PEAK@Z
    long ReorderMyanmarChars(IShapingClient *, unsigned long *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMyanmarSyllable@MyanmarCluster@ShapingLibraryInternal@@AEAAXAEBVCShapingString@@G@Z
    void GetMyanmarSyllable(CShapingString const &, unsigned short);
};
} // namespace ShapingLibraryInternal

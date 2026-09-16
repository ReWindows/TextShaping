#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class CShapingString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyString@CShapingString@@QEAAXPEAK@Z
    void CopyString(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CShapingString@@QEAAJPEAVIShapingClient@@PEB_WJ@Z
    long Init(IShapingClient *, wchar_t const *, long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CShapingString@@AEAAXXZ
    void Cleanup();
};

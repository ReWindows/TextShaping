#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
namespace tson {
class write_buffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z
    bool push_back(void const *, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?reserve@write_buffer@tson@@AEAA_N_K@Z
    bool reserve(uint64_t);
};
} // namespace tson

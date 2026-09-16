#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 10 member(s).
namespace tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@tson@@QEAAXXZ
    void finishNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_name@output_archive@tson@@AEAA_N_N@Z
    bool write_name(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z
    bool write_type(bool, int);
};
} // namespace tson

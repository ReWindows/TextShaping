#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 3 member(s).
class tson {
public:
    class input_archive;
    class output_archive;
    class read_buffer;
    class write_buffer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z
    void load_nothrow(WindissectOpaque &, ::tip2::test_flag &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z
    void save_nothrow(WindissectOpaque &, ::tip2::test_flag &);
};

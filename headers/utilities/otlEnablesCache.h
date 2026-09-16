#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlEnablesCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enables@otlEnablesCache@@QEAA_NPEBUotlFeatureDesc@@GG@Z
    bool Enables(otlFeatureDesc const *, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@otlEnablesCache@@QEAAXGPEAG0@Z
    void Refresh(unsigned short, unsigned short *, unsigned short *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablesFull@otlEnablesCache@@CA_NAEBVotlFeatureTable@@G@Z
    static bool EnablesFull(otlFeatureTable const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@otlEnablesCache@@AEAAXAEBVotlFeatureTable@@GPEAG1@Z
    void Refresh(otlFeatureTable const &, unsigned short, unsigned short *, unsigned short *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 4 member(s).
class otlCacheManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@otlCacheManager@@QEAAXAEAVotlResourceMgr@@@Z
    void Detach(otlResourceMgr &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextLookup@otlCacheManager@@QEAA_NGGPEAVotlList@@AEAVotlEnablesCache@@PEAG2@Z
    bool GetNextLookup(unsigned short, unsigned short, otlList *, otlEnablesCache &, unsigned short *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@otlCacheManager@@QEAAXHPEAVotlList@@AEAVotlResourceMgr@@@Z
    void Init(int, otlList *, otlResourceMgr &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupsInCache@otlCacheManager@@QEAAGXZ
    unsigned short LookupsInCache();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 10 member(s).
class otlResourceMgr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocMem@otlResourceMgr@@QEAAPEAXH@Z
    void * AllocMem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureVariationsTable@otlResourceMgr@@QEAA?AVotlFeatureVariationsTable@@H@Z
    otlFeatureVariationsTable FeatureVariationsTable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeMem@otlResourceMgr@@QEAAXPEAX@Z
    void FreeMem(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariationStoreValue@otlResourceMgr@@QEAAHHKK@Z
    int GetVariationStoreValue(int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?detach@otlResourceMgr@@QEAAXXZ
    void detach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?getEnablesCacheBuf@otlResourceMgr@@QEAAPEAEG@Z
    unsigned char * getEnablesCacheBuf(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getOtlTable@otlResourceMgr@@QEAAHHPEAPEBE0@Z
    int getOtlTable(int, unsigned char const * *, unsigned char const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getPointCoords@otlResourceMgr@@QEAAPEAUotlPlacement@@G@Z
    otlPlacement * getPointCoords(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?init@otlResourceMgr@@QEAAHPEBUotlRunProp@@PEAVotlList@@@Z
    int init(otlRunProp const *, otlList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?reallocOtlList@otlResourceMgr@@QEAAHPEAVotlList@@GKW4otlReallocOptions@@@Z
    int reallocOtlList(otlList *, unsigned short, unsigned long, int);
};

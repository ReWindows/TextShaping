#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 15 member(s).
class COtlsClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocMem@COtlsClient@@UEAAHHPEAPEAX@Z
    virtual int AllocMem(int, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COtlsClient@@QEAA@PEAVIShapingClient@@PEAVIShapingFont@@HHH@Z
    COtlsClient(IShapingClient *, IShapingFont *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeGlyphPointCoords@COtlsClient@@UEAAHGPEAUotlPlacement@@@Z
    virtual int FreeGlyphPointCoords(unsigned short, otlPlacement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeMem@COtlsClient@@UEAAHPEAX@Z
    virtual int FreeMem(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCache@COtlsClient@@UEAAHKPEAPEBXPEAJPEAK@Z
    virtual int GetCache(unsigned long, void const * *, long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAdv@COtlsClient@@UEAAHPEBVotlList@@PEAV2@@Z
    virtual int GetDefaultAdv(otlList const *, otlList *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultGlyphs@COtlsClient@@UEAAHPEBVotlList@@0PEAV2@@Z
    virtual int GetDefaultGlyphs(otlList const *, otlList const *, otlList *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphPointCoords@COtlsClient@@UEAAHGPEAPEAUotlPlacement@@@Z
    virtual int GetGlyphPointCoords(unsigned short, otlPlacement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOtlTable@COtlsClient@@UEAAHHPEAPEBXPEAJ@Z
    virtual int GetOtlTable(int, void const * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariationAxisValues@COtlsClient@@UEAAHPEAPEBFAEAG@Z
    virtual int GetVariationAxisValues(short const * *, unsigned short &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariationStoreValue@COtlsClient@@UEAAHPEBXKKKAEAJ@Z
    virtual int GetVariationStoreValue(void const *, unsigned long, unsigned long, unsigned long, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReallocOtlList@COtlsClient@@UEAAHPEAVotlList@@GGW4otlReallocOptions@@@Z
    virtual int ReallocOtlList(otlList *, unsigned short, unsigned short, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COtlsClient@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCache@COtlsClient@@UEAAHKPEBXJ@Z
    virtual int ReleaseCache(unsigned long, void const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOtlTable@COtlsClient@@UEAAXHPEBXJ@Z
    virtual void ReleaseOtlTable(int, void const *, long);
};

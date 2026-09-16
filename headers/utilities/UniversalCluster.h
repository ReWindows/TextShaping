#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextShaping.dll by Windissect. 30 member(s).
namespace ShapingLibraryInternal {
class UniversalCluster {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinsLeft@UniversalCluster@ShapingLibraryInternal@@QEBA_NXZ
    bool JoinsLeft() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinsRight@UniversalCluster@ShapingLibraryInternal@@QEBA_NXZ
    bool JoinsRight() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderPrebaseTypes@UniversalCluster@ShapingLibraryInternal@@QEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderPrebaseTypes(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderPref@UniversalCluster@ShapingLibraryInternal@@QEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderPref(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderRphf@UniversalCluster@ShapingLibraryInternal@@QEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderRphf(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UniversalCluster@ShapingLibraryInternal@@QEAA@AEBVCShapingString@@G@Z
    UniversalCluster(CShapingString const &, unsigned short);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionAppendInvalid@UniversalCluster@ShapingLibraryInternal@@IEAAXGGW4UNIVERSALCH_CLASS@2@K@Z
    void ActionAppendInvalid(unsigned short, unsigned short, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionAppendSplitVowel@UniversalCluster@ShapingLibraryInternal@@IEAAXGGW4UNIVERSALCH_CLASS@2@PEAGG@Z
    void ActionAppendSplitVowel(unsigned short, unsigned short, int, unsigned short *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionAppendVowel@UniversalCluster@ShapingLibraryInternal@@IEAAXGGW4UNIVERSALCH_CLASS@2@PEAG@Z
    void ActionAppendVowel(unsigned short, unsigned short, int, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAction@UniversalCluster@ShapingLibraryInternal@@IEBA?AW4UNIVERSALFSM_ACTION@2@W4UNIVERSALFSM_STATE@2@W4UNIVERSALCH_CLASS@2@@Z
    int GetAction(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseCharLocForPrebaseMove@UniversalCluster@ShapingLibraryInternal@@IEAAGPEAKPEAGPEAUotlGlyphInfo@@GG@Z
    unsigned short GetBaseCharLocForPrebaseMove(unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextState@UniversalCluster@ShapingLibraryInternal@@IEBA?AW4UNIVERSALFSM_STATE@2@W432@W4UNIVERSALCH_CLASS@2@@Z
    int GetNextState(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumSplitVowelComponents@UniversalCluster@ShapingLibraryInternal@@IEBAGK@Z
    unsigned short GetNumSplitVowelComponents(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniversalCluster@UniversalCluster@ShapingLibraryInternal@@IEAAXAEBVCShapingString@@G@Z
    void GetUniversalCluster(CShapingString const &, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniversalTriggerClass@UniversalCluster@ShapingLibraryInternal@@IEBAGK@Z
    unsigned short GetUniversalTriggerClass(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSplitVowel@UniversalCluster@ShapingLibraryInternal@@IEAAXPEAK@Z
    void HandleSplitVowel(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidVModPre@UniversalCluster@ShapingLibraryInternal@@IEBA_NXZ
    bool HasValidVModPre() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDottedCircle@UniversalCluster@ShapingLibraryInternal@@IEAAXPEAK@Z
    void InsertDottedCircle(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordAppendConsMedPre@UniversalCluster@ShapingLibraryInternal@@IEAAXG@Z
    void RecordAppendConsMedPre(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordAppendVPre@UniversalCluster@ShapingLibraryInternal@@IEAAXG@Z
    void RecordAppendVPre(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordAppendVowelModPre@UniversalCluster@ShapingLibraryInternal@@IEAAXG@Z
    void RecordAppendVowelModPre(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderCharsBackward@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@GGGG@Z
    long ReorderCharsBackward(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short, unsigned short, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderCharsBackwardHelper_UpdateCharLocationInfo@UniversalCluster@ShapingLibraryInternal@@IEAAXPEAGGGG@Z
    void ReorderCharsBackwardHelper_UpdateCharLocationInfo(unsigned short *, unsigned short, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderCharsForward@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@GGGG@Z
    long ReorderCharsForward(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short, unsigned short, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderCharsForwardHelper_UpdateCharLocationInfo@UniversalCluster@ShapingLibraryInternal@@IEAAXPEAGGGG@Z
    void ReorderCharsForwardHelper_UpdateCharLocationInfo(unsigned short *, unsigned short, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderConsMedPre@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderConsMedPre(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderGlyphsBackward@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAGPEAUotlGlyphInfo@@GGGG@Z
    long ReorderGlyphsBackward(IShapingClient *, unsigned short *, otlGlyphInfo *, unsigned short, unsigned short, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderVModPre@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderVModPre(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderVPre@UniversalCluster@ShapingLibraryInternal@@IEAAJPEAVIShapingClient@@PEAKPEAGPEAUotlGlyphInfo@@G@Z
    long ReorderVPre(IShapingClient *, unsigned long *, unsigned short *, otlGlyphInfo *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddNextCharToCluster@UniversalCluster@ShapingLibraryInternal@@IEAA_NGKKPEAW4UNIVERSALFSM_STATE@2@PEAG@Z
    bool TryAddNextCharToCluster(unsigned short, unsigned long, unsigned long, int *, unsigned short *);
};
} // namespace ShapingLibraryInternal

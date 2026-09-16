//! Evidence-labelled vftable metadata and raw slot access.
//! Slot calls remain the consumer's responsibility until a signature is unique.

use core::ffi::c_void;

#[derive(Clone, Copy, Debug)]
pub struct VTableInfo { pub name: &'static str, pub rva: u32, pub first_slot: usize, pub slot_count: usize, pub confidence: &'static str }

#[derive(Clone, Copy, Debug)]
pub struct VTableSlot { pub table_rva: u32, pub slot: u32, pub byte_offset: u32, pub target_rva: u32, pub target_id: Option<&'static str>, pub target_name: Option<&'static str>, pub ambiguous: bool, pub this_adjustment: Option<i32> }

pub static VTABLES: &[VTableInfo] = &[
    VTableInfo { name: "const COtlsClient::`vftable'", rva: 0x58FC0, first_slot: 0, slot_count: 14, confidence: "likely" },
    VTableInfo { name: "const UniversalEngineShaper::`vftable'", rva: 0x59030, first_slot: 14, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::`vftable'", rva: 0x59048, first_slot: 15, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__base<bool __cdecl (void *, uint64_t, void *, uint64_t, unsigned int)>::`vftable'", rva: 0x59070, first_slot: 20, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const MyanmarEngineShaper::`vftable'", rva: 0x59098, first_slot: 25, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip>::`vftable'", rva: 0x590A0, first_slot: 26, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const tip2::test_watcher<class tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip> >::`vftable'", rva: 0x590C8, first_slot: 31, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const tip2::details::test_data_interface::`vftable'", rva: 0x590D0, first_slot: 32, slot_count: 5, confidence: "likely" },
];

pub static VTABLE_SLOTS: &[VTableSlot] = &[
    VTableSlot { table_rva: 0x58FC0, slot: 0, byte_offset: 0, target_rva: 0x25760, target_id: Some("?GetOtlTable@COtlsClient@@UEAAHHPEAPEBXPEAJ@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetOtlTable(int, void const * *, long *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 1, byte_offset: 8, target_rva: 0x25BD0, target_id: Some("?ReleaseOtlTable@COtlsClient@@UEAAXHPEBXJ@Z"), target_name: Some("public: virtual void __cdecl COtlsClient::ReleaseOtlTable(int, void const *, long)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 2, byte_offset: 16, target_rva: 0x288E0, target_id: Some("?ReallocOtlList@COtlsClient@@UEAAHPEAVotlList@@GGW4otlReallocOptions@@@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::ReallocOtlList(class otlList *, unsigned short, unsigned short, enum otlReallocOptions)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 3, byte_offset: 24, target_rva: 0x27210, target_id: Some("?GetDefaultGlyphs@COtlsClient@@UEAAHPEBVotlList@@0PEAV2@@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetDefaultGlyphs(class otlList const *, class otlList const *, class otlList *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 4, byte_offset: 32, target_rva: 0x273A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 5, byte_offset: 40, target_rva: 0x288D0, target_id: Some("?GetGlyphPointCoords@COtlsClient@@UEAAHGPEAPEAUotlPlacement@@@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetGlyphPointCoords(unsigned short, struct otlPlacement * *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 6, byte_offset: 48, target_rva: 0x273A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 7, byte_offset: 56, target_rva: 0x25F00, target_id: Some("?AllocMem@COtlsClient@@UEAAHHPEAPEAX@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::AllocMem(int, void * *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 8, byte_offset: 64, target_rva: 0x26300, target_id: Some("?FreeMem@COtlsClient@@UEAAHPEAX@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::FreeMem(void *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 9, byte_offset: 72, target_rva: 0x25E30, target_id: Some("?GetCache@COtlsClient@@UEAAHKPEAPEBXPEAJPEAK@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetCache(unsigned long, void const * *, long *, unsigned long *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 10, byte_offset: 80, target_rva: 0x273A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 11, byte_offset: 88, target_rva: 0x26020, target_id: Some("?GetVariationAxisValues@COtlsClient@@UEAAHPEAPEBFAEAG@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetVariationAxisValues(short const * *, unsigned short &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 12, byte_offset: 96, target_rva: 0x273A0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x58FC0, slot: 13, byte_offset: 104, target_rva: 0x28510, target_id: Some("?GetVariationStoreValue@COtlsClient@@UEAAHPEBXKKKAEAJ@Z"), target_name: Some("public: virtual int __cdecl COtlsClient::GetVariationStoreValue(void const *, unsigned long, unsigned long, unsigned long, long &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x59030, slot: 0, byte_offset: 0, target_rva: 0x29F30, target_id: Some("?PerformClusterShaping@UniversalEngineShaper@@MEAAJAEAVCShapingString@@AEAVotlList@@PEAUotlFeatureDesc@@AEAUotlRunProp@@@Z"), target_name: Some("protected: virtual long __cdecl UniversalEngineShaper::PerformClusterShaping(class CShapingString &, class otlList &, struct otlFeatureDesc *, struct otlRunProp &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x59048, slot: 0, byte_offset: 0, target_rva: 0x35C60, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59048, slot: 1, byte_offset: 8, target_rva: 0x3A0E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59048, slot: 2, byte_offset: 16, target_rva: 0x3A0E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59048, slot: 3, byte_offset: 24, target_rva: 0x31BC0, target_id: Some("?destroy@?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::destroy(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x59048, slot: 4, byte_offset: 32, target_rva: 0x35BF0, target_id: Some("??R?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z"), target_name: Some("public: virtual bool __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::operator()(void * &&, uint64_t &&, void * &&, uint64_t &&, unsigned int &&)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x59070, slot: 0, byte_offset: 0, target_rva: 0x35C60, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59070, slot: 1, byte_offset: 8, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59070, slot: 2, byte_offset: 16, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59070, slot: 3, byte_offset: 24, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59070, slot: 4, byte_offset: 32, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x59098, slot: 0, byte_offset: 0, target_rva: 0x3D790, target_id: Some("?PerformClusterShaping@MyanmarEngineShaper@@EEAAJAEAVCShapingString@@AEAVotlList@@PEAUotlFeatureDesc@@AEAUotlRunProp@@@Z"), target_name: Some("private: virtual long __cdecl MyanmarEngineShaper::PerformClusterShaping(class CShapingString &, class otlList &, struct otlFeatureDesc *, struct otlRunProp &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x590A0, slot: 0, byte_offset: 0, target_rva: 0x45FB0, target_id: Some("?evaluate@?$merged_data@U_tip_ShapingFsmTip@@U1@@details@tip2@@EEAAXXZ"), target_name: Some("private: virtual void __cdecl tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip>::evaluate(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x590A0, slot: 1, byte_offset: 8, target_rva: 0x48210, target_id: Some("?serialize@?$merged_data@U_tip_ShapingFsmTip@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z"), target_name: Some("private: virtual void __cdecl tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip>::serialize(class tson::output_archive &, enum tip2::details::serialize_options)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x590A0, slot: 2, byte_offset: 16, target_rva: 0x455A0, target_id: Some("?deserialize@?$merged_data@U_tip_ShapingFsmTip@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z"), target_name: Some("private: virtual void __cdecl tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip>::deserialize(class tson::input_archive &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x590A0, slot: 3, byte_offset: 24, target_rva: 0x31BC0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590A0, slot: 4, byte_offset: 32, target_rva: 0x31BC0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590C8, slot: 0, byte_offset: 0, target_rva: 0x43CA0, target_id: Some("?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ShapingFsmTip@@U1@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z"), target_name: Some("private: virtual bool __cdecl tip2::test_watcher<class tip2::details::merged_data<struct _tip_ShapingFsmTip, struct _tip_ShapingFsmTip> >::NotifyFailure(struct wil::FailureInfo const &)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x590D0, slot: 0, byte_offset: 0, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590D0, slot: 1, byte_offset: 8, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590D0, slot: 2, byte_offset: 16, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590D0, slot: 3, byte_offset: 24, target_rva: 0x34EF0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x590D0, slot: 4, byte_offset: 32, target_rva: 0x31BC0, target_id: Some("?enhance_reporting@test_data_interface@details@tip2@@UEAAXAEAUTipReportingInfo@@@Z"), target_name: Some("public: virtual void __cdecl tip2::details::test_data_interface::enhance_reporting(struct TipReportingInfo &)"), ambiguous: false, this_adjustment: None },
];

/// Reads a raw function pointer from an object's primary vftable.
///
/// # Safety
/// `object` must point to a live object with a readable primary vftable,
/// and `slot` must be valid for that concrete object. This function does
/// not invent or transmute a callable signature.
pub unsafe fn raw_object_slot(object: *const c_void, slot: usize) -> Option<*const ()> {
if object.is_null() { return None; }
let table = unsafe { *(object.cast::<*const *const ()>()) };
if table.is_null() { return None; }
let target = unsafe { *table.add(slot) };
(!target.is_null()).then_some(target)
}

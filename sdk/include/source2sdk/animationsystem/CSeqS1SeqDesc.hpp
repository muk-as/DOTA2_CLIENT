#pragma once
#include "source2sdk/animationsystem/CAnimActivity.hpp"
#include "source2sdk/animationsystem/CSeqAutoLayer.hpp"
#include "source2sdk/animationsystem/CSeqIKLock.hpp"
#include "source2sdk/animationsystem/CSeqMultiFetch.hpp"
#include "source2sdk/animationsystem/CSeqSeqDescFlag.hpp"
#include "source2sdk/animationsystem/CSeqTransition.hpp"
#include "source2sdk/modellib/CFootMotion.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x120
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqS1SeqDesc
    {
    public:
        CBufferString m_sName; // 0x0        
        animationsystem::CSeqSeqDescFlag m_flags; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x1b[0x5]; // 0x1b
        animationsystem::CSeqMultiFetch m_fetch; // 0x20        
        int32_t m_nLocalWeightlist; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0x4]; // 0x94
        // m_autoLayerArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CSeqAutoLayer> m_autoLayerArray;
        char m_autoLayerArray[0x18]; // 0x98        
        // m_IKLockArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CSeqIKLock> m_IKLockArray;
        char m_IKLockArray[0x18]; // 0xb0        
        animationsystem::CSeqTransition m_transition; // 0xc8        
        KeyValues3 m_SequenceKeys; // 0xd0        
        // metadata: MKV3TransferName "m_keyValueText"
        CBufferString m_LegacyKeyValueText; // 0xe0        
        // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimActivity> m_activityArray;
        char m_activityArray[0x18]; // 0xf0        
        // m_footMotion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CFootMotion> m_footMotion;
        char m_footMotion[0x18]; // 0x108        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqS1SeqDesc, m_sName) == 0x0);
    static_assert(offsetof(CSeqS1SeqDesc, m_flags) == 0x10);
    static_assert(offsetof(CSeqS1SeqDesc, m_fetch) == 0x20);
    static_assert(offsetof(CSeqS1SeqDesc, m_nLocalWeightlist) == 0x90);
    static_assert(offsetof(CSeqS1SeqDesc, m_autoLayerArray) == 0x98);
    static_assert(offsetof(CSeqS1SeqDesc, m_IKLockArray) == 0xb0);
    static_assert(offsetof(CSeqS1SeqDesc, m_transition) == 0xc8);
    static_assert(offsetof(CSeqS1SeqDesc, m_SequenceKeys) == 0xd0);
    static_assert(offsetof(CSeqS1SeqDesc, m_LegacyKeyValueText) == 0xe0);
    static_assert(offsetof(CSeqS1SeqDesc, m_activityArray) == 0xf0);
    static_assert(offsetof(CSeqS1SeqDesc, m_footMotion) == 0x108);
    
    static_assert(sizeof(CSeqS1SeqDesc) == 0x120);
};

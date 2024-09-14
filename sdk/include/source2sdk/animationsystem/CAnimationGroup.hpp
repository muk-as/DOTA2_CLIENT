#pragma once
#include "source2sdk/animationsystem/CAnimKeyData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCAnimData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCAnimationGroup.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCSequenceGroupData.hpp"
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
    // Size: 0x130
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimationGroup
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        uint32_t m_nFlags; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        CBufferString m_name; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x28[0x38]; // 0x28
        // metadata: MKV3TransferName "m_localHAnimArray"
        // m_localHAnimArray_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimData>> m_localHAnimArray_Handle;
        char m_localHAnimArray_Handle[0x18]; // 0x60        
        // metadata: MKV3TransferName "m_includedGroupArray"
        // m_includedGroupArray_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>> m_includedGroupArray_Handle;
        char m_includedGroupArray_Handle[0x18]; // 0x78        
        // metadata: MKV3TransferName "m_directHSeqGroup"
        // m_directHSeqGroup_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData> m_directHSeqGroup_Handle;
        char m_directHSeqGroup_Handle[0x8]; // 0x90        
        animationsystem::CAnimKeyData m_decodeKey; // 0x98        
        // m_szScripts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CBufferString> m_szScripts;
        char m_szScripts[0x18]; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x128[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimationGroup, m_nFlags) == 0x10);
    static_assert(offsetof(CAnimationGroup, m_name) == 0x18);
    static_assert(offsetof(CAnimationGroup, m_localHAnimArray_Handle) == 0x60);
    static_assert(offsetof(CAnimationGroup, m_includedGroupArray_Handle) == 0x78);
    static_assert(offsetof(CAnimationGroup, m_directHSeqGroup_Handle) == 0x90);
    static_assert(offsetof(CAnimationGroup, m_decodeKey) == 0x98);
    static_assert(offsetof(CAnimationGroup, m_szScripts) == 0x110);
    
    static_assert(sizeof(CAnimationGroup) == 0x130);
};

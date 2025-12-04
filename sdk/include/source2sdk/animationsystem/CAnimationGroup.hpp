#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimKeyData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCAnimData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCAnimationGroup.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCSequenceGroupData.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGroup
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CBufferString m_name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MKV3TransferName "m_localHAnimArray"
            // m_localHAnimArray_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCAnimData>> m_localHAnimArray_Handle;
            char m_localHAnimArray_Handle[0x_]; // 0x_            
            // metadata: MKV3TransferName "m_includedGroupArray"
            // m_includedGroupArray_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCAnimationGroup>> m_includedGroupArray_Handle;
            char m_includedGroupArray_Handle[0x_]; // 0x_            
            // metadata: MKV3TransferName "m_directHSeqGroup"
            // m_directHSeqGroup_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCSequenceGroupData> m_directHSeqGroup_Handle;
            char m_directHSeqGroup_Handle[0x_]; // 0x_            
            source2sdk::animationsystem::CAnimKeyData m_decodeKey; // 0x_            
            // m_szScripts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_szScripts;
            char m_szScripts[0x_]; // 0x_            
            // m_AdditionalExtRefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleVoid> m_AdditionalExtRefs;
            char m_AdditionalExtRefs[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_localHAnimArray_Handle) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_includedGroupArray_Handle) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_directHSeqGroup_Handle) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_decodeKey) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_szScripts) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimationGroup, m_AdditionalExtRefs) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimationGroup) == 0x_);
    };
};

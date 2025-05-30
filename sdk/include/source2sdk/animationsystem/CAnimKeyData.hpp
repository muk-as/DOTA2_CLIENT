#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimBone.hpp"
#include "source2sdk/animationsystem/CAnimDataChannelDesc.hpp"
#include "source2sdk/animationsystem/CAnimUser.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimKeyData
        {
        public:
            CBufferString m_name; // 0x0            
            // m_boneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimBone> m_boneArray;
            char m_boneArray[0x18]; // 0x10            
            // m_userArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimUser> m_userArray;
            char m_userArray[0x18]; // 0x28            
            // m_morphArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_morphArray;
            char m_morphArray[0x18]; // 0x40            
            std::int32_t m_nChannelElements; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            // m_dataChannelArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimDataChannelDesc> m_dataChannelArray;
            char m_dataChannelArray[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_name) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_boneArray) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_userArray) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_morphArray) == 0x40);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_nChannelElements) == 0x58);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_dataChannelArray) == 0x60);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimKeyData) == 0x78);
    };
};

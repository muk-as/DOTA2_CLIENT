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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimKeyData
        {
        public:
            CBufferString m_name; // 0x_            
            // m_boneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimBone> m_boneArray;
            char m_boneArray[0x_]; // 0x_            
            // m_userArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimUser> m_userArray;
            char m_userArray[0x_]; // 0x_            
            // m_morphArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_morphArray;
            char m_morphArray[0x_]; // 0x_            
            std::int32_t m_nChannelElements; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_dataChannelArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimDataChannelDesc> m_dataChannelArray;
            char m_dataChannelArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_boneArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_userArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_morphArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_nChannelElements) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimKeyData, m_dataChannelArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimKeyData) == 0x_);
    };
};

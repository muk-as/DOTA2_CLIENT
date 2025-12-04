#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/itemid_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CAnnouncerDescriptor
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strAnnouncerName; // 0x_            
            CUtlString m_strAnnouncerVoiceFile; // 0x_            
            source2sdk::client::itemid_t m_nAnnouncerItemId; // 0x_            
            bool m_bItemOwnedByLocalPlayer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_strAnnouncerName) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_strAnnouncerVoiceFile) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_nAnnouncerItemId) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_bItemOwnedByLocalPlayer) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CAnnouncerDescriptor) == 0x_);
    };
};

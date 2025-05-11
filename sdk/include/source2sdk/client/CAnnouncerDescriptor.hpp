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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CAnnouncerDescriptor
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_strAnnouncerName; // 0x8            
            CUtlString m_strAnnouncerVoiceFile; // 0x10            
            source2sdk::client::itemid_t m_nAnnouncerItemId; // 0x18            
            bool m_bItemOwnedByLocalPlayer; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_strAnnouncerName) == 0x8);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_strAnnouncerVoiceFile) == 0x10);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_nAnnouncerItemId) == 0x18);
        static_assert(offsetof(source2sdk::client::CAnnouncerDescriptor, m_bItemOwnedByLocalPlayer) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CAnnouncerDescriptor) == 0x28);
    };
};

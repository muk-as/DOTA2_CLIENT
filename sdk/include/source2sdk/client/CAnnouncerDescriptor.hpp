#pragma once
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_strAnnouncerName; // 0x8        
        CUtlString m_strAnnouncerVoiceFile; // 0x10        
        client::itemid_t m_nAnnouncerItemId; // 0x18        
        bool m_bItemOwnedByLocalPlayer; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnnouncerDescriptor, m_strAnnouncerName) == 0x8);
    static_assert(offsetof(CAnnouncerDescriptor, m_strAnnouncerVoiceFile) == 0x10);
    static_assert(offsetof(CAnnouncerDescriptor, m_nAnnouncerItemId) == 0x18);
    static_assert(offsetof(CAnnouncerDescriptor, m_bItemOwnedByLocalPlayer) == 0x20);
    
    static_assert(sizeof(CAnnouncerDescriptor) == 0x28);
};

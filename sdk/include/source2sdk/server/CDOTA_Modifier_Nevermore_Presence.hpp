#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nevermore_Presence : public client::CDOTA_Buff
    {
    public:
        int32_t presence_armor_reduction; // 0x16e8        
        int32_t bonus_armor_per_stack; // 0x16ec        
        bool m_bWasHidden; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Presence because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nevermore_Presence) == 0x16f8);
};

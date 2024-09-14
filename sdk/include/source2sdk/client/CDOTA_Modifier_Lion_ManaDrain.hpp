#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lion_ManaDrain : public client::CDOTA_Buff
    {
    public:
        int32_t mana_per_second; // 0x16e8        
        int32_t break_distance; // 0x16ec        
        float tick_interval; // 0x16f0        
        int32_t movespeed; // 0x16f4        
        int32_t damage_pct; // 0x16f8        
        int32_t ally_pct; // 0x16fc        
        int32_t movespeed_bonus_when_empty_pct; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lion_ManaDrain) == 0x1710);
};

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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_IcarusDiveBurn : public client::CDOTA_Buff
    {
    public:
        float burn_tick_interval; // 0x16e8        
        float blind_duration; // 0x16ec        
        int32_t blind_per_second; // 0x16f0        
        int32_t damage_per_second; // 0x16f4        
        int32_t slow_movement_speed_pct; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusDiveBurn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_IcarusDiveBurn) == 0x1700);
};

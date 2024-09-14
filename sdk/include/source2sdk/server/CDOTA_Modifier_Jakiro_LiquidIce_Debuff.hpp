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
    class CDOTA_Modifier_Jakiro_LiquidIce_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float pct_health_damage; // 0x16ec        
        int32_t movement_slow; // 0x16f0        
        int32_t slow_attack_speed_pct; // 0x16f4        
        float tick_rate; // 0x16f8        
        int32_t bonus_instance_damage_from_other_abilities; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_LiquidIce_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_LiquidIce_Debuff) == 0x1700);
};

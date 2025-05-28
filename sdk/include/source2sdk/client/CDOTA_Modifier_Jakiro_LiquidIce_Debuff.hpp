#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_LiquidIce_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1888            
            float pct_health_damage; // 0x188c            
            std::int32_t movement_slow; // 0x1890            
            std::int32_t slow_attack_speed_pct; // 0x1894            
            float tick_rate; // 0x1898            
            std::int32_t bonus_instance_damage_from_other_abilities; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_LiquidIce_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Jakiro_LiquidIce_Debuff) == 0x18a0);
    };
};

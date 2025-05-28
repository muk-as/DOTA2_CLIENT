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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Armlet_UnholyStrength : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t unholy_bonus_damage; // 0x1888            
            std::int32_t unholy_bonus_attack_speed; // 0x188c            
            std::int32_t unholy_bonus_strength; // 0x1890            
            std::int32_t unholy_bonus_armor; // 0x1894            
            std::int32_t unholy_health_drain_per_second; // 0x1898            
            std::int32_t str_tick_count; // 0x189c            
            std::int32_t unholy_bonus_slow_resistance; // 0x18a0            
            float tick_interval; // 0x18a4            
            float m_flDamageRemainder; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Armlet_UnholyStrength because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Armlet_UnholyStrength) == 0x18b0);
    };
};

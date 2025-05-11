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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Armlet_UnholyStrength : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t unholy_bonus_damage; // 0x17f8            
            std::int32_t unholy_bonus_attack_speed; // 0x17fc            
            std::int32_t unholy_bonus_strength; // 0x1800            
            std::int32_t unholy_bonus_armor; // 0x1804            
            std::int32_t unholy_health_drain_per_second; // 0x1808            
            std::int32_t str_tick_count; // 0x180c            
            std::int32_t unholy_bonus_slow_resistance; // 0x1810            
            float tick_interval; // 0x1814            
            float m_flDamageRemainder; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Armlet_UnholyStrength because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Armlet_UnholyStrength) == 0x1820);
    };
};

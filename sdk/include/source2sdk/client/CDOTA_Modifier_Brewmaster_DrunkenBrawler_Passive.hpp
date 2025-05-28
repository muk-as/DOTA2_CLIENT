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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t dodge_chance; // 0x1888            
            std::int32_t crit_chance; // 0x188c            
            std::int32_t crit_multiplier; // 0x1890            
            std::int32_t attack_speed; // 0x1894            
            float active_multiplier; // 0x1898            
            std::int32_t stun_chance; // 0x189c            
            float bash_cooldown; // 0x18a0            
            float stun_duration; // 0x18a4            
            float slow_duration; // 0x18a8            
            std::int32_t bonus_move_speed; // 0x18ac            
            std::int32_t bonus_status_resist; // 0x18b0            
            std::int32_t armor; // 0x18b4            
            std::int32_t magic_resist; // 0x18b8            
            float m_flLastBash; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x18c0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t dodge_chance; // 0x1878            
            std::int32_t crit_chance; // 0x187c            
            std::int32_t crit_multiplier; // 0x1880            
            std::int32_t attack_speed; // 0x1884            
            float active_multiplier; // 0x1888            
            std::int32_t stun_chance; // 0x188c            
            float bash_cooldown; // 0x1890            
            float stun_duration; // 0x1894            
            float slow_duration; // 0x1898            
            std::int32_t bonus_move_speed; // 0x189c            
            std::int32_t bonus_status_resist; // 0x18a0            
            std::int32_t armor; // 0x18a4            
            std::int32_t magic_resist; // 0x18a8            
            float m_flLastBash; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x18b0);
    };
};

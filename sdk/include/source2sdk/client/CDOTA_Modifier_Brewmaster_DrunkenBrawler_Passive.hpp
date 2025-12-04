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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t dodge_chance; // 0x_            
            std::int32_t crit_chance; // 0x_            
            std::int32_t crit_multiplier; // 0x_            
            std::int32_t attack_speed; // 0x_            
            float active_multiplier; // 0x_            
            std::int32_t stun_chance; // 0x_            
            float bash_cooldown; // 0x_            
            float stun_duration; // 0x_            
            float slow_duration; // 0x_            
            std::int32_t bonus_move_speed; // 0x_            
            std::int32_t bonus_status_resist; // 0x_            
            std::int32_t armor; // 0x_            
            std::int32_t magic_resist; // 0x_            
            float m_flLastBash; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x_);
    };
};

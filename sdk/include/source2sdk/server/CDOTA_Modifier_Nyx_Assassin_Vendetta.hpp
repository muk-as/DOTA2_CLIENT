#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nyx_Assassin_Vendetta : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t bonus_damage; // 0x1898            
            std::int32_t movement_speed; // 0x189c            
            std::int32_t mana_removal_pct; // 0x18a0            
            std::int32_t free_pathing_duration; // 0x18a4            
            std::int32_t attack_animation_bonus; // 0x18a8            
            std::int32_t attack_range_bonus; // 0x18ac            
            std::int32_t free_pathing_movement_speed_bonus; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nyx_Assassin_Vendetta because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nyx_Assassin_Vendetta) == 0x18b8);
    };
};

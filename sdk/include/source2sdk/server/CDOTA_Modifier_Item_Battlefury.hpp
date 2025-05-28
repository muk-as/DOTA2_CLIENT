#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_Battlefury : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1888            
            float bonus_health_regen; // 0x188c            
            float bonus_mana_regen; // 0x1890            
            std::int32_t cleave_damage_percent; // 0x1894            
            std::int32_t cleave_damage_percent_creep; // 0x1898            
            float cleave_starting_width; // 0x189c            
            float cleave_ending_width; // 0x18a0            
            float cleave_distance; // 0x18a4            
            std::int32_t upgraded_cleave_bonus; // 0x18a8            
            std::int32_t upgraded_damage_bonus; // 0x18ac            
            std::int32_t quelling_bonus; // 0x18b0            
            std::int32_t quelling_bonus_ranged; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Battlefury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Battlefury) == 0x18b8);
    };
};

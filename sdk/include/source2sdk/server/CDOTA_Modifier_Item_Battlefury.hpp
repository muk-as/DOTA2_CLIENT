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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Battlefury : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x17f8            
            float bonus_health_regen; // 0x17fc            
            float bonus_mana_regen; // 0x1800            
            std::int32_t cleave_damage_percent; // 0x1804            
            std::int32_t cleave_damage_percent_creep; // 0x1808            
            float cleave_starting_width; // 0x180c            
            float cleave_ending_width; // 0x1810            
            float cleave_distance; // 0x1814            
            std::int32_t upgraded_cleave_bonus; // 0x1818            
            std::int32_t upgraded_damage_bonus; // 0x181c            
            std::int32_t quelling_bonus; // 0x1820            
            std::int32_t quelling_bonus_ranged; // 0x1824            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Battlefury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Battlefury) == 0x1828);
    };
};

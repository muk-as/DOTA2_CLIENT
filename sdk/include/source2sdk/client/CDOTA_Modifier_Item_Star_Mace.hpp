#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Star_Mace : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t movement_speed_pct; // 0x1878            
            float bonus_mana_regen; // 0x187c            
            std::int32_t cleave_damage_percent; // 0x1880            
            std::int32_t cleave_starting_width; // 0x1884            
            std::int32_t cleave_ending_width; // 0x1888            
            std::int32_t cleave_distance; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Star_Mace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Star_Mace) == 0x1890);
    };
};

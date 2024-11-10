#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Star_Mace : public client::CDOTA_Buff_Item
    {
    public:
        int32_t movement_speed_pct; // 0x1708        
        float bonus_mana_regen; // 0x170c        
        int32_t cleave_damage_percent; // 0x1710        
        int32_t cleave_starting_width; // 0x1714        
        int32_t cleave_ending_width; // 0x1718        
        int32_t cleave_distance; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Star_Mace because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Star_Mace) == 0x1720);
};

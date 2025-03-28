#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Orb_of_Pestilence : public server::CDOTA_Buff_Item
    {
    public:
        int32_t poison_movement_speed_melee; // 0x1708        
        int32_t poison_movement_speed_range; // 0x170c        
        float poison_duration; // 0x1710        
        float poison_damage; // 0x1714        
        int32_t armor; // 0x1718        
        float hp_regen; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Orb_of_Pestilence because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Orb_of_Pestilence) == 0x1720);
};

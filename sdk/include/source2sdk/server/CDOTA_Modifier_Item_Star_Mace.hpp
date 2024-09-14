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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Star_Mace : public server::CDOTA_Buff_Item
    {
    public:
        int32_t movement_speed_pct; // 0x16e8        
        float bonus_mana_regen; // 0x16ec        
        int32_t cleave_damage_percent; // 0x16f0        
        int32_t cleave_starting_width; // 0x16f4        
        int32_t cleave_ending_width; // 0x16f8        
        int32_t cleave_distance; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Star_Mace because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Star_Mace) == 0x1700);
};

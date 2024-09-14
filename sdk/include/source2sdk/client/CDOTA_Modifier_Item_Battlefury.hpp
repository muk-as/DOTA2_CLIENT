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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Battlefury : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        float bonus_health_regen; // 0x16ec        
        float bonus_mana_regen; // 0x16f0        
        int32_t cleave_damage_percent; // 0x16f4        
        int32_t cleave_damage_percent_creep; // 0x16f8        
        int32_t cleave_starting_width; // 0x16fc        
        int32_t cleave_ending_width; // 0x1700        
        int32_t cleave_distance; // 0x1704        
        int32_t upgraded_cleave_bonus; // 0x1708        
        int32_t upgraded_damage_bonus; // 0x170c        
        int32_t quelling_bonus; // 0x1710        
        int32_t quelling_bonus_ranged; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Battlefury because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Battlefury) == 0x1718);
};

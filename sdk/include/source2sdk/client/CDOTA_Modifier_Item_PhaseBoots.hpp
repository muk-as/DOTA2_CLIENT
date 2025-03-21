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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_PhaseBoots : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x1708        
        int32_t bonus_damage_melee; // 0x170c        
        int32_t bonus_damage_range; // 0x1710        
        int32_t damage_block_melee; // 0x1714        
        int32_t damage_block_ranged; // 0x1718        
        int32_t block_chance; // 0x171c        
        int32_t bonus_attack_speed; // 0x1720        
        int32_t bonus_armor; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_PhaseBoots) == 0x1728);
};

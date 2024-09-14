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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_PhaseBoots : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x16e8        
        int32_t bonus_damage_melee; // 0x16ec        
        int32_t bonus_damage_range; // 0x16f0        
        int32_t damage_block_melee; // 0x16f4        
        int32_t damage_block_ranged; // 0x16f8        
        int32_t block_chance; // 0x16fc        
        int32_t bonus_attack_speed; // 0x1700        
        int32_t bonus_armor; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_PhaseBoots) == 0x1708);
};

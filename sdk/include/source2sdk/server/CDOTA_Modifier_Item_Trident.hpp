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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Trident : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x16e8        
        int32_t bonus_attack_speed; // 0x16ec        
        int32_t movement_speed_percent_bonus; // 0x16f0        
        int32_t bonus_strength; // 0x16f4        
        int32_t hp_regen_amp; // 0x16f8        
        int32_t status_resistance; // 0x16fc        
        int32_t bonus_intellect; // 0x1700        
        int32_t spell_amp; // 0x1704        
        int32_t mana_regen_multiplier; // 0x1708        
        int32_t magic_damage_attack; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Trident because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Trident) == 0x1710);
};

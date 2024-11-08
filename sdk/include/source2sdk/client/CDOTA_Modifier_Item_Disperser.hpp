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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Disperser : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x1708        
        int32_t bonus_intellect; // 0x170c        
        int32_t bonus_attack_speed; // 0x1710        
        int32_t bonus_damage; // 0x1714        
        float bonus_mana_regen; // 0x1718        
        float damage_per_burn; // 0x171c        
        int32_t feedback_mana_burn; // 0x1720        
        int32_t feedback_mana_burn_illusion_melee; // 0x1724        
        int32_t feedback_mana_burn_illusion_ranged; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Disperser because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Disperser) == 0x1730);
};

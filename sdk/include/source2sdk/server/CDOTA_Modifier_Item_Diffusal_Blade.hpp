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
    class CDOTA_Modifier_Item_Diffusal_Blade : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x1708        
        int32_t bonus_intellect; // 0x170c        
        float damage_per_burn; // 0x1710        
        int32_t feedback_mana_burn; // 0x1714        
        int32_t feedback_mana_burn_illusion_melee; // 0x1718        
        int32_t feedback_mana_burn_illusion_ranged; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Diffusal_Blade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Diffusal_Blade) == 0x1720);
};

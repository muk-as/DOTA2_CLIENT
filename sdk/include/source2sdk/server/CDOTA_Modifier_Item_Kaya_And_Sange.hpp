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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Kaya_And_Sange : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x1708        
        int32_t hp_regen_amp; // 0x170c        
        int32_t bonus_intellect; // 0x1710        
        int32_t spell_amp; // 0x1714        
        int32_t mana_regen_multiplier; // 0x1718        
        int32_t slow_resistance; // 0x171c        
        int32_t spell_lifesteal_amp; // 0x1720        
        int32_t manacost_reduction; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Kaya_And_Sange because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Kaya_And_Sange) == 0x1728);
};

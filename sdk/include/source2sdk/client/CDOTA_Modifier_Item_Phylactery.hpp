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
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Phylactery : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_health; // 0x1708        
        int32_t bonus_mana; // 0x170c        
        float bonus_mana_regen; // 0x1710        
        int32_t bonus_spell_damage; // 0x1714        
        float slow_duration; // 0x1718        
        int32_t bonus_all_stats; // 0x171c        
        // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_DOTABaseAbility*> vecActivatedAbilities;
        char vecActivatedAbilities[0x18]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Phylactery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Phylactery) == 0x1738);
};

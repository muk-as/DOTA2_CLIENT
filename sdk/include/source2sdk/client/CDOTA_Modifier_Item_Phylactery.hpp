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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Phylactery : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_health; // 0x16e8        
        int32_t bonus_mana; // 0x16ec        
        float bonus_mana_regen; // 0x16f0        
        int32_t bonus_spell_damage; // 0x16f4        
        float slow_duration; // 0x16f8        
        int32_t bonus_all_stats; // 0x16fc        
        // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_DOTABaseAbility*> vecActivatedAbilities;
        char vecActivatedAbilities[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Phylactery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Phylactery) == 0x1718);
};

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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Angels_Demise : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_health; // 0x16e8        
        int32_t bonus_mana; // 0x16ec        
        float bonus_mana_regen; // 0x16f0        
        int32_t bonus_spell_damage; // 0x16f4        
        float slow_duration; // 0x16f8        
        int32_t bonus_all_stats; // 0x16fc        
        int32_t bonus_damage; // 0x1700        
        int32_t crit_chance; // 0x1704        
        int32_t crit_multiplier; // 0x1708        
        int32_t spell_crit_multiplier; // 0x170c        
        int32_t spell_crit_flat; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTABaseAbility*> vecActivatedAbilities;
        char vecActivatedAbilities[0x18]; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Angels_Demise because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Angels_Demise) == 0x1730);
};

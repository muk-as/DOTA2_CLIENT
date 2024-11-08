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
    class CDOTA_Modifier_Item_Eternal_Shroud : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_spell_resist; // 0x1708        
        int32_t bonus_strength; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        float bonus_health; // 0x1714        
        int32_t mana_restore_pct; // 0x1718        
        float stack_threshold; // 0x171c        
        float stack_resist; // 0x1720        
        float stack_duration; // 0x1724        
        int32_t max_stacks; // 0x1728        
        float m_flCumulativeDamage; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Eternal_Shroud because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Eternal_Shroud) == 0x1730);
};

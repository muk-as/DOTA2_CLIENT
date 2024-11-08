#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spirit_Bear_Necessities : public client::CDOTA_Buff
    {
    public:
        float bonus_int; // 0x1708        
        float bonus_str; // 0x170c        
        float bonus_agi; // 0x1710        
        int32_t bonus_attack_speed; // 0x1714        
        int32_t bonus_attack_damage; // 0x1718        
        float bonus_health_regen; // 0x171c        
        float bonus_health_regen_percent; // 0x1720        
        float bonus_mana_regen; // 0x1724        
        int32_t bonus_health; // 0x1728        
        int32_t bonus_mana; // 0x172c        
        float bonus_evasion; // 0x1730        
        int32_t item_slots; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spirit_Bear_Necessities) == 0x1738);
};

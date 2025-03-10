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
    // Size: 0x1768
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Grandmasters_Glaive : public server::CDOTA_Buff_Item
    {
    public:
        int32_t sange_bonus_strength; // 0x1708        
        int32_t sange_status_resistance; // 0x170c        
        int32_t sange_hp_regen_amp; // 0x1710        
        int32_t kaya_bonus_intellect; // 0x1714        
        int32_t kaya_spell_amp; // 0x1718        
        int32_t kaya_mana_regen_multiplier; // 0x171c        
        int32_t kaya_magic_damage_attack; // 0x1720        
        int32_t yasha_bonus_agility; // 0x1724        
        int32_t yasha_bonus_attack_speed; // 0x1728        
        int32_t yasha_movement_speed_percent_bonus; // 0x172c        
        int32_t m_iCurrentStance; // 0x1730        
        int32_t bonus_strength; // 0x1734        
        int32_t bash_chance_melee; // 0x1738        
        int32_t bash_chance_ranged; // 0x173c        
        float bash_duration; // 0x1740        
        float bash_cooldown; // 0x1744        
        int32_t bonus_chance_damage; // 0x1748        
        int32_t bonus_damage; // 0x174c        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Grandmasters_Glaive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Grandmasters_Glaive) == 0x1768);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Grandmasters_Glaive : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t sange_bonus_strength; // 0x17f8            
            std::int32_t sange_status_resistance; // 0x17fc            
            std::int32_t sange_hp_regen_amp; // 0x1800            
            std::int32_t kaya_bonus_intellect; // 0x1804            
            std::int32_t kaya_spell_amp; // 0x1808            
            std::int32_t kaya_mana_regen_multiplier; // 0x180c            
            std::int32_t kaya_magic_damage_attack; // 0x1810            
            std::int32_t yasha_bonus_agility; // 0x1814            
            std::int32_t yasha_bonus_attack_speed; // 0x1818            
            std::int32_t yasha_movement_speed_percent_bonus; // 0x181c            
            std::int32_t m_iCurrentStance; // 0x1820            
            std::int32_t bonus_strength; // 0x1824            
            std::int32_t bash_chance_melee; // 0x1828            
            std::int32_t bash_chance_ranged; // 0x182c            
            float bash_duration; // 0x1830            
            float bash_cooldown; // 0x1834            
            std::int32_t bonus_chance_damage; // 0x1838            
            std::int32_t bonus_damage; // 0x183c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Grandmasters_Glaive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Grandmasters_Glaive) == 0x1858);
    };
};

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Devastator : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_armor; // 0x17f8            
            std::int32_t projectile_speed; // 0x17fc            
            std::int32_t bonus_intellect; // 0x1800            
            std::int32_t bonus_attack_speed; // 0x1804            
            float bonus_mana_regen; // 0x1808            
            std::int32_t mana_cost; // 0x180c            
            std::int32_t slow_duration; // 0x1810            
            std::int32_t spell_amp_duration; // 0x1814            
            std::int32_t damage_penalty; // 0x1818            
            std::int32_t passive_cooldown; // 0x181c            
            // m_InFlightWitchBladeAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightWitchBladeAttackRecords;
            char m_InFlightWitchBladeAttackRecords[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Devastator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Devastator) == 0x1838);
    };
};

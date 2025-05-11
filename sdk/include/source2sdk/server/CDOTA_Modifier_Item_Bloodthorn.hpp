#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Bloodthorn : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x17f8            
            std::int32_t bonus_intellect; // 0x1810            
            float bonus_mana_regen; // 0x1814            
            std::int32_t bonus_damage; // 0x1818            
            std::int32_t bonus_attack_speed; // 0x181c            
            std::int32_t spell_amp; // 0x1820            
            std::int32_t mana_regen_multiplier; // 0x1824            
            std::int32_t bonus_magic_resist; // 0x1828            
            float duration; // 0x182c            
            std::int32_t passive_proc_damage; // 0x1830            
            std::int32_t proc_chance; // 0x1834            
            float bonus_health_regen; // 0x1838            
            uint8_t _pad183c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bloodthorn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Bloodthorn) == 0x1840);
    };
};

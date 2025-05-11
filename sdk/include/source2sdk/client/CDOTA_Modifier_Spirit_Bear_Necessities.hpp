#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spirit_Bear_Necessities : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_int; // 0x17f8            
            float bonus_str; // 0x17fc            
            float bonus_agi; // 0x1800            
            std::int32_t bonus_attack_speed; // 0x1804            
            std::int32_t bonus_attack_damage; // 0x1808            
            float bonus_health_regen; // 0x180c            
            float bonus_health_regen_percent; // 0x1810            
            float bonus_mana_regen; // 0x1814            
            std::int32_t bonus_health; // 0x1818            
            std::int32_t bonus_mana; // 0x181c            
            float bonus_evasion; // 0x1820            
            std::int32_t item_slots; // 0x1824            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Spirit_Bear_Necessities) == 0x1828);
    };
};

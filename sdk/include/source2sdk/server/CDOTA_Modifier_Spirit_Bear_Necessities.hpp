#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spirit_Bear_Necessities : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_int; // 0x_            
            float bonus_str; // 0x_            
            float bonus_agi; // 0x_            
            std::int32_t bonus_attack_speed; // 0x_            
            std::int32_t bonus_attack_damage; // 0x_            
            float bonus_health_regen; // 0x_            
            float bonus_health_regen_percent; // 0x_            
            float bonus_mana_regen; // 0x_            
            std::int32_t bonus_health; // 0x_            
            std::int32_t bonus_mana; // 0x_            
            float bonus_evasion; // 0x_            
            std::int32_t item_slots; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spirit_Bear_Necessities) == 0x_);
    };
};

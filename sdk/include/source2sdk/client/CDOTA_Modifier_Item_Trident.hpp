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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Trident : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_agility; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t movement_speed_percent_bonus; // 0x1880            
            std::int32_t bonus_strength; // 0x1884            
            std::int32_t hp_regen_amp; // 0x1888            
            std::int32_t status_resistance; // 0x188c            
            std::int32_t bonus_intellect; // 0x1890            
            std::int32_t spell_amp; // 0x1894            
            std::int32_t mana_regen_multiplier; // 0x1898            
            std::int32_t magic_damage_attack; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Trident because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Trident) == 0x18a0);
    };
};

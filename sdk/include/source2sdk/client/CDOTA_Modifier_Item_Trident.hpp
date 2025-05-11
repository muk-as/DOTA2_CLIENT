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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Trident : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_agility; // 0x17f8            
            std::int32_t bonus_attack_speed; // 0x17fc            
            std::int32_t movement_speed_percent_bonus; // 0x1800            
            std::int32_t bonus_strength; // 0x1804            
            std::int32_t hp_regen_amp; // 0x1808            
            std::int32_t status_resistance; // 0x180c            
            std::int32_t bonus_intellect; // 0x1810            
            std::int32_t spell_amp; // 0x1814            
            std::int32_t mana_regen_multiplier; // 0x1818            
            std::int32_t magic_damage_attack; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Trident because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Trident) == 0x1820);
    };
};

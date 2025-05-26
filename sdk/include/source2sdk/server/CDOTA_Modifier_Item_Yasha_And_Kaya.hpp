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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Yasha_And_Kaya : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_agility; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t movement_speed_percent_bonus; // 0x1880            
            std::int32_t bonus_intellect; // 0x1884            
            std::int32_t spell_amp; // 0x1888            
            std::int32_t mana_regen_multiplier; // 0x188c            
            std::int32_t healing_amp; // 0x1890            
            std::int32_t cast_speed_pct; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Yasha_And_Kaya because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Yasha_And_Kaya) == 0x1898);
    };
};

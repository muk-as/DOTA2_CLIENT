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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Disperser : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_agility; // 0x1878            
            std::int32_t bonus_intellect; // 0x187c            
            std::int32_t bonus_attack_speed; // 0x1880            
            std::int32_t bonus_damage; // 0x1884            
            float bonus_mana_regen; // 0x1888            
            float damage_per_burn; // 0x188c            
            std::int32_t feedback_mana_burn; // 0x1890            
            std::int32_t feedback_mana_burn_illusion_melee; // 0x1894            
            std::int32_t feedback_mana_burn_illusion_ranged; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Disperser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Disperser) == 0x18a0);
    };
};

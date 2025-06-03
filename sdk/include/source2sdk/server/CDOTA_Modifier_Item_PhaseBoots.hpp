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
        class CDOTA_Modifier_Item_PhaseBoots : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1878            
            std::int32_t bonus_damage_melee; // 0x187c            
            std::int32_t bonus_damage_range; // 0x1880            
            std::int32_t damage_block_melee; // 0x1884            
            std::int32_t damage_block_ranged; // 0x1888            
            std::int32_t block_chance; // 0x188c            
            std::int32_t bonus_attack_speed; // 0x1890            
            std::int32_t bonus_armor; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_PhaseBoots) == 0x1898);
    };
};

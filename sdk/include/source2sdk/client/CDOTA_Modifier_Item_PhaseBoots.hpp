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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_PhaseBoots : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1888            
            std::int32_t bonus_damage_melee; // 0x188c            
            std::int32_t bonus_damage_range; // 0x1890            
            std::int32_t damage_block_melee; // 0x1894            
            std::int32_t damage_block_ranged; // 0x1898            
            std::int32_t block_chance; // 0x189c            
            std::int32_t bonus_attack_speed; // 0x18a0            
            std::int32_t bonus_armor; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_PhaseBoots) == 0x18a8);
    };
};

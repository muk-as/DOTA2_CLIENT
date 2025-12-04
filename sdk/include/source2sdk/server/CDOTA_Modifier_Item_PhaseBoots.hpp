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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_PhaseBoots : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x_            
            std::int32_t bonus_damage_melee; // 0x_            
            std::int32_t bonus_damage_range; // 0x_            
            std::int32_t damage_block_melee; // 0x_            
            std::int32_t damage_block_ranged; // 0x_            
            std::int32_t block_chance; // 0x_            
            std::int32_t bonus_attack_speed; // 0x_            
            std::int32_t bonus_armor; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_PhaseBoots) == 0x_);
    };
};

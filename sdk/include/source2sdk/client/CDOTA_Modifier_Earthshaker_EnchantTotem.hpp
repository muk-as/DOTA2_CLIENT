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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_EnchantTotem : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_range; // 0x1888            
            std::int32_t totem_damage_percentage; // 0x188c            
            std::int32_t scepter_cleave_pct; // 0x1890            
            float scepter_cleave_starting_width; // 0x1894            
            float scepter_cleave_ending_width; // 0x1898            
            float scepter_cleave_distance; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Earthshaker_EnchantTotem) == 0x18a0);
    };
};

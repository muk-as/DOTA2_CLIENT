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
        class CDOTA_Modifier_Magnataur_Empower : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage_pct; // 0x_            
            float cleave_damage_pct; // 0x_            
            float cleave_starting_width; // 0x_            
            float cleave_ending_width; // 0x_            
            float cleave_distance; // 0x_            
            float self_multiplier; // 0x_            
            float secondary_cleave_distance; // 0x_            
            float self_multiplier_bonus_stack_duration; // 0x_            
            std::int32_t self_multiplier_bonus_max_stacks; // 0x_            
            std::int32_t self_multiplier_bonus_per_stack; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Empower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Empower) == 0x_);
    };
};

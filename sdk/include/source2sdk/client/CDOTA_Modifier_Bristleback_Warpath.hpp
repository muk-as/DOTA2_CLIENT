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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Warpath : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_per_stack; // 0x1888            
            float move_speed_per_stack; // 0x188c            
            std::int32_t max_stacks; // 0x1890            
            float stack_duration; // 0x1894            
            std::int32_t aspd_per_stack; // 0x1898            
            float active_bonus_attack_percent; // 0x189c            
            float active_bonus_movement_percent; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Warpath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bristleback_Warpath) == 0x18a8);
    };
};

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
        class CDOTA_Modifier_Lion_FingerPunch : public source2sdk::client::CDOTA_Buff
        {
        public:
            float punch_attack_range; // 0x1888            
            float punch_bonus_damage_base; // 0x188c            
            float punch_bonus_damage_per_stack; // 0x1890            
            float cleave_starting_width; // 0x1894            
            float cleave_ending_width; // 0x1898            
            float cleave_distance; // 0x189c            
            float cleave_damage; // 0x18a0            
            std::int32_t m_iOriginalAttackCapabilities; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_FingerPunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lion_FingerPunch) == 0x18a8);
    };
};

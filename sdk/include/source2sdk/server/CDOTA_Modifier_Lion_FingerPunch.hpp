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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_FingerPunch : public source2sdk::client::CDOTA_Buff
        {
        public:
            float punch_attack_range; // 0x17f8            
            float punch_bonus_damage_base; // 0x17fc            
            float punch_bonus_damage_per_stack; // 0x1800            
            float cleave_starting_width; // 0x1804            
            float cleave_ending_width; // 0x1808            
            float cleave_distance; // 0x180c            
            float cleave_damage; // 0x1810            
            std::int32_t m_iOriginalAttackCapabilities; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_FingerPunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lion_FingerPunch) == 0x1818);
    };
};

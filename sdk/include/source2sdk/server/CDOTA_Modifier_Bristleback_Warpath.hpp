#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Warpath : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_per_stack; // 0x17f8            
            float move_speed_per_stack; // 0x17fc            
            std::int32_t max_stacks; // 0x1800            
            float stack_duration; // 0x1804            
            std::int32_t aspd_per_stack; // 0x1808            
            float active_bonus_attack_percent; // 0x180c            
            float active_bonus_movement_percent; // 0x1810            
            source2sdk::entity2::GameTime_t m_flMaxStackStartTime; // 0x1814            
            bool m_bSuppressKillEater; // 0x1818            
            uint8_t _pad1819[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Warpath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_Warpath) == 0x1820);
    };
};

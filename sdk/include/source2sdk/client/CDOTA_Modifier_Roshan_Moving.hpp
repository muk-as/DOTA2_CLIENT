#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Roshan_Moving : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t move_pits_bonus_speed_per_interrupt; // 0x17f8            
            std::int32_t move_pits_max_bonus_speed; // 0x17fc            
            std::int32_t move_pits_slow_resistance; // 0x1800            
            bool m_bReachedMidpoint; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            std::int32_t m_nInterruptCount; // 0x1808            
            float m_flGrabAttemptTime; // 0x180c            
            source2sdk::entity2::GameTime_t m_flLastInterrupted; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Roshan_Moving because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Roshan_Moving) == 0x1818);
    };
};

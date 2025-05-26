#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_IntervalTimer_CursorState_t
        {
        public:
            source2sdk::entity2::GameTime_t m_StartTime; // 0x0            
            source2sdk::entity2::GameTime_t m_EndTime; // 0x4            
            float m_flWaitInterval; // 0x8            
            float m_flWaitIntervalHigh; // 0xc            
            bool m_bCompleteOnNextWake; // 0x10            
            uint8_t _pad0011[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_StartTime) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_EndTime) == 0x4);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_flWaitInterval) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_flWaitIntervalHigh) == 0xc);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_bCompleteOnNextWake) == 0x10);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t) == 0x14);
    };
};

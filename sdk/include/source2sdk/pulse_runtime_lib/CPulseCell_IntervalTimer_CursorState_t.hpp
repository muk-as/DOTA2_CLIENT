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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_IntervalTimer_CursorState_t
        {
        public:
            source2sdk::entity2::GameTime_t m_StartTime; // 0x_            
            source2sdk::entity2::GameTime_t m_EndTime; // 0x_            
            float m_flWaitInterval; // 0x_            
            float m_flWaitIntervalHigh; // 0x_            
            bool m_bCompleteOnNextWake; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_StartTime) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_EndTime) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_flWaitInterval) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_flWaitIntervalHigh) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t, m_bCompleteOnNextWake) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer_CursorState_t) == 0x_);
    };
};

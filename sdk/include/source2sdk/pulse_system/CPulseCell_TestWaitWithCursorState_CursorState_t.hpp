#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_TestWaitWithCursorState_CursorState_t
        {
        public:
            float flWaitValue; // 0x_            
            bool bFailOnCancel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, flWaitValue) == 0x_);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, bFailOnCancel) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t) == 0x_);
    };
};

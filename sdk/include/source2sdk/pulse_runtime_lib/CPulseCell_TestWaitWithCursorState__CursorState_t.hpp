#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CPulseCell_TestWaitWithCursorState__CursorState_t
    {
    public:
        float flWaitValue; // 0x0        
        bool bFailOnCancel; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseCell_TestWaitWithCursorState__CursorState_t, flWaitValue) == 0x0);
    static_assert(offsetof(CPulseCell_TestWaitWithCursorState__CursorState_t, bFailOnCancel) == 0x4);
    
    static_assert(sizeof(CPulseCell_TestWaitWithCursorState__CursorState_t) == 0x8);
};

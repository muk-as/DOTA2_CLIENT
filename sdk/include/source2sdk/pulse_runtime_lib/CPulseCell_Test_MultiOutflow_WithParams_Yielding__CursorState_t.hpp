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
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t
    {
    public:
        int32_t nTestStep; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t, nTestStep) == 0x0);
    
    static_assert(sizeof(CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t) == 0x4);
};

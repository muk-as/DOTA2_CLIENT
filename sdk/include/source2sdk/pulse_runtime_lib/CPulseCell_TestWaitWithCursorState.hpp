#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "TestDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    #pragma pack(push, 1)
    class CPulseCell_TestWaitWithCursorState : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        // metadata: MPulseCellOutflow_IsDefault
        pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x48        
        pulse_runtime_lib::CPulse_ResumePoint m_WakeCancel; // 0x78        
        pulse_runtime_lib::CPulse_ResumePoint m_WakeFail; // 0xa8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_TestWaitWithCursorState because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_TestWaitWithCursorState) == 0xd8);
};

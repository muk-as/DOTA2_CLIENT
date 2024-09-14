#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Continue.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Resume.hpp"
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
    // Size: 0x138
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "TestDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo ""
    #pragma pack(push, 1)
    class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        // metadata: MPulseCellOutflow_IsDefault
        pulse_runtime_lib::SignatureOutflow_Continue m_Out1; // 0x48        
        pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild1; // 0x78        
        pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild2; // 0xa8        
        pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume1; // 0xd8        
        pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume2; // 0x108        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Test_MultiOutflow_WithParams_Yielding because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Test_MultiOutflow_WithParams_Yielding) == 0x138);
};

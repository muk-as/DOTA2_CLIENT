#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
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
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "[Test] Explicit Yes/No Outflow"
    // static metadata: MPropertyDescription "Test node that picks between two outflows as specified in the test domain."
    #pragma pack(push, 1)
    class CPulseCell_Outflow_TestExplicitYesNo : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        // metadata: MPropertyFriendlyName "Yes"
        pulse_runtime_lib::CPulse_OutflowConnection m_Yes; // 0x48        
        // metadata: MPropertyFriendlyName "No"
        pulse_runtime_lib::CPulse_OutflowConnection m_No; // 0x78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Outflow_TestExplicitYesNo because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Outflow_TestExplicitYesNo) == 0xa8);
};

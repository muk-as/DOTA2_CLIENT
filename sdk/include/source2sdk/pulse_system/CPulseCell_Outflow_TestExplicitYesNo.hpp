#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
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
        // static metadata: MPulseCellOutflowHookInfo "(ë"
        // static metadata: MPropertyFriendlyName "[Test] Explicit Yes/No Outflow"
        // static metadata: MPropertyDescription "Test node that picks between two outflows as specified in the test domain."
        #pragma pack(push, 1)
        class CPulseCell_Outflow_TestExplicitYesNo : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPropertyFriendlyName "Yes"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Yes; // 0x48            
            // metadata: MPropertyFriendlyName "No"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_No; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_TestExplicitYesNo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_Outflow_TestExplicitYesNo) == 0xd8);
    };
};

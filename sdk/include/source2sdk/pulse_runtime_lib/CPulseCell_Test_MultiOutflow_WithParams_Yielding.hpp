#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Continue.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Resume.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "TestDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "°ö$û"
        #pragma pack(push, 1)
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPulseCellOutflow_IsDefault
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_Out1; // 0x48            
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild1; // 0x90            
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild2; // 0xd8            
            source2sdk::pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume1; // 0x120            
            source2sdk::pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume2; // 0x168            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Test_MultiOutflow_WithParams_Yielding because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding) == 0x1b0);
    };
};

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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "[Test] Random Yes/No Outflow"
        // static metadata: MPropertyDescription "Test node that randomly picks between two outflows."
        #pragma pack(push, 1)
        class CPulseCell_Outflow_TestRandomYesNo : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPropertyFriendlyName "Yes"
            // metadata: MPropertyDescription "Randomly taken half of the time"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Yes; // 0x_            
            // metadata: MPropertyFriendlyName "No"
            // metadata: MPropertyDescription "Randomly taken half of the time"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_No; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_TestRandomYesNo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_Outflow_TestRandomYesNo) == 0x_);
    };
};

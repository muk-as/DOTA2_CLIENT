#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseSelectorOutflowList_t.hpp"

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
        // Size: 0xb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "p3κό"
        // static metadata: MPulseFunctionHiddenInTool
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        #pragma pack(push, 1)
        class CPulseCell_InlineNodeSkipSelector : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nFlowNodeID; // 0x48            
            bool m_bAnd; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            source2sdk::pulse_runtime_lib::PulseSelectorOutflowList_t m_PassOutflow; // 0x50            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_FailOutflow; // 0x68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_InlineNodeSkipSelector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_InlineNodeSkipSelector) == 0xb0);
    };
};

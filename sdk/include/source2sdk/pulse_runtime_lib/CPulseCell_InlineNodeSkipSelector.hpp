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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo ""
        // static metadata: MPulseFunctionHiddenInTool
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        #pragma pack(push, 1)
        class CPulseCell_InlineNodeSkipSelector : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nFlowNodeID; // 0x_            
            bool m_bAnd; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseSelectorOutflowList_t m_PassOutflow; // 0x_            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_FailOutflow; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_InlineNodeSkipSelector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_InlineNodeSkipSelector) == 0x_);
    };
};

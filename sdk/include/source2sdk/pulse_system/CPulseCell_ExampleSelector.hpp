#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/PulseSelectorOutflowList_t.hpp"

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
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "TestDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "ˆûý"
        // static metadata: MPropertyFriendlyName "Select Example Criteria"
        // static metadata: MPropertyDescription "Evaluate the requirements of each connected node"
        // static metadata: MPulseCell_WithNoDefaultOutflow
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/requirements.png"
        // static metadata: MPulseEditorCanvasItemSpecKV3
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        #pragma pack(push, 1)
        class CPulseCell_ExampleSelector : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::pulse_runtime_lib::PulseSelectorOutflowList_t m_OutflowList; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_ExampleSelector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_ExampleSelector) == 0x60);
    };
};

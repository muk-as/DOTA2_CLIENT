#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/PulseSelectorOutflowList_t.hpp"
#include "source2sdk/smartprops/ConfigurationHandleShape_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x68
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "SmartPropEval"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "ÀYý"
        // static metadata: MPropertyFriendlyName "Select Single Child"
        // static metadata: MPropertyDescription "An element which selects a single choice from its set of child choices."
        // static metadata: MPulseCell_WithNoDefaultOutflow
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/requirements.png"
        // static metadata: MPulseEditorCanvasItemSpecKV3
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        #pragma pack(push, 1)
        class CSmartPropPulse_PickOneSelector : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPropertyGroupName "Handle Settings"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Shape of the configuration handle to display."
            source2sdk::smartprops::ConfigurationHandleShape_t m_HandleShape; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            source2sdk::pulse_runtime_lib::PulseSelectorOutflowList_t m_OutflowList; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropPulse_PickOneSelector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_PickOneSelector) == 0x68);
    };
};

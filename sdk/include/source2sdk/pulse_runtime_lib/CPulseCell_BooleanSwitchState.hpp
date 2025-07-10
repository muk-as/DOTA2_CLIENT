#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseState.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseObservableBoolExpression_t.hpp"

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
        // Size: 0x198
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "Ã&û"
        // static metadata: MPropertyFriendlyName "Boolean Switch State"
        // static metadata: MPropertyDescription "While active, activate a child state based on the results of a boolean condition. Any referenced variables must be marked as observable."
        // static metadata: MPulseEditorCanvasItemSpecKV3
        #pragma pack(push, 1)
        class CPulseCell_BooleanSwitchState : public source2sdk::pulse_runtime_lib::CPulseCell_BaseState
        {
        public:
            // metadata: MPropertyDescription "Condition to evaluate when any of its dependent values change."
            source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t m_Condition; // 0x48            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_SubGraph; // 0xc0            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_WhenTrue; // 0x108            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_WhenFalse; // 0x150            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_BooleanSwitchState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_BooleanSwitchState) == 0x198);
    };
};

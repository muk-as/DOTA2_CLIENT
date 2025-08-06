#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
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
        // Size: 0x108
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "Ð’2û"
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/observable_variable_listener.png"
        // static metadata: MPropertyFriendlyName "Wait For Observable Condition"
        #pragma pack(push, 1)
        class CPulseCell_WaitForObservable : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyDescription "Condition to evaluate when any of its dependent values change."
            source2sdk::pulse_runtime_lib::PulseObservableBoolExpression_t m_Condition; // 0x48            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnTrue; // 0xc0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_WaitForObservable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_WaitForObservable) == 0x108);
    };
};

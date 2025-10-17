#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Continue.hpp"

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
        // Size: 0xd8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "¥9´ù"
        // static metadata: MPropertyFriendlyName "Interval Timer"
        // static metadata: MPropertyDescription "Wait for a duration, firing a child cursor at regular (or randomized) intervals"
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/node_timer.png"
        #pragma pack(push, 1)
        class CPulseCell_IntervalTimer : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyDescription "Called when timer reaches the duration OR is stopped. NOTE: This will run a little while AFTER the last interval fires unless they line up perfectly."
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_Completed; // 0x48            
            // metadata: MPropertyDescription "New child cursor starts here every time the wait interval elapses"
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_OnInterval; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_IntervalTimer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_IntervalTimer) == 0xd8);
    };
};

#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Wait"
    // static metadata: MPropertyDescription "Causes each execution cursor to pause at this node for a fixed period of time. Each cursor will wake up and resume execution when the time expires, unless aborted or early-woken."
    // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/inflow_wait.png"
    // static metadata: MPulseEditorIsControlFlowNode
    #pragma pack(push, 1)
    class CPulseCell_Inflow_Wait : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Inflow_Wait because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Inflow_Wait) == 0x78);
};

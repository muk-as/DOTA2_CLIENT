#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
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
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Inflow_EventHandler : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
    {
    public:
        CUtlSymbolLarge m_EventName; // 0x70        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Inflow_EventHandler because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Inflow_EventHandler) == 0x78);
};

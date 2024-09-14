#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Step_EntFire : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        CUtlString m_Input; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Step_EntFire because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Step_EntFire) == 0x50);
};

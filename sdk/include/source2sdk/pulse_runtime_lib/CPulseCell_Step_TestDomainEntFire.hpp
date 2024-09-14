#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "TestDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Fake Ent-Fire"
    // static metadata: MPulseEditorHeaderText
    #pragma pack(push, 1)
    class CPulseCell_Step_TestDomainEntFire : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        CUtlString m_Input; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Step_TestDomainEntFire because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Step_TestDomainEntFire) == 0x50);
};

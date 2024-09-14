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
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "TestDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Destroy Fake Entity"
    #pragma pack(push, 1)
    class CPulseCell_Step_TestDomainDestroyFakeEntity : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseCell_Step_TestDomainDestroyFakeEntity) == 0x48);
};

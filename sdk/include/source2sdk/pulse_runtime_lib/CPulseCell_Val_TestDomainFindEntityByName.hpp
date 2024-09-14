#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseValue.hpp"
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
    // static metadata: MPropertyFriendlyName "Find Fake Entity"
    #pragma pack(push, 1)
    class CPulseCell_Val_TestDomainFindEntityByName : public pulse_runtime_lib::CPulseCell_BaseValue
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseCell_Val_TestDomainFindEntityByName) == 0x48);
};

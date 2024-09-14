#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseGraphInstance_TestDomain.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x128
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainHiddenInTool
    #pragma pack(push, 1)
    class CPulseGraphInstance_TestDomain_Derived : public pulse_runtime_lib::CPulseGraphInstance_TestDomain
    {
    public:
        int32_t m_nInstanceValueX; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x124[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain_Derived because it is not a standard-layout class
    static_assert(sizeof(CPulseGraphInstance_TestDomain_Derived) == 0x128);
};

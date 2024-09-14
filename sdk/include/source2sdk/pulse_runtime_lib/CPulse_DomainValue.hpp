#pragma once
#include "source2sdk/pulse_runtime_lib/PulseDomainValueType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_DomainValue
    {
    public:
        pulse_runtime_lib::PulseDomainValueType_t m_nType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CGlobalSymbol m_Value; // 0x8        
        CGlobalSymbol m_ExpectedRuntimeType; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_DomainValue, m_nType) == 0x0);
    static_assert(offsetof(CPulse_DomainValue, m_Value) == 0x8);
    static_assert(offsetof(CPulse_DomainValue, m_ExpectedRuntimeType) == 0x10);
    
    static_assert(sizeof(CPulse_DomainValue) == 0x18);
};

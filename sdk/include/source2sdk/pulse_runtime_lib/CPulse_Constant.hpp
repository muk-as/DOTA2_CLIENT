#pragma once
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
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_Constant
    {
    public:
        CPulseValueFullType m_Type; // 0x0        
        KeyValues3 m_Value; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x20[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_Constant, m_Type) == 0x0);
    static_assert(offsetof(CPulse_Constant, m_Value) == 0x10);
    
    static_assert(sizeof(CPulse_Constant) == 0x28);
};

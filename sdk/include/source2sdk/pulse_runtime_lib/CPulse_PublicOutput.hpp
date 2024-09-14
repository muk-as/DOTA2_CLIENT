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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_PublicOutput
    {
    public:
        CUtlSymbolLarge m_Name; // 0x0        
        CUtlString m_Description; // 0x8        
        CPulseValueFullType m_ParamType; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_PublicOutput, m_Name) == 0x0);
    static_assert(offsetof(CPulse_PublicOutput, m_Description) == 0x8);
    static_assert(offsetof(CPulse_PublicOutput, m_ParamType) == 0x10);
    
    static_assert(sizeof(CPulse_PublicOutput) == 0x20);
};

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
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_OutputConnection
    {
    public:
        CUtlSymbolLarge m_SourceOutput; // 0x0        
        CUtlSymbolLarge m_TargetEntity; // 0x8        
        CUtlSymbolLarge m_TargetInput; // 0x10        
        CUtlSymbolLarge m_Param; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_OutputConnection, m_SourceOutput) == 0x0);
    static_assert(offsetof(CPulse_OutputConnection, m_TargetEntity) == 0x8);
    static_assert(offsetof(CPulse_OutputConnection, m_TargetInput) == 0x10);
    static_assert(offsetof(CPulse_OutputConnection, m_Param) == 0x18);
    
    static_assert(sizeof(CPulse_OutputConnection) == 0x20);
};

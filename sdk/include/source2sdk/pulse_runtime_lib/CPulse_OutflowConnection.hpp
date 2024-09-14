#pragma once
#include "source2sdk/pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x30
    #pragma pack(push, 1)
    class CPulse_OutflowConnection
    {
    public:
        CUtlSymbolLarge m_SourceOutflowName; // 0x0        
        pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8        
        int32_t m_nInstruction; // 0xc        
        pulse_runtime_lib::PulseRegisterMap_t m_OutflowRegisterMap; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_OutflowConnection, m_SourceOutflowName) == 0x0);
    static_assert(offsetof(CPulse_OutflowConnection, m_nDestChunk) == 0x8);
    static_assert(offsetof(CPulse_OutflowConnection, m_nInstruction) == 0xc);
    static_assert(offsetof(CPulse_OutflowConnection, m_OutflowRegisterMap) == 0x10);
    
    static_assert(sizeof(CPulse_OutflowConnection) == 0x30);
};

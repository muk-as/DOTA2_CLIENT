#pragma once
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_CallInfo
    {
    public:
        CUtlSymbolLarge m_PortName; // 0x0        
        pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x10        
        pulse_runtime_lib::PulseDocNodeID_t m_CallMethodID; // 0x30        
        pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34        
        int32_t m_nSrcInstruction; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_CallInfo, m_PortName) == 0x0);
    static_assert(offsetof(CPulse_CallInfo, m_nEditorNodeID) == 0x8);
    static_assert(offsetof(CPulse_CallInfo, m_RegisterMap) == 0x10);
    static_assert(offsetof(CPulse_CallInfo, m_CallMethodID) == 0x30);
    static_assert(offsetof(CPulse_CallInfo, m_nSrcChunk) == 0x34);
    static_assert(offsetof(CPulse_CallInfo, m_nSrcInstruction) == 0x38);
    
    static_assert(sizeof(CPulse_CallInfo) == 0x40);
};

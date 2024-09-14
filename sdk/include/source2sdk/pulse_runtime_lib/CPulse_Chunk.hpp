#pragma once
#include "source2sdk/pulse_runtime_lib/CPulse_RegisterInfo.hpp"
#include "source2sdk/pulse_runtime_lib/PGDInstruction_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
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
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_Chunk
    {
    public:
        // m_Instructions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<pulse_runtime_lib::PGDInstruction_t> m_Instructions;
        char m_Instructions[0x10]; // 0x0        
        // m_Registers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<pulse_runtime_lib::CPulse_RegisterInfo> m_Registers;
        char m_Registers[0x10]; // 0x10        
        // m_InstructionEditorIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<pulse_runtime_lib::PulseDocNodeID_t> m_InstructionEditorIDs;
        char m_InstructionEditorIDs[0x10]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x30[0x28];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_Chunk, m_Instructions) == 0x0);
    static_assert(offsetof(CPulse_Chunk, m_Registers) == 0x10);
    static_assert(offsetof(CPulse_Chunk, m_InstructionEditorIDs) == 0x20);
    
    static_assert(sizeof(CPulse_Chunk) == 0x58);
};

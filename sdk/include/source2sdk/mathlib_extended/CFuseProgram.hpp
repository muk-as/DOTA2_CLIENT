#pragma once
#include "source2sdk/mathlib_extended/FuseVariableIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFuseProgram
    {
    public:
        // m_programBuffer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_programBuffer;
        char m_programBuffer[0x18]; // 0x0        
        // m_variablesRead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::FuseVariableIndex_t> m_variablesRead;
        char m_variablesRead[0x18]; // 0x18        
        // m_variablesWritten has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::FuseVariableIndex_t> m_variablesWritten;
        char m_variablesWritten[0x18]; // 0x30        
        int32_t m_nMaxTempVarsUsed; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFuseProgram, m_programBuffer) == 0x0);
    static_assert(offsetof(CFuseProgram, m_variablesRead) == 0x18);
    static_assert(offsetof(CFuseProgram, m_variablesWritten) == 0x30);
    static_assert(offsetof(CFuseProgram, m_nMaxTempVarsUsed) == 0x48);
    
    static_assert(sizeof(CFuseProgram) == 0x50);
};

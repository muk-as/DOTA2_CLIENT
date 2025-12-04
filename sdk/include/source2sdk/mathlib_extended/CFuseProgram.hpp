#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/FuseVariableIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFuseProgram
        {
        public:
            // m_programBuffer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_programBuffer;
            char m_programBuffer[0x_]; // 0x_            
            // m_variablesRead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::FuseVariableIndex_t> m_variablesRead;
            char m_variablesRead[0x_]; // 0x_            
            // m_variablesWritten has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::FuseVariableIndex_t> m_variablesWritten;
            char m_variablesWritten[0x_]; // 0x_            
            std::int32_t m_nMaxTempVarsUsed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseProgram, m_programBuffer) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseProgram, m_variablesRead) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseProgram, m_variablesWritten) == 0x_);
        static_assert(offsetof(source2sdk::mathlib_extended::CFuseProgram, m_nMaxTempVarsUsed) == 0x_);
        
        static_assert(sizeof(source2sdk::mathlib_extended::CFuseProgram) == 0x_);
    };
};

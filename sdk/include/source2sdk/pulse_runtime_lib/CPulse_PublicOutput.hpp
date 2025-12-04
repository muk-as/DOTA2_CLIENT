#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseRuntimeMethodArg.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_PublicOutput
        {
        public:
            PulseSymbol_t m_Name; // 0x_            
            CUtlString m_Description; // 0x_            
            // m_Args has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg> m_Args;
            char m_Args[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_PublicOutput, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_PublicOutput, m_Description) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_PublicOutput, m_Args) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_PublicOutput) == 0x_);
    };
};

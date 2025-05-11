#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_OutputConnection
        {
        public:
            PulseSymbol_t m_SourceOutput; // 0x0            
            PulseSymbol_t m_TargetEntity; // 0x10            
            PulseSymbol_t m_TargetInput; // 0x20            
            PulseSymbol_t m_Param; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutputConnection, m_SourceOutput) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutputConnection, m_TargetEntity) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutputConnection, m_TargetInput) == 0x20);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutputConnection, m_Param) == 0x30);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_OutputConnection) == 0x40);
    };
};

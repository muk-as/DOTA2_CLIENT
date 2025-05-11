#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseGraphInstance_TestDomain.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x148
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainHiddenInTool
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain_Derived : public source2sdk::pulse_runtime_lib::CPulseGraphInstance_TestDomain
        {
        public:
            std::int32_t m_nInstanceValueX; // 0x140            
            uint8_t _pad0144[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain_Derived because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphInstance_TestDomain_Derived) == 0x148);
    };
};

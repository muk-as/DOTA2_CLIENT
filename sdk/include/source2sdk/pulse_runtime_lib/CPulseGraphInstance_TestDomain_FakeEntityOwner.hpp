#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x110
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainOptInFeatureTag
        // static metadata: MPulseDomainHiddenInTool
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain_FakeEntityOwner : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphInstance_TestDomain_FakeEntityOwner) == 0x110);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x118
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseDomainScopeInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainHiddenInTool
        // static metadata: MPulseDomainOptInFeatureTag
        #pragma pack(push, 1)
        class CPulseGraphInstance_SmartPropEval : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0108[0x10];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CPulseGraphInstance_SmartPropEval) == 0x118);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x130
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainOptInFeatureTag
        // static metadata: MPulseDomainOptInFeatureTag
        // static metadata: MPulseDomainOptInValueType
        // static metadata: MPulseDomainOptInValueType
        // static metadata: MPulseDomainOptInVariableKeysSource
        #pragma pack(push, 1)
        class CPulseGraphInstance_PanoramaPanel : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0110[0x20];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CPulseGraphInstance_PanoramaPanel) == 0x130);
    };
};

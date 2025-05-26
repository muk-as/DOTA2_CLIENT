#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseProvideFeatureTag "8"
        // static metadata: MPulseDomainHookInfo
        #pragma pack(push, 1)
        class CDOTABaseAbilityParticleAPI
        {
        public:
            uint8_t _pad0000[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTABaseAbilityParticleAPI) == 0x8);
    };
};

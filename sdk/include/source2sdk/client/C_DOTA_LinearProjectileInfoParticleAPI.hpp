#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseProvideFeatureTag "8"
        // static metadata: MPulseDomainHookInfo
        // static metadata: MParticleDomainTag "C_DOTA_LinearProjectileInfoParticleAPI Linear Projectile"
        #pragma pack(push, 1)
        class C_DOTA_LinearProjectileInfoParticleAPI
        {
        public:
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_DOTA_LinearProjectileInfoParticleAPI) == 0x_);
    };
};

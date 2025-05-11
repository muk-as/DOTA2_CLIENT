#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_VelocityFromCP : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "velocity"
            source2sdk::particleslib::CParticleCollectionVecInput m_velocityInput; // 0x1c8            
            // metadata: MPropertyFriendlyName "local space"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x840            
            // metadata: MPropertyFriendlyName "velocity scale"
            float m_flVelocityScale; // 0x8a8            
            // metadata: MPropertyFriendlyName "direction only"
            bool m_bDirectionOnly; // 0x8ac            
            uint8_t _pad08ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_VelocityFromCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_VelocityFromCP) == 0x8b0);
    };
};

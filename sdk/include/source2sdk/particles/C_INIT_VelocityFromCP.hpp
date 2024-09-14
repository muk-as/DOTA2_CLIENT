#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
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
    class C_INIT_VelocityFromCP : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "velocity"
        particleslib::CParticleCollectionVecInput m_velocityInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "local space"
        // metadata: MParticleInputOptional
        particleslib::CParticleTransformInput m_transformInput; // 0x840        
        // metadata: MPropertyFriendlyName "velocity scale"
        float m_flVelocityScale; // 0x8a8        
        // metadata: MPropertyFriendlyName "direction only"
        bool m_bDirectionOnly; // 0x8ac        
        [[maybe_unused]] std::uint8_t pad_0x8ad[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_VelocityFromCP because it is not a standard-layout class
    static_assert(sizeof(C_INIT_VelocityFromCP) == 0x8b0);
};

#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapSDFDistanceToScalarAttribute : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        // metadata: MPropertyFriendlyName "Input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4        
        // metadata: MPropertyFriendlyName "Minimum distance"
        particleslib::CParticleCollectionFloatInput m_flMinDistance; // 0x1c8        
        // metadata: MPropertyFriendlyName "Maximum distance"
        particleslib::CParticleCollectionFloatInput m_flMaxDistance; // 0x328        
        // metadata: MPropertyFriendlyName "Value for dist<min"
        particleslib::CParticleCollectionFloatInput m_flValueBelowMin; // 0x488        
        // metadata: MPropertyFriendlyName "Value for dist=min"
        particleslib::CParticleCollectionFloatInput m_flValueAtMin; // 0x5e8        
        // metadata: MPropertyFriendlyName "Value for dist=max"
        particleslib::CParticleCollectionFloatInput m_flValueAtMax; // 0x748        
        // metadata: MPropertyFriendlyName "Value for dist>max"
        particleslib::CParticleCollectionFloatInput m_flValueAboveMax; // 0x8a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapSDFDistanceToScalarAttribute because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapSDFDistanceToScalarAttribute) == 0xa08);
};

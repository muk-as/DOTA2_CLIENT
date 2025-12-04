#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapSDFDistanceToScalarAttribute : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "Input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorFieldInput; // 0x_            
            // metadata: MPropertyFriendlyName "Minimum distance"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "Maximum distance"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "Value for dist<min"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flValueBelowMin; // 0x_            
            // metadata: MPropertyFriendlyName "Value for dist=min"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flValueAtMin; // 0x_            
            // metadata: MPropertyFriendlyName "Value for dist=max"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flValueAtMax; // 0x_            
            // metadata: MPropertyFriendlyName "Value for dist>max"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flValueAboveMax; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapSDFDistanceToScalarAttribute because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapSDFDistanceToScalarAttribute) == 0x_);
    };
};

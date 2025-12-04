#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/MissingParentInheritBehavior_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // static metadata: MParticleMinVersion "9"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_InheritFromParentParticlesV2 : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flScale; // 0x_            
            // metadata: MPropertyFriendlyName "inherited field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "particle increment amount"
            source2sdk::particleslib::CPerParticleFloatInput m_nIncrement; // 0x_            
            // metadata: MPropertyFriendlyName "random parent particle distribution"
            bool m_bRandomDistribution; // 0x_            
            // metadata: MPropertyFriendlyName "start at last parent particle in reverse"
            bool m_bReverse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "behavior if parent particle dies"
            source2sdk::particles::MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x_            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_InheritFromParentParticlesV2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_InheritFromParentParticlesV2) == 0x_);
    };
};

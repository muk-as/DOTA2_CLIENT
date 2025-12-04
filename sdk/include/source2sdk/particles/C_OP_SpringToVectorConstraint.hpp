#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        class C_OP_SpringToVectorConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "slack"
            source2sdk::particleslib::CPerParticleFloatInput m_flRestLength; // 0x_            
            // metadata: MPropertyFriendlyName "minimum segment length %"
            source2sdk::particleslib::CPerParticleFloatInput m_flMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "maximum segment length %"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "resting spacing"
            source2sdk::particleslib::CPerParticleFloatInput m_flRestingLength; // 0x_            
            // metadata: MPropertyFriendlyName "anchor vector"
            source2sdk::particleslib::CPerParticleVecInput m_vecAnchorVector; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SpringToVectorConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SpringToVectorConstraint) == 0x_);
    };
};

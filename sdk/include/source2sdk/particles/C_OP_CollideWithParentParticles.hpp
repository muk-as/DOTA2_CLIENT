#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CollideWithParentParticles : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "parent particle radius scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flParentRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "particle radius scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CollideWithParentParticles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CollideWithParentParticles) == 0x_);
    };
};

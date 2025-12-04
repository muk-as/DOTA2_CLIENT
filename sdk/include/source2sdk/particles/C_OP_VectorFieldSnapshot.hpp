#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        class C_OP_VectorFieldSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "extra velocity field to write"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x_            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x_            
            // metadata: MPropertyFriendlyName "Component Scale"
            source2sdk::particleslib::CPerParticleVecInput m_vecScale; // 0x_            
            // metadata: MPropertyFriendlyName "Boundary Dampening"
            float m_flBoundaryDampening; // 0x_            
            // metadata: MPropertyFriendlyName "Set Velocity"
            bool m_bSetVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "Lock to Surface"
            bool m_bLockToSurface; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Vector Field Grid Spacing Override"
            float m_flGridSpacing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_VectorFieldSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_VectorFieldSnapshot) == 0x_);
    };
};

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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9b8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_VectorFieldSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x1c0            
            // metadata: MPropertyFriendlyName "extra velocity field to write"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c4            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x1c8            
            uint8_t _pad01cc[0x4]; // 0x1cc
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1d0            
            // metadata: MPropertyFriendlyName "Component Scale"
            source2sdk::particleslib::CPerParticleVecInput m_vecScale; // 0x330            
            // metadata: MPropertyFriendlyName "Boundary Dampening"
            float m_flBoundaryDampening; // 0x9a8            
            // metadata: MPropertyFriendlyName "Set Velocity"
            bool m_bSetVelocity; // 0x9ac            
            // metadata: MPropertyFriendlyName "Lock to Surface"
            bool m_bLockToSurface; // 0x9ad            
            uint8_t _pad09ae[0x2]; // 0x9ae
            // metadata: MPropertyFriendlyName "Vector Field Grid Spacing Override"
            float m_flGridSpacing; // 0x9b0            
            uint8_t _pad09b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_VectorFieldSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_VectorFieldSnapshot) == 0x9b8);
    };
};

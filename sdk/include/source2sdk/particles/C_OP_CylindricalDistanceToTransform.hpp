#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x820
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CylindricalDistanceToTransform : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "cylinder inner radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "cylinder outer radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMax; // 0x328            
            // metadata: MPropertyFriendlyName "cylinder inner output"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488            
            // metadata: MPropertyFriendlyName "cylinder outer output"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8            
            // metadata: MPropertyFriendlyName "cylindrical top transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x748            
            // metadata: MPropertyFriendlyName "cylindrical bottom transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformEnd; // 0x7b0            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x818            
            // metadata: MPropertyFriendlyName "only active within specified distance"
            bool m_bActiveRange; // 0x81c            
            // metadata: MPropertyFriendlyName "output is additive"
            bool m_bAdditive; // 0x81d            
            // metadata: MPropertyFriendlyName "apply radius to ends (capsule)"
            bool m_bCapsule; // 0x81e            
            uint8_t _pad081f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CylindricalDistanceToTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CylindricalDistanceToTransform) == 0x820);
    };
};

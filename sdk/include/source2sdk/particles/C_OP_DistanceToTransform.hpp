#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        class C_OP_DistanceToTransform : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "distance minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "distance maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x_            
            // metadata: MPropertyFriendlyName "ensure line of sight"
            bool m_bLOS; // 0x_            
            // metadata: MPropertyFriendlyName "LOS collision group"
            char m_CollisionGroupName[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "LOS Failure Scalar"
            float m_flLOSScale; // 0x_            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "only active within specified distance"
            bool m_bActiveRange; // 0x_            
            // metadata: MPropertyFriendlyName "output is additive"
            bool m_bAdditive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "component scale"
            source2sdk::particleslib::CPerParticleVecInput m_vecComponentScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceToTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceToTransform) == 0x_);
    };
};

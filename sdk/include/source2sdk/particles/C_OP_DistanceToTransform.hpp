#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0xec0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceToTransform : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x328        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8        
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformStart; // 0x748        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x7b0        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x7b1        
        [[maybe_unused]] std::uint8_t pad_0x831[0x3]; // 0x831
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x834        
        // metadata: MPropertyFriendlyName "maximum trace length"
        float m_flMaxTraceLength; // 0x838        
        // metadata: MPropertyFriendlyName "LOS Failure Scalar"
        float m_flLOSScale; // 0x83c        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x840        
        // metadata: MPropertyFriendlyName "only active within specified distance"
        bool m_bActiveRange; // 0x844        
        // metadata: MPropertyFriendlyName "output is additive"
        bool m_bAdditive; // 0x845        
        [[maybe_unused]] std::uint8_t pad_0x846[0x2]; // 0x846
        // metadata: MPropertyFriendlyName "component scale"
        particleslib::CPerParticleVecInput m_vecComponentScale; // 0x848        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceToTransform because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceToTransform) == 0xec0);
};

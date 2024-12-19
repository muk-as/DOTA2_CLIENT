#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/MissingParentInheritBehavior_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MParticleMinVersion "9"
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_InheritFromParentParticlesV2 : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "scale"
        particleslib::CPerParticleFloatInput m_flScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "inherited field"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x320        
        [[maybe_unused]] std::uint8_t pad_0x324[0x4]; // 0x324
        // metadata: MPropertyFriendlyName "particle increment amount"
        particleslib::CPerParticleFloatInput m_nIncrement; // 0x328        
        // metadata: MPropertyFriendlyName "random parent particle distribution"
        bool m_bRandomDistribution; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x489[0x3]; // 0x489
        // metadata: MPropertyFriendlyName "behavior if parent particle dies"
        particles::MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x48c        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x490        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_InheritFromParentParticlesV2 because it is not a standard-layout class
    static_assert(sizeof(C_OP_InheritFromParentParticlesV2) == 0x5f0);
};

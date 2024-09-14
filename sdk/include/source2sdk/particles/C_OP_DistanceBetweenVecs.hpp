#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    // Size: 0x1440
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceBetweenVecs : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "first vector"
        particleslib::CPerParticleVecInput m_vecPoint1; // 0x1c8        
        // metadata: MPropertyFriendlyName "second vector"
        particleslib::CPerParticleVecInput m_vecPoint2; // 0x840        
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0xeb8        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x1018        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x1178        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x12d8        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1438        
        // metadata: MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
        bool m_bDeltaTime; // 0x143c        
        [[maybe_unused]] std::uint8_t pad_0x143d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceBetweenVecs because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceBetweenVecs) == 0x1440);
};

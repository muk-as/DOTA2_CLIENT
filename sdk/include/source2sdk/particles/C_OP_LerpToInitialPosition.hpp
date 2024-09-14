#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LerpToInitialPosition : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c8        
        // metadata: MPropertyFriendlyName "position cache attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nCacheField; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x32c[0x4]; // 0x32c
        // metadata: MPropertyFriendlyName "scale"
        particleslib::CParticleCollectionFloatInput m_flScale; // 0x330        
        // metadata: MPropertyFriendlyName "component scale"
        particleslib::CParticleCollectionVecInput m_vecScale; // 0x490        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LerpToInitialPosition because it is not a standard-layout class
    static_assert(sizeof(C_OP_LerpToInitialPosition) == 0xb08);
};

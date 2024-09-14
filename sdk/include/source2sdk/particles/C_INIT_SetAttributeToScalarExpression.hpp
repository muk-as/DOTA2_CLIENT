#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ScalarExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_SetAttributeToScalarExpression : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::ScalarExpressionType_t m_nExpression; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CPerParticleFloatInput m_flInput1; // 0x1d0        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CPerParticleFloatInput m_flInput2; // 0x330        
        // metadata: MPropertyFriendlyName "output"
        particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x490        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x5f0        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f8[0x28];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_SetAttributeToScalarExpression because it is not a standard-layout class
    static_assert(sizeof(C_INIT_SetAttributeToScalarExpression) == 0x620);
};

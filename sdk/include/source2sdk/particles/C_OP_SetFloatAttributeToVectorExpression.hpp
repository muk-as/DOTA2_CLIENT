#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/VectorFloatExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
    // Size: 0x1020
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetFloatAttributeToVectorExpression : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::VectorFloatExpressionType_t m_nExpression; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CPerParticleVecInput m_vInput1; // 0x1c8        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CPerParticleVecInput m_vInput2; // 0x840        
        // metadata: MPropertyFriendlyName "output"
        particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0xeb8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x1018        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x101c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetFloatAttributeToVectorExpression because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetFloatAttributeToVectorExpression) == 0x1020);
};

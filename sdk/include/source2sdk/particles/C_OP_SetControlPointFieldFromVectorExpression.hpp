#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/VectorFloatExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
    // Size: 0x1028
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointFieldFromVectorExpression : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::VectorFloatExpressionType_t m_nExpression; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CParticleCollectionVecInput m_vecInput1; // 0x1d0        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CParticleCollectionVecInput m_vecInput2; // 0x848        
        // metadata: MPropertyFriendlyName "output"
        particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0xec0        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutputCP; // 0x1020        
        // metadata: MPropertyFriendlyName "output component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nOutVectorField; // 0x1024        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointFieldFromVectorExpression because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointFieldFromVectorExpression) == 0x1028);
};

#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/VectorExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xec8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToVectorExpression : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::VectorExpressionType_t m_nExpression; // 0x1c8        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutputCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CParticleCollectionVecInput m_vInput1; // 0x1d0        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CParticleCollectionVecInput m_vInput2; // 0x848        
        // metadata: MPropertyFriendlyName "normalize result"
        bool m_bNormalizedOutput; // 0xec0        
        [[maybe_unused]] std::uint8_t pad_0xec1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToVectorExpression because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToVectorExpression) == 0xec8);
};

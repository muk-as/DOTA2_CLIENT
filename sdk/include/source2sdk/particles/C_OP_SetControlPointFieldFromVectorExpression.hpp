#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/VectorFloatExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        class C_OP_SetControlPointFieldFromVectorExpression : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "expression"
            source2sdk::particles::VectorFloatExpressionType_t m_nExpression; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "input 1"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecInput1; // 0x_            
            // metadata: MPropertyFriendlyName "input 2"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecInput2; // 0x_            
            // metadata: MPropertyFriendlyName "lerp value"
            // metadata: MPropertySuppressExpr "m_nExpression != VECTOR_EXPRESSION_LERP"
            source2sdk::particleslib::CPerParticleFloatInput m_flLerp; // 0x_            
            // metadata: MPropertyFriendlyName "output"
            source2sdk::particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x_            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputCP; // 0x_            
            // metadata: MPropertyFriendlyName "output component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nOutVectorField; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointFieldFromVectorExpression because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointFieldFromVectorExpression) == 0x_);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/VectorExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class C_OP_SetControlPointToVectorExpression : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "expression"
            source2sdk::particles::VectorExpressionType_t m_nExpression; // 0x1c8            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputCP; // 0x1cc            
            // metadata: MPropertyFriendlyName "input 1"
            source2sdk::particleslib::CParticleCollectionVecInput m_vInput1; // 0x1d0            
            // metadata: MPropertyFriendlyName "input 2"
            source2sdk::particleslib::CParticleCollectionVecInput m_vInput2; // 0x848            
            // metadata: MPropertyFriendlyName "lerp value"
            // metadata: MPropertySuppressExpr "m_nExpression != VECTOR_EXPRESSION_LERP"
            source2sdk::particleslib::CPerParticleFloatInput m_flLerp; // 0xec0            
            // metadata: MPropertyFriendlyName "normalize result"
            bool m_bNormalizedOutput; // 0x1020            
            uint8_t _pad1021[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToVectorExpression because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToVectorExpression) == 0x1028);
    };
};

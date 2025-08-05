#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ScreenSpacePositionOfTarget : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "target position"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecTargetPosition; // 0x1c0            
            // metadata: MPropertyFriendlyName "output behindness"
            bool m_bOututBehindness; // 0x838            
            uint8_t _pad0839[0x3]; // 0x839
            // metadata: MPropertyFriendlyName "behindness output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particles::ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x83c            
            // metadata: MPropertyFriendlyName "behindness output remap"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particleslib::CParticleRemapFloatInput m_flBehindOutputRemap; // 0x840            
            // metadata: MPropertyFriendlyName "behindness set value method"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particles::ParticleSetMethod_t m_nBehindSetMethod; // 0x9a0            
            uint8_t _pad09a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ScreenSpacePositionOfTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ScreenSpacePositionOfTarget) == 0x9a8);
    };
};

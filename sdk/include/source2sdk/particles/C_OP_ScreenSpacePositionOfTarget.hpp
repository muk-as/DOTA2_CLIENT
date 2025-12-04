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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::particleslib::CPerParticleVecInput m_vecTargetPosition; // 0x_            
            // metadata: MPropertyFriendlyName "output behindness"
            bool m_bOututBehindness; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "behindness output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particles::ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "behindness output remap"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particleslib::CParticleRemapFloatInput m_flBehindOutputRemap; // 0x_            
            // metadata: MPropertyFriendlyName "behindness set value method"
            // metadata: MPropertySuppressExpr "m_bOututBehindness == false"
            source2sdk::particles::ParticleSetMethod_t m_nBehindSetMethod; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ScreenSpacePositionOfTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ScreenSpacePositionOfTarget) == 0x_);
    };
};

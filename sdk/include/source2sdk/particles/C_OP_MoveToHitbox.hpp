#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/HitboxLerpType_t.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        class C_OP_MoveToHitbox : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "model input"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "lifetime lerp start"
            float m_flLifeTimeLerpStart; // 0x_            
            // metadata: MPropertyFriendlyName "lifetime lerp end"
            float m_flLifeTimeLerpEnd; // 0x_            
            // metadata: MPropertyFriendlyName "previous position scale"
            float m_flPrevPosScale; // 0x_            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "lerp type"
            source2sdk::particles::HitboxLerpType_t m_nLerpType; // 0x_            
            // metadata: MPropertyFriendlyName "Constant Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MoveToHitbox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MoveToHitbox) == 0x_);
    };
};

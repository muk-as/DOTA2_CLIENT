#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleRotationLockType_t.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
        class C_OP_LockToBone : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "model input"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x_            
            // metadata: MPropertyFriendlyName "lifetime fade start"
            float m_flLifeTimeFadeStart; // 0x_            
            // metadata: MPropertyFriendlyName "lifetime fade end"
            float m_flLifeTimeFadeEnd; // 0x_            
            // metadata: MPropertyFriendlyName "instant jump threshold"
            float m_flJumpThreshold; // 0x_            
            // metadata: MPropertyFriendlyName "previous position scale"
            float m_flPrevPosScale; // 0x_            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "rigid lock"
            bool m_bRigid; // 0x_            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "output field prev"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x_            
            // metadata: MPropertyStartGroup "Set Rotations to Bones"
            // metadata: MPropertyFriendlyName "lock rotations to bone orientation"
            source2sdk::particles::ParticleRotationLockType_t m_nRotationSetType; // 0x_            
            // metadata: MPropertyFriendlyName "rigid set rotation from bones"
            bool m_bRigidRotationLock; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
            source2sdk::particleslib::CPerParticleVecInput m_vecRotation; // 0x_            
            // metadata: MPropertyFriendlyName "rigid rotation interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flRotLerp; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LockToBone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LockToBone) == 0x_);
    };
};

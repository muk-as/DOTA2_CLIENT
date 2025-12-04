#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

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
        class C_INIT_CreateOnModel : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input model"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyFriendlyName "input transform for transforming local space bias vector"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x_            
            // metadata: MPropertyFriendlyName "force to be inside model"
            std::int32_t m_nForceInModel; // 0x_            
            // metadata: MPropertyFriendlyName "bias box distribution by volume"
            bool m_bScaleToVolume; // 0x_            
            // metadata: MPropertyFriendlyName "even distribution within boxes"
            bool m_bEvenDistribution; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "desired hitbox"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nDesiredHitbox; // 0x_            
            // metadata: MPropertyFriendlyName "Control Point Providing Hitbox index"
            std::int32_t m_nHitboxValueFromControlPointIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x_            
            // metadata: MPropertyFriendlyName "inherited velocity scale"
            float m_flBoneVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "maximum inherited velocity"
            float m_flMaxBoneVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "direction bias"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0x_            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "bias in local space"
            bool m_bLocalCoords; // 0x_            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x_            
            // metadata: MPropertyFriendlyName "Use renderable meshes instead of hitboxes"
            bool m_bUseMesh; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "hitbox shell thickness"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flShellSize; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateOnModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateOnModel) == 0x_);
    };
};

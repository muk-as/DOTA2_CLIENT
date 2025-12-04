#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleHitboxBiasType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        class C_INIT_CreateOnModelAtHeight : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x_            
            // metadata: MPropertyFriendlyName "force creation height to desired height"
            bool m_bForceZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "height override control point number"
            std::int32_t m_nHeightCP; // 0x_            
            // metadata: MPropertyFriendlyName "desired height is relative to water"
            bool m_bUseWaterHeight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "relative desired height"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDesiredHeight; // 0x_            
            // metadata: MPropertyFriendlyName "model hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x_            
            // metadata: MPropertyFriendlyName "direction bias"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0x_            
            // metadata: MPropertyFriendlyName "bias type"
            source2sdk::particles::ParticleHitboxBiasType_t m_nBiasType; // 0x_            
            // metadata: MPropertyFriendlyName "bias in local space"
            bool m_bLocalCoords; // 0x_            
            // metadata: MPropertyFriendlyName "bias prefers moving hitboxes"
            bool m_bPreferMovingBoxes; // 0x_            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "hitbox velocity inherited scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x_            
            // metadata: MPropertyFriendlyName "max hitbox velocity"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateOnModelAtHeight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateOnModelAtHeight) == 0x_);
    };
};

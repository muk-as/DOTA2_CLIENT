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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1370
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateOnModelAtHeight : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x1c8            
            // metadata: MPropertyFriendlyName "force creation height to desired height"
            bool m_bForceZ; // 0x1c9            
            uint8_t _pad01ca[0x2]; // 0x1ca
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1cc            
            // metadata: MPropertyFriendlyName "height override control point number"
            std::int32_t m_nHeightCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "desired height is relative to water"
            bool m_bUseWaterHeight; // 0x1d4            
            uint8_t _pad01d5[0x3]; // 0x1d5
            // metadata: MPropertyFriendlyName "relative desired height"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d8            
            // metadata: MPropertyFriendlyName "model hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x338            
            // metadata: MPropertyFriendlyName "direction bias"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0x9b0            
            // metadata: MPropertyFriendlyName "bias type"
            source2sdk::particles::ParticleHitboxBiasType_t m_nBiasType; // 0x1028            
            // metadata: MPropertyFriendlyName "bias in local space"
            bool m_bLocalCoords; // 0x102c            
            // metadata: MPropertyFriendlyName "bias prefers moving hitboxes"
            bool m_bPreferMovingBoxes; // 0x102d            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x102e            
            uint8_t _pad10ae[0x2]; // 0x10ae
            // metadata: MPropertyFriendlyName "hitbox velocity inherited scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x10b0            
            // metadata: MPropertyFriendlyName "max hitbox velocity"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1210            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateOnModelAtHeight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateOnModelAtHeight) == 0x1370);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/SpriteCardPerParticleScale_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TextureControls_t
        {
        public:
            // metadata: MPropertyFriendlyName "horizontal texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x_            
            // metadata: MPropertyFriendlyName "vertical texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x_            
            // metadata: MPropertyFriendlyName "horizontal texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x_            
            // metadata: MPropertyFriendlyName "vertical texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x_            
            // metadata: MPropertyFriendlyName "texture rotation / animation rate scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x_            
            // metadata: MPropertyFriendlyName "Infinite Zoom Scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flZoomScale; // 0x_            
            // metadata: MPropertyFriendlyName "Distortion Amount"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDistortion; // 0x_            
            // metadata: MPropertyFriendlyName "Randomize Initial Offset"
            bool m_bRandomizeOffsets; // 0x_            
            // metadata: MPropertyFriendlyName "Clamp UVs"
            bool m_bClampUVs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "per-particle scalar for blend"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for scale"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for horizontal offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for vertical offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for rotation"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for zoom"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle scalar for distortion"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in TextureControls_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::TextureControls_t) == 0x_);
    };
};

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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9c0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TextureControls_t
        {
        public:
            // metadata: MPropertyFriendlyName "horizontal texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0            
            // metadata: MPropertyFriendlyName "vertical texture scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x160            
            // metadata: MPropertyFriendlyName "horizontal texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2c0            
            // metadata: MPropertyFriendlyName "vertical texture offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x420            
            // metadata: MPropertyFriendlyName "texture rotation / animation rate scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x580            
            // metadata: MPropertyFriendlyName "Infinite Zoom Scale"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6e0            
            // metadata: MPropertyFriendlyName "Distortion Amount"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDistortion; // 0x840            
            // metadata: MPropertyFriendlyName "Randomize Initial Offset"
            bool m_bRandomizeOffsets; // 0x9a0            
            // metadata: MPropertyFriendlyName "Clamp UVs"
            bool m_bClampUVs; // 0x9a1            
            uint8_t _pad09a2[0x2]; // 0x9a2
            // metadata: MPropertyFriendlyName "per-particle scalar for blend"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x9a4            
            // metadata: MPropertyFriendlyName "per-particle scalar for scale"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x9a8            
            // metadata: MPropertyFriendlyName "per-particle scalar for horizontal offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x9ac            
            // metadata: MPropertyFriendlyName "per-particle scalar for vertical offset"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x9b0            
            // metadata: MPropertyFriendlyName "per-particle scalar for rotation"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x9b4            
            // metadata: MPropertyFriendlyName "per-particle scalar for zoom"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x9b8            
            // metadata: MPropertyFriendlyName "per-particle scalar for distortion"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x9bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in TextureControls_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::TextureControls_t) == 0x9c0);
    };
};

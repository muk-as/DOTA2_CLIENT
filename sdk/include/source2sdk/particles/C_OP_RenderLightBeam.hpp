#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
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
        class C_OP_RenderLightBeam : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Color Blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x_            
            // metadata: MPropertyFriendlyName "Color Blend Type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Lumens Per Meter"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x_            
            // metadata: MPropertyFriendlyName "Shadows"
            // metadata: MPropertySuppressExpr "mod == csgo"
            bool m_bCastShadows; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Skirt"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSkirt; // 0x_            
            // metadata: MPropertyFriendlyName "Range"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRange; // 0x_            
            // metadata: MPropertyFriendlyName "Thickness"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flThickness; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderLightBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderLightBeam) == 0x_);
    };
};

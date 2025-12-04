#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleLightUnitChoiceList_t.hpp"
#include "source2sdk/particles/ParticleOmni2LightTypeChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        class C_OP_RenderOmni2Light : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Type"
            source2sdk::particles::ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Color Blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x_            
            // metadata: MPropertyFriendlyName "Color Blend Type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            source2sdk::particles::ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x_            
            // metadata: MPropertyFriendlyName "Lumens"
            // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
            source2sdk::particleslib::CPerParticleFloatInput m_flBrightnessLumens; // 0x_            
            // metadata: MPropertyFriendlyName "Candelas"
            // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
            source2sdk::particleslib::CPerParticleFloatInput m_flBrightnessCandelas; // 0x_            
            // metadata: MPropertyFriendlyName "Shadows"
            // metadata: MPropertySuppressExpr "mod == csgo"
            bool m_bCastShadows; // 0x_            
            // metadata: MPropertyFriendlyName "Fog"
            bool m_bFog; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Fog Scale"
            // metadata: MPropertySuppressExpr "!m_bFog"
            source2sdk::particleslib::CPerParticleFloatInput m_flFogScale; // 0x_            
            // metadata: MPropertyFriendlyName "Light Radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flLuminaireRadius; // 0x_            
            // metadata: MPropertyFriendlyName "Skirt"
            source2sdk::particleslib::CPerParticleFloatInput m_flSkirt; // 0x_            
            // metadata: MPropertyFriendlyName "Range"
            source2sdk::particleslib::CPerParticleFloatInput m_flRange; // 0x_            
            // metadata: MPropertyFriendlyName "Inner Cone Angle"
            source2sdk::particleslib::CPerParticleFloatInput m_flInnerConeAngle; // 0x_            
            // metadata: MPropertyFriendlyName "Outer Cone Angle"
            source2sdk::particleslib::CPerParticleFloatInput m_flOuterConeAngle; // 0x_            
            // metadata: MPropertyFriendlyName "Cookie"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "Cookie is Spherically Mapped"
            bool m_bSphericalCookie; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderOmni2Light because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderOmni2Light) == 0x_);
    };
};

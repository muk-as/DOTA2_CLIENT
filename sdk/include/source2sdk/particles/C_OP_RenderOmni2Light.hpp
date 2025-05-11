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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x13b8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderOmni2Light : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Type"
            source2sdk::particles::ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x210            
            uint8_t _pad0214[0x4]; // 0x214
            // metadata: MPropertyFriendlyName "Color Blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x218            
            // metadata: MPropertyFriendlyName "Color Blend Type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x890            
            source2sdk::particles::ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x894            
            // metadata: MPropertyFriendlyName "Lumens"
            // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
            source2sdk::particleslib::CPerParticleFloatInput m_flBrightnessLumens; // 0x898            
            // metadata: MPropertyFriendlyName "Candelas"
            // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
            source2sdk::particleslib::CPerParticleFloatInput m_flBrightnessCandelas; // 0x9f8            
            // metadata: MPropertyFriendlyName "Shadows"
            // metadata: MPropertySuppressExpr "mod == csgo"
            bool m_bCastShadows; // 0xb58            
            // metadata: MPropertyFriendlyName "Fog"
            bool m_bFog; // 0xb59            
            uint8_t _pad0b5a[0x6]; // 0xb5a
            // metadata: MPropertyFriendlyName "Fog Scale"
            // metadata: MPropertySuppressExpr "!m_bFog"
            source2sdk::particleslib::CPerParticleFloatInput m_flFogScale; // 0xb60            
            // metadata: MPropertyFriendlyName "Light Radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flLuminaireRadius; // 0xcc0            
            // metadata: MPropertyFriendlyName "Skirt"
            source2sdk::particleslib::CPerParticleFloatInput m_flSkirt; // 0xe20            
            // metadata: MPropertyFriendlyName "Range"
            source2sdk::particleslib::CPerParticleFloatInput m_flRange; // 0xf80            
            // metadata: MPropertyFriendlyName "Inner Cone Angle"
            source2sdk::particleslib::CPerParticleFloatInput m_flInnerConeAngle; // 0x10e0            
            // metadata: MPropertyFriendlyName "Outer Cone Angle"
            source2sdk::particleslib::CPerParticleFloatInput m_flOuterConeAngle; // 0x1240            
            // metadata: MPropertyFriendlyName "Cookie"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0x13a0            
            // metadata: MPropertyFriendlyName "Cookie is Spherically Mapped"
            bool m_bSphericalCookie; // 0x13a8            
            uint8_t _pad13a9[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderOmni2Light because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderOmni2Light) == 0x13b8);
    };
};

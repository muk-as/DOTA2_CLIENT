#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/AnimationType_t.hpp"
#include "source2sdk/particles/BlurFilterType_t.hpp"
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAlphaReferenceType_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleDepthFeatheringMode_t.hpp"
#include "source2sdk/particles/ParticleFogType_t.hpp"
#include "source2sdk/particles/ParticleOutputBlendMode_t.hpp"
#include "source2sdk/particles/ParticleSequenceCropOverride_t.hpp"
#include "source2sdk/particles/ParticleSortingChoiceList_t.hpp"
#include "source2sdk/particles/SpriteCardPerParticleScale_t.hpp"
#include "source2sdk/particles/SpriteCardShaderType_t.hpp"
#include "source2sdk/particles/TextureGroup_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseRendererSource2 : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyStartGroup "+Renderer Modifiers"
            // metadata: MPropertyFriendlyName "radius scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x_            
            // metadata: MPropertyFriendlyName "rotation roll scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flRollScale; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionRendererVecInput m_vecColorScale; // 0x_            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            // metadata: MPropertyStartGroup "+Material"
            // metadata: MPropertyFriendlyName "Shader"
            // metadata: MPropertySortPriority "600"
            source2sdk::particles::SpriteCardShaderType_t m_nShaderType; // 0x_            
            // metadata: MPropertyFriendlyName "Custom Shader"
            // metadata: MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
            // metadata: MPropertySortPriority "600"
            CUtlString m_strShaderOverride; // 0x_            
            // metadata: MPropertyFriendlyName "X offset of center point"
            // metadata: MPropertySortPriority "600"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Y offset of center point"
            // metadata: MPropertySortPriority "600"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Bump Strength"
            // metadata: MPropertySortPriority "600"
            float m_flBumpStrength; // 0x_            
            // metadata: MPropertyFriendlyName "Sheet Crop Behavior"
            // metadata: MPropertySortPriority "600"
            source2sdk::particles::ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0x_            
            // metadata: MPropertyFriendlyName "Textures"
            // metadata: MParticleRequireDefaultArrayEntry
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "600"
            // m_vecTexturesInput has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::particles::TextureGroup_t> m_vecTexturesInput;
            char m_vecTexturesInput[0x_]; // 0x_            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animation rate"
            // metadata: MPropertyAttributeRange "0 5"
            // metadata: MPropertySortPriority "500"
            float m_flAnimationRate; // 0x_            
            // metadata: MPropertyFriendlyName "animation type"
            // metadata: MPropertySortPriority "500"
            source2sdk::particles::AnimationType_t m_nAnimationType; // 0x_            
            // metadata: MPropertyFriendlyName "set animation value in FPS"
            // metadata: MPropertySortPriority "500"
            bool m_bAnimateInFPS; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "motion vector scale U"
            // metadata: MPropertySortPriority "500"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // 0x_            
            // metadata: MPropertyFriendlyName "motion vector scale V"
            // metadata: MPropertySortPriority "500"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // 0x_            
            // metadata: MPropertyStartGroup "Lighting and Shadows"
            // metadata: MPropertyFriendlyName "self illum amount"
            // metadata: MPropertyAttributeRange "0 2"
            // metadata: MPropertySortPriority "400"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0x_            
            // metadata: MPropertyFriendlyName "diffuse lighting amount"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "400"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x_            
            // metadata: MPropertyFriendlyName "diffuse max contribution clamp"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x_            
            // metadata: MPropertyFriendlyName "diffuse lighting origin Control Point"
            // metadata: MPropertySortPriority "400"
            std::int32_t m_nLightingControlPoint; // 0x_            
            // metadata: MPropertyStartGroup "+Color and alpha adjustments"
            // metadata: MPropertyFriendlyName "output blend mode"
            // metadata: MPropertySortPriority "300"
            source2sdk::particles::ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x_            
            // metadata: MPropertyFriendlyName "Gamma-correct vertex colors"
            // metadata: MPropertySortPriority "300"
            bool m_bGammaCorrectVertexColors; // 0x_            
            // metadata: MPropertyFriendlyName "Saturate color pre alphablend"
            // metadata: MPropertySortPriority "300"
            // metadata: MPropertySuppressExpr "mod != dota && mod != hlx"
            bool m_bSaturateColorPreAlphaBlend; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "add self amount over alphablend"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x_            
            // metadata: MPropertyFriendlyName "desaturation amount"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDesaturation; // 0x_            
            // metadata: MPropertyFriendlyName "overbright factor"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x_            
            // metadata: MPropertyFriendlyName "HSV Shift Control Point"
            // metadata: MPropertySortPriority "300"
            std::int32_t m_nHSVShiftControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "Apply fog to particle"
            // metadata: MPropertySortPriority "300"
            source2sdk::particles::ParticleFogType_t m_nFogType; // 0x_            
            // metadata: MPropertyFriendlyName "Fog Scale"
            // metadata: MPropertySortPriority "300"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFogAmount; // 0x_            
            // metadata: MPropertyFriendlyName "Apply fog of war to color"
            // metadata: MPropertySortPriority "300"
            // metadata: MPropertySuppressExpr "mod != dota"
            bool m_bTintByFOW; // 0x_            
            // metadata: MPropertyFriendlyName "Apply global light to color"
            // metadata: MPropertySortPriority "300"
            // metadata: MPropertySuppressExpr "mod != dota"
            bool m_bTintByGlobalLight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
            // metadata: MPropertyFriendlyName "alpha reference"
            // metadata: MPropertySortPriority "300"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x_            
            // metadata: MPropertyFriendlyName "alpha reference window size"
            // metadata: MPropertySortPriority "300"
            source2sdk::particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x_            
            // metadata: MPropertyFriendlyName "alpha reference type"
            // metadata: MPropertySortPriority "300"
            source2sdk::particles::ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x_            
            // metadata: MPropertyFriendlyName "alpha reference softness"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x_            
            // metadata: MPropertyFriendlyName "source alpha value to map to alpha of zero"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x_            
            // metadata: MPropertyFriendlyName "source alpha value to map to alpha of 1"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertySortPriority "300"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x_            
            // metadata: MPropertyStartGroup "Refraction"
            // metadata: MPropertyFriendlyName "refract background"
            // metadata: MPropertySortPriority "200"
            bool m_bRefract; // 0x_            
            // metadata: MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
            // metadata: MPropertySortPriority "200"
            // metadata: MPropertySuppressExpr "!m_bRefract"
            bool m_bRefractSolid; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "refract amount"
            // metadata: MPropertyAttributeRange "-2 2"
            // metadata: MPropertySortPriority "200"
            // metadata: MPropertySuppressExpr "!m_bRefract"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x_            
            // metadata: MPropertyFriendlyName "refract blur radius"
            // metadata: MPropertySortPriority "200"
            // metadata: MPropertySuppressExpr "!m_bRefract"
            std::int32_t m_nRefractBlurRadius; // 0x_            
            // metadata: MPropertyFriendlyName "refract blur type"
            // metadata: MPropertySortPriority "200"
            // metadata: MPropertySuppressExpr "!m_bRefract"
            source2sdk::particles::BlurFilterType_t m_nRefractBlurType; // 0x_            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
            // metadata: MPropertySortPriority "1100"
            bool m_bOnlyRenderInEffectsBloomPass; // 0x_            
            // metadata: MPropertyFriendlyName "Only Render in effects water pass"
            // metadata: MPropertySortPriority "1050"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffectsWaterPass; // 0x_            
            // metadata: MPropertyFriendlyName "Use Mixed Resolution Rendering"
            // metadata: MPropertySortPriority "1200"
            bool m_bUseMixedResolutionRendering; // 0x_            
            // metadata: MPropertyFriendlyName "Only Render in effects game overlay pass"
            // metadata: MPropertySortPriority "1210"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffecsGameOverlay; // 0x_            
            // metadata: MPropertyStartGroup "Stencil"
            // metadata: MPropertyFriendlyName "stencil test ID"
            // metadata: MPropertySortPriority "0"
            char m_stencilTestID[128]; // 0x_            
            // metadata: MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
            // metadata: MPropertySortPriority "0"
            bool m_bStencilTestExclude; // 0x_            
            // metadata: MPropertyFriendlyName "stencil write ID"
            // metadata: MPropertySortPriority "0"
            char m_stencilWriteID[128]; // 0x_            
            // metadata: MPropertyFriendlyName "write stencil on z-buffer test success"
            // metadata: MPropertySortPriority "0"
            bool m_bWriteStencilOnDepthPass; // 0x_            
            // metadata: MPropertyFriendlyName "write stencil on z-buffer test failure"
            // metadata: MPropertySortPriority "0"
            bool m_bWriteStencilOnDepthFail; // 0x_            
            // metadata: MPropertyStartGroup "Depth buffer control and effects"
            // metadata: MPropertyFriendlyName "reverse z-buffer test"
            // metadata: MPropertySortPriority "900"
            bool m_bReverseZBuffering; // 0x_            
            // metadata: MPropertyFriendlyName "disable z-buffer test"
            // metadata: MPropertySortPriority "900"
            bool m_bDisableZBuffering; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Depth feathering mode"
            // metadata: MPropertySortPriority "900"
            source2sdk::particles::ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x_            
            // metadata: MPropertyFriendlyName "particle feathering closest distance to surface"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x_            
            // metadata: MPropertyFriendlyName "particle feathering farthest distance to surface"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x_            
            // metadata: MPropertyFriendlyName "particle feathering alpha filter"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x_            
            // metadata: MPropertyFriendlyName "particle feathering depthmap layer filter"
            // metadata: MPropertySortPriority "900"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // 0x_            
            // metadata: MPropertyFriendlyName "depth comparison bias"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flDepthBias; // 0x_            
            // metadata: MPropertyFriendlyName "Sort Method"
            // metadata: MPropertySortPriority "900"
            source2sdk::particles::ParticleSortingChoiceList_t m_nSortMethod; // 0x_            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "blend sequence animation frames"
            // metadata: MPropertySortPriority "500"
            bool m_bBlendFramesSeq0; // 0x_            
            // metadata: MPropertyFriendlyName "use max-luminance blending for sequence"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bBlendFramesSeq0"
            bool m_bMaxLuminanceBlendingSequence0; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseRendererSource2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CBaseRendererSource2) == 0x_);
    };
};

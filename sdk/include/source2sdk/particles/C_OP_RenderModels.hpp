#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ModelReference_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/RenderModelSubModelFieldType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0x2b18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderModels : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
            // metadata: MPropertySortPriority "1100"
            bool m_bOnlyRenderInEffectsBloomPass; // 0x210            
            // metadata: MPropertyFriendlyName "Only Render in effects water pass"
            // metadata: MPropertySortPriority "1050"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffectsWaterPass; // 0x211            
            // metadata: MPropertyFriendlyName "Use Mixed Resolution Rendering"
            // metadata: MPropertySortPriority "1200"
            bool m_bUseMixedResolutionRendering; // 0x212            
            // metadata: MPropertyFriendlyName "Only Render in effects game overlay pass"
            // metadata: MPropertySortPriority "1210"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bOnlyRenderInEffecsGameOverlay; // 0x213            
            uint8_t _pad0214[0x4]; // 0x214
            // metadata: MPropertyFriendlyName "models"
            // metadata: MParticleRequireDefaultArrayEntry
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "775"
            // m_ModelList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ModelReference_t> m_ModelList;
            char m_ModelList[0x18]; // 0x218            
            // metadata: MPropertyFriendlyName "bodygroup field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nBodyGroupField; // 0x230            
            // metadata: MPropertyFriendlyName "submodel field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nSubModelField; // 0x234            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "ignore normal"
            // metadata: MPropertySortPriority "750"
            bool m_bIgnoreNormal; // 0x238            
            // metadata: MPropertyFriendlyName "orient model z to normal"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_bIgnoreNormal"
            bool m_bOrientZ; // 0x239            
            // metadata: MPropertyFriendlyName "center mesh"
            // metadata: MPropertySortPriority "750"
            bool m_bCenterOffset; // 0x23a            
            uint8_t _pad023b[0x5]; // 0x23b
            // metadata: MPropertyFriendlyName "model local offset"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalOffset; // 0x240            
            // metadata: MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalRotation; // 0x8b8            
            // metadata: MPropertyStartGroup "Model Scale"
            // metadata: MPropertyFriendlyName "ignore radius"
            // metadata: MPropertySortPriority "700"
            bool m_bIgnoreRadius; // 0xf30            
            uint8_t _pad0f31[0x3]; // 0xf31
            // metadata: MPropertyFriendlyName "model scale CP"
            // metadata: MPropertySortPriority "700"
            std::int32_t m_nModelScaleCP; // 0xf34            
            // metadata: MPropertyFriendlyName "model component scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CPerParticleVecInput m_vecComponentScale; // 0xf38            
            // metadata: MPropertyFriendlyName "apply scales in local model space"
            // metadata: MPropertySortPriority "700"
            bool m_bLocalScale; // 0x15b0            
            uint8_t _pad15b1[0x3]; // 0x15b1
            // metadata: MPropertyFriendlyName "model size cull bloat"
            // metadata: MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
            std::int32_t m_nSizeCullBloat; // 0x15b4            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animated"
            // metadata: MPropertySortPriority "500"
            bool m_bAnimated; // 0x15b8            
            uint8_t _pad15b9[0x7]; // 0x15b9
            // metadata: MPropertyFriendlyName "animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            source2sdk::particleslib::CPerParticleFloatInput m_flAnimationRate; // 0x15c0            
            // metadata: MPropertyFriendlyName "scale animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bScaleAnimationRate; // 0x1720            
            // metadata: MPropertyFriendlyName "force looping animations"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bForceLoopingAnimation; // 0x1721            
            // metadata: MPropertyFriendlyName "reset animation frame on stop"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bResetAnimOnStop; // 0x1722            
            // metadata: MPropertyFriendlyName "set animation frame manually"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bManualAnimFrame; // 0x1723            
            // metadata: MPropertyFriendlyName "animation rate scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bScaleAnimationRate)"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationScaleField; // 0x1724            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animation sequence field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationField; // 0x1728            
            // metadata: MPropertyFriendlyName "manual animation frame field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
            source2sdk::particles::ParticleAttributeIndex_t m_nManualFrameField; // 0x172c            
            // metadata: MPropertyFriendlyName "activity override"
            // metadata: MPropertySuppressExpr "mod != dota"
            // metadata: MPropertySortPriority "500"
            char m_ActivityName[256]; // 0x1730            
            // metadata: MPropertyFriendlyName "sequence override"
            // metadata: MPropertySuppressExpr "mod == dota"
            // metadata: MPropertySortPriority "500"
            char m_SequenceName[256]; // 0x1830            
            // metadata: MPropertyFriendlyName "Enable Cloth Simulation"
            bool m_bEnableClothSimulation; // 0x1930            
            // metadata: MPropertyFriendlyName "With Cloth Effect"
            // metadata: MPropertySortPriority "500"
            char m_ClothEffectName[64]; // 0x1931            
            uint8_t _pad1971[0x7]; // 0x1971
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "material override"
            // metadata: MPropertySortPriority "600"
            // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
            char m_hOverrideMaterial[0x8]; // 0x1978            
            // metadata: MPropertyFriendlyName "override translucent materials"
            // metadata: MPropertySortPriority "600"
            bool m_bOverrideTranslucentMaterials; // 0x1980            
            uint8_t _pad1981[0x7]; // 0x1981
            // metadata: MPropertyFriendlyName "skin number"
            // metadata: MPropertySortPriority "600"
            source2sdk::particleslib::CPerParticleFloatInput m_nSkin; // 0x1988            
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "600"
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x18]; // 0x1ae8            
            // metadata: MPropertyStartGroup "Model Overrides"
            // metadata: MPropertyFriendlyName "render filter"
            source2sdk::particleslib::CPerParticleFloatInput m_flRenderFilter; // 0x1b00            
            // metadata: MPropertyFriendlyName "model list selection override"
            source2sdk::particleslib::CPerParticleFloatInput m_flManualModelSelection; // 0x1c60            
            // metadata: MPropertyFriendlyName "input model"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x1dc0            
            // metadata: MPropertyFriendlyName "model LOD"
            std::int32_t m_nLOD; // 0x1e20            
            // metadata: MPropertyFriendlyName "model override economy loadout slot type"
            char m_EconSlotName[256]; // 0x1e24            
            // metadata: MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
            bool m_bOriginalModel; // 0x1f24            
            // metadata: MPropertyFriendlyName "suppress tinting of the model"
            bool m_bSuppressTint; // 0x1f25            
            uint8_t _pad1f26[0x2]; // 0x1f26
            // metadata: MPropertyFriendlyName "SubModel Field Type"
            source2sdk::particles::RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x1f28            
            // metadata: MPropertyFriendlyName "disable shadows"
            bool m_bDisableShadows; // 0x1f2c            
            // metadata: MPropertyFriendlyName "disable depth prepass"
            bool m_bDisableDepthPrepass; // 0x1f2d            
            // metadata: MPropertyFriendlyName "accept decals"
            bool m_bAcceptsDecals; // 0x1f2e            
            // metadata: MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
            bool m_bForceDrawInterlevedWithSiblings; // 0x1f2f            
            // metadata: MPropertyFriendlyName "do not draw in particle pass"
            bool m_bDoNotDrawInParticlePass; // 0x1f30            
            // metadata: MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
            bool m_bAllowApproximateTransforms; // 0x1f31            
            // metadata: MPropertyFriendlyName "render attribute"
            char m_szRenderAttribute[260]; // 0x1f32            
            uint8_t _pad2036[0x2]; // 0x2036
            // metadata: MPropertyStartGroup "+Renderer Modifiers"
            // metadata: MPropertyFriendlyName "Radius Scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x2038            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x2198            
            // metadata: MPropertyFriendlyName "rotation roll scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x22f8            
            // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x2458            
            uint8_t _pad245c[0x4]; // 0x245c
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x2460            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x2ad8            
            uint8_t _pad2adc[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderModels) == 0x2b18);
    };
};

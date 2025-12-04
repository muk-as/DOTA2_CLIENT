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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "models"
            // metadata: MParticleRequireDefaultArrayEntry
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "775"
            // m_ModelList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ModelReference_t> m_ModelList;
            char m_ModelList[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "bodygroup field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nBodyGroupField; // 0x_            
            // metadata: MPropertyFriendlyName "submodel field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nSubModelField; // 0x_            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "ignore normal"
            // metadata: MPropertySortPriority "750"
            bool m_bIgnoreNormal; // 0x_            
            // metadata: MPropertyFriendlyName "orient model z to normal"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_bIgnoreNormal"
            bool m_bOrientZ; // 0x_            
            // metadata: MPropertyFriendlyName "center mesh"
            // metadata: MPropertySortPriority "750"
            bool m_bCenterOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "model local offset"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalOffset; // 0x_            
            // metadata: MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
            // metadata: MPropertySortPriority "750"
            source2sdk::particleslib::CPerParticleVecInput m_vecLocalRotation; // 0x_            
            // metadata: MPropertyStartGroup "Model Scale"
            // metadata: MPropertyFriendlyName "ignore radius"
            // metadata: MPropertySortPriority "700"
            bool m_bIgnoreRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "model scale CP"
            // metadata: MPropertySortPriority "700"
            std::int32_t m_nModelScaleCP; // 0x_            
            // metadata: MPropertyFriendlyName "model component scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CPerParticleVecInput m_vecComponentScale; // 0x_            
            // metadata: MPropertyFriendlyName "apply scales in local model space"
            // metadata: MPropertySortPriority "700"
            bool m_bLocalScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "model size cull bloat"
            // metadata: MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
            std::int32_t m_nSizeCullBloat; // 0x_            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animated"
            // metadata: MPropertySortPriority "500"
            bool m_bAnimated; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            source2sdk::particleslib::CPerParticleFloatInput m_flAnimationRate; // 0x_            
            // metadata: MPropertyFriendlyName "scale animation rate"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bScaleAnimationRate; // 0x_            
            // metadata: MPropertyFriendlyName "force looping animations"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bForceLoopingAnimation; // 0x_            
            // metadata: MPropertyFriendlyName "reset animation frame on stop"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bResetAnimOnStop; // 0x_            
            // metadata: MPropertyFriendlyName "set animation frame manually"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!m_bAnimated"
            bool m_bManualAnimFrame; // 0x_            
            // metadata: MPropertyFriendlyName "animation rate scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bScaleAnimationRate)"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationScaleField; // 0x_            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "animation sequence field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            source2sdk::particles::ParticleAttributeIndex_t m_nAnimationField; // 0x_            
            // metadata: MPropertyFriendlyName "manual animation frame field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "500"
            // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
            source2sdk::particles::ParticleAttributeIndex_t m_nManualFrameField; // 0x_            
            // metadata: MPropertyFriendlyName "activity override"
            // metadata: MPropertySuppressExpr "mod != dota"
            // metadata: MPropertySortPriority "500"
            char m_ActivityName[256]; // 0x_            
            // metadata: MPropertyFriendlyName "sequence override"
            // metadata: MPropertySuppressExpr "mod == dota"
            // metadata: MPropertySortPriority "500"
            char m_SequenceName[256]; // 0x_            
            // metadata: MPropertyFriendlyName "Enable Cloth Simulation"
            bool m_bEnableClothSimulation; // 0x_            
            // metadata: MPropertyFriendlyName "With Cloth Effect"
            // metadata: MPropertySortPriority "500"
            char m_ClothEffectName[64]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "material override"
            // metadata: MPropertySortPriority "600"
            // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
            char m_hOverrideMaterial[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "override translucent materials"
            // metadata: MPropertySortPriority "600"
            bool m_bOverrideTranslucentMaterials; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "skin number"
            // metadata: MPropertySortPriority "600"
            source2sdk::particleslib::CPerParticleFloatInput m_nSkin; // 0x_            
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertySortPriority "600"
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x_]; // 0x_            
            // metadata: MPropertyStartGroup "Model Overrides"
            // metadata: MPropertyFriendlyName "render filter"
            source2sdk::particleslib::CPerParticleFloatInput m_flRenderFilter; // 0x_            
            // metadata: MPropertyFriendlyName "model list selection override"
            source2sdk::particleslib::CPerParticleFloatInput m_flManualModelSelection; // 0x_            
            // metadata: MPropertyFriendlyName "input model"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyFriendlyName "model LOD"
            std::int32_t m_nLOD; // 0x_            
            // metadata: MPropertyFriendlyName "model override economy loadout slot type"
            char m_EconSlotName[256]; // 0x_            
            // metadata: MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
            bool m_bOriginalModel; // 0x_            
            // metadata: MPropertyFriendlyName "suppress tinting of the model"
            bool m_bSuppressTint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "SubModel Field Type"
            source2sdk::particles::RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x_            
            // metadata: MPropertyFriendlyName "disable shadows"
            bool m_bDisableShadows; // 0x_            
            // metadata: MPropertyFriendlyName "disable depth prepass"
            bool m_bDisableDepthPrepass; // 0x_            
            // metadata: MPropertyFriendlyName "accept decals"
            bool m_bAcceptsDecals; // 0x_            
            // metadata: MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
            bool m_bForceDrawInterlevedWithSiblings; // 0x_            
            // metadata: MPropertyFriendlyName "do not draw in particle pass"
            bool m_bDoNotDrawInParticlePass; // 0x_            
            // metadata: MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
            bool m_bAllowApproximateTransforms; // 0x_            
            // metadata: MPropertyFriendlyName "render attribute"
            char m_szRenderAttribute[260]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "+Renderer Modifiers"
            // metadata: MPropertyFriendlyName "Radius Scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "alpha scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x_            
            // metadata: MPropertyFriendlyName "rotation roll scale"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x_            
            // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "color blend"
            // metadata: MPropertySortPriority "700"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x_            
            // metadata: MPropertyFriendlyName "color blend type"
            // metadata: MPropertySortPriority "700"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderModels) == 0x_);
    };
};

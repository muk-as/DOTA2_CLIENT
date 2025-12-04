#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/RenderProjectedMaterial_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        class C_OP_RenderProjected : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "project on characters"
            // metadata: MPropertySuppressExpr "mod != dota"
            bool m_bProjectCharacter; // 0x_            
            // metadata: MPropertyFriendlyName "project on world"
            // metadata: MPropertySuppressExpr "mod != dota"
            bool m_bProjectWorld; // 0x_            
            // metadata: MPropertyFriendlyName "project on water"
            // metadata: MPropertySuppressExpr "mod != dota"
            bool m_bProjectWater; // 0x_            
            // metadata: MPropertyFriendlyName "flip horizontal"
            bool m_bFlipHorizontal; // 0x_            
            // metadata: MPropertyFriendlyName "enable projected depth controls"
            bool m_bEnableProjectedDepthControls; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "min projection depth"
            // metadata: MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
            float m_flMinProjectionDepth; // 0x_            
            // metadata: MPropertyFriendlyName "max projection depth"
            // metadata: MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
            float m_flMaxProjectionDepth; // 0x_            
            // metadata: MPropertyFriendlyName "materials"
            // metadata: MParticleRequireDefaultArrayEntry
            // metadata: MPropertyAutoExpandSelf
            // m_vecProjectedMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::RenderProjectedMaterial_t> m_vecProjectedMaterials;
            char m_vecProjectedMaterials[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "material selection"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaterialSelection; // 0x_            
            // metadata: MPropertyFriendlyName "sheet animation time scale"
            float m_flAnimationTimeScale; // 0x_            
            // metadata: MPropertyFriendlyName "orient to normal"
            bool m_bOrientToNormal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x_]; // 0x_            
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
        
        // Cannot assert offsets of fields in C_OP_RenderProjected because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderProjected) == 0x_);
    };
};

#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/RenderProjectedMaterial_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderProjected : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "project on characters"
        bool m_bProjectCharacter; // 0x210        
        // metadata: MPropertyFriendlyName "project on world"
        bool m_bProjectWorld; // 0x211        
        // metadata: MPropertyFriendlyName "project on water"
        bool m_bProjectWater; // 0x212        
        // metadata: MPropertyFriendlyName "flip horizontal"
        bool m_bFlipHorizontal; // 0x213        
        // metadata: MPropertyFriendlyName "enable projected depth controls"
        bool m_bEnableProjectedDepthControls; // 0x214        
        [[maybe_unused]] std::uint8_t pad_0x215[0x3]; // 0x215
        // metadata: MPropertyFriendlyName "min projection depth"
        // metadata: MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
        float m_flMinProjectionDepth; // 0x218        
        // metadata: MPropertyFriendlyName "max projection depth"
        // metadata: MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
        float m_flMaxProjectionDepth; // 0x21c        
        // metadata: MPropertyFriendlyName "materials"
        // metadata: MParticleRequireDefaultArrayEntry
        // metadata: MPropertyAutoExpandSelf
        // m_vecProjectedMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::RenderProjectedMaterial_t> m_vecProjectedMaterials;
        char m_vecProjectedMaterials[0x18]; // 0x220        
        // metadata: MPropertyFriendlyName "material selection"
        particleslib::CPerParticleFloatInput m_flMaterialSelection; // 0x238        
        // metadata: MPropertyFriendlyName "sheet animation time scale"
        float m_flAnimationTimeScale; // 0x398        
        // metadata: MPropertyFriendlyName "orient to normal"
        bool m_bOrientToNormal; // 0x39c        
        [[maybe_unused]] std::uint8_t pad_0x39d[0x3]; // 0x39d
        // metadata: MPropertyFriendlyName "material variables"
        // metadata: MPropertyAutoExpandSelf
        // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::MaterialVariable_t> m_MaterialVars;
        char m_MaterialVars[0x18]; // 0x3a0        
        // metadata: MPropertyStartGroup "+Renderer Modifiers"
        // metadata: MPropertyFriendlyName "Radius Scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x3b8        
        // metadata: MPropertyFriendlyName "alpha scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x518        
        // metadata: MPropertyFriendlyName "rotation roll scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x678        
        // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "700"
        particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7dc[0x4]; // 0x7dc
        // metadata: MPropertyFriendlyName "color blend"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x7e0        
        // metadata: MPropertyFriendlyName "color blend type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0xe58        
        [[maybe_unused]] std::uint8_t pad_0xe5c[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderProjected because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderProjected) == 0xe78);
};

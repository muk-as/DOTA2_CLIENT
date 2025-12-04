#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/CReplicationParameters.hpp"
#include "source2sdk/particles/ParticleLightingQuality_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderSprites : public source2sdk::particles::CBaseRendererSource2
        {
        public:
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "sequence id override"
            // metadata: MPropertySortPriority "500"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x_            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x_            
            // metadata: MPropertyFriendlyName "orientation control point"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            std::int32_t m_nOrientationControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "enable yaw for particles aligned to normals"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            bool m_bUseYawWithNormalAligned; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Fading and culling"
            // metadata: MPropertyFriendlyName "minimum visual screen size"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMinSize; // 0x_            
            // metadata: MPropertyFriendlyName "maximum visual screen size"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flMaxSize; // 0x_            
            // metadata: MPropertyFriendlyName "Factor to map size adjustment to alpha"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x_            
            // metadata: MPropertyFriendlyName "screen size to start fading"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x_            
            // metadata: MPropertyFriendlyName "screen size to fade away"
            // metadata: MPropertySortPriority "1000"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x_            
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x_            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x_            
            // metadata: MPropertyStartGroup "Distance to alpha coding"
            // metadata: MPropertyFriendlyName "distance alpha"
            // metadata: MPropertySortPriority "0"
            bool m_bDistanceAlpha; // 0x_            
            // metadata: MPropertyFriendlyName "use soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            bool m_bSoftEdges; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "start value for soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            float m_flEdgeSoftnessStart; // 0x_            
            // metadata: MPropertyFriendlyName "end value for soft edges for distance alpha"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
            float m_flEdgeSoftnessEnd; // 0x_            
            // metadata: MPropertyStartGroup "Outlining"
            // metadata: MPropertyFriendlyName "enable particle outlining"
            // metadata: MPropertySortPriority "0"
            bool m_bOutline; // 0x_            
            // metadata: MPropertyFriendlyName "outline color"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            Color m_OutlineColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "outline alpha"
            // metadata: MPropertyAttributeRange "0 255"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            std::int32_t m_nOutlineAlpha; // 0x_            
            // metadata: MPropertyFriendlyName "outline start 0"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineStart0; // 0x_            
            // metadata: MPropertyFriendlyName "outline start 1"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineStart1; // 0x_            
            // metadata: MPropertyFriendlyName "outline end 0"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineEnd0; // 0x_            
            // metadata: MPropertyFriendlyName "outline end 1"
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertySuppressExpr "!m_bOutline"
            float m_flOutlineEnd1; // 0x_            
            // metadata: MPropertyStartGroup "Lighting and Shadows"
            // metadata: MPropertyFriendlyName "lighting mode"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particles::ParticleLightingQuality_t m_nLightingMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "vertex lighting tessellation (0-5)"
            // metadata: MPropertyAttributeRange "0 5"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x_            
            // metadata: MPropertyFriendlyName "lighting directionality"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x_            
            // metadata: MPropertyFriendlyName "Particle Shadows"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "mod != csgo"
            bool m_bParticleShadows; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Shadow Density"
            // metadata: MPropertySortPriority "400"
            // metadata: MPropertySuppressExpr "!m_bParticleShadows"
            float m_flShadowDensity; // 0x_            
            // metadata: MPropertyStartGroup "Replication"
            // metadata: MPropertyFriendlyName "Replication settings"
            source2sdk::particles::CReplicationParameters m_replicationParameters; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderSprites because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderSprites) == 0x_);
    };
};

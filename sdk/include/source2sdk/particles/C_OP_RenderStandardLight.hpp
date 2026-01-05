#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleLightBehaviorChoiceList_t.hpp"
#include "source2sdk/particles/ParticleLightFogLightingMode_t.hpp"
#include "source2sdk/particles/ParticleLightTypeChoiceList_t.hpp"
#include "source2sdk/particles/StandardLightingAttenuationStyle_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
        class C_OP_RenderStandardLight : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "light type"
            source2sdk::particles::ParticleLightTypeChoiceList_t m_nLightType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "color blend"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x_            
            // metadata: MPropertyFriendlyName "color blend type"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "intensity"
            source2sdk::particleslib::CPerParticleFloatInput m_flIntensity; // 0x_            
            // metadata: MPropertyFriendlyName "cast shadows"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bCastShadows; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "inner cone angle"
            // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTheta; // 0x_            
            // metadata: MPropertyFriendlyName "outer cone angle"
            // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flPhi; // 0x_            
            // metadata: MPropertyFriendlyName "light radius multiplier"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusMultiplier; // 0x_            
            // metadata: MPropertyFriendlyName "attenuation type"
            source2sdk::particles::StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "falloff linearity"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flFalloffLinearity; // 0x_            
            // metadata: MPropertyFriendlyName "falloff fifty percent"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0x_            
            // metadata: MPropertyFriendlyName "falloff zero percent"
            // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x_            
            // metadata: MPropertyFriendlyName "render diffuse"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bRenderDiffuse; // 0x_            
            // metadata: MPropertyFriendlyName "render specular"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            bool m_bRenderSpecular; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "light cookie string"
            CUtlString m_lightCookie; // 0x_            
            // metadata: MPropertyFriendlyName "light priority"
            std::int32_t m_nPriority; // 0x_            
            // metadata: MPropertyFriendlyName "fog lighting mode"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particles::ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x_            
            // metadata: MPropertyFriendlyName "fog contribution"
            // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flFogContribution; // 0x_            
            // metadata: MPropertyFriendlyName "capsule behavior"
            source2sdk::particles::ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x_            
            // metadata: MPropertyStartGroup "Capsule Light Controls"
            // metadata: MPropertyFriendlyName "capsule length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            float m_flCapsuleLength; // 0x_            
            // metadata: MPropertyFriendlyName "reverse point order"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            bool m_bReverseOrder; // 0x_            
            // metadata: MPropertyFriendlyName "Closed loop"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
            bool m_bClosedLoop; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Anchor point source"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            source2sdk::particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x_            
            // metadata: MPropertyFriendlyName "max length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flMaxLength; // 0x_            
            // metadata: MPropertyFriendlyName "min length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flMinLength; // 0x_            
            // metadata: MPropertyFriendlyName "ignore delta time"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            bool m_bIgnoreDT; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "constrain radius to no more than this times the length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flConstrainRadiusToLengthRatio; // 0x_            
            // metadata: MPropertyFriendlyName "amount to scale trail length by"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flLengthScale; // 0x_            
            // metadata: MPropertyFriendlyName "how long before a trail grows to its full length"
            // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
            float m_flLengthFadeInTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderStandardLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderStandardLight) == 0x_);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleVisibilityInputs
        {
        public:
            // metadata: MPropertyFriendlyName "camera depth bias"
            float m_flCameraBias; // 0x_            
            // metadata: MPropertyFriendlyName "input control point number"
            std::int32_t m_nCPin; // 0x_            
            // metadata: MPropertyFriendlyName "input proxy radius"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flProxyRadius; // 0x_            
            // metadata: MPropertyFriendlyName "input proxy pixel visibility minimum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input proxy pixel visibility maximum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "input proxy pixel visibility fade out time"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flInputPixelVisFade; // 0x_            
            // metadata: MPropertyFriendlyName "input proxy unsupported hardware fallback value"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flNoPixelVisibilityFallback; // 0x_            
            // metadata: MPropertyFriendlyName "input distance minimum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flDistanceInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input distance maximum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flDistanceInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "input dot minimum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flDotInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input dot maximum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flDotInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "input dot use CP angles"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            bool m_bDotCPAngles; // 0x_            
            // metadata: MPropertyFriendlyName "input dot use Camera angles"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            bool m_bDotCameraAngles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "output alpha scale minimum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flAlphaScaleMin; // 0x_            
            // metadata: MPropertyFriendlyName "output alpha scale maximum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flAlphaScaleMax; // 0x_            
            // metadata: MPropertyFriendlyName "output radius scale minimum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flRadiusScaleMin; // 0x_            
            // metadata: MPropertyFriendlyName "output radius scale maximum"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flRadiusScaleMax; // 0x_            
            // metadata: MPropertyFriendlyName "output radius FOV scale base"
            // metadata: MPropertySuppressExpr "m_nCPin == -1"
            float m_flRadiusScaleFOVBase; // 0x_            
            // metadata: MPropertyFriendlyName "vr camera right eye"
            // metadata: MParticleAdvancedField
            bool m_bRightEye; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flCameraBias) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_nCPin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flProxyRadius) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flInputMin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flInputMax) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flInputPixelVisFade) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flNoPixelVisibilityFallback) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flDistanceInputMin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flDistanceInputMax) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flDotInputMin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flDotInputMax) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_bDotCPAngles) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_bDotCameraAngles) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flAlphaScaleMin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flAlphaScaleMax) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flRadiusScaleMin) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flRadiusScaleMax) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_flRadiusScaleFOVBase) == 0x_);
        static_assert(offsetof(source2sdk::particles::CParticleVisibilityInputs, m_bRightEye) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::CParticleVisibilityInputs) == 0x_);
    };
};

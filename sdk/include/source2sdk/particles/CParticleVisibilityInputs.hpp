#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x48
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleVisibilityInputs
    {
    public:
        // metadata: MPropertyFriendlyName "camera depth bias"
        float m_flCameraBias; // 0x0        
        // metadata: MPropertyFriendlyName "input control point number"
        int32_t m_nCPin; // 0x4        
        // metadata: MPropertyFriendlyName "input proxy radius"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flProxyRadius; // 0x8        
        // metadata: MPropertyFriendlyName "input proxy pixel visibility minimum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flInputMin; // 0xc        
        // metadata: MPropertyFriendlyName "input proxy pixel visibility maximum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flInputMax; // 0x10        
        // metadata: MPropertyFriendlyName "input proxy pixel visibility fade out time"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flInputPixelVisFade; // 0x14        
        // metadata: MPropertyFriendlyName "input proxy unsupported hardware fallback value"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flNoPixelVisibilityFallback; // 0x18        
        // metadata: MPropertyFriendlyName "input distance minimum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flDistanceInputMin; // 0x1c        
        // metadata: MPropertyFriendlyName "input distance maximum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flDistanceInputMax; // 0x20        
        // metadata: MPropertyFriendlyName "input dot minimum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flDotInputMin; // 0x24        
        // metadata: MPropertyFriendlyName "input dot maximum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flDotInputMax; // 0x28        
        // metadata: MPropertyFriendlyName "input dot use CP angles"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        bool m_bDotCPAngles; // 0x2c        
        // metadata: MPropertyFriendlyName "input dot use Camera angles"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        bool m_bDotCameraAngles; // 0x2d        
        [[maybe_unused]] std::uint8_t pad_0x2e[0x2]; // 0x2e
        // metadata: MPropertyFriendlyName "output alpha scale minimum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flAlphaScaleMin; // 0x30        
        // metadata: MPropertyFriendlyName "output alpha scale maximum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flAlphaScaleMax; // 0x34        
        // metadata: MPropertyFriendlyName "output radius scale minimum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flRadiusScaleMin; // 0x38        
        // metadata: MPropertyFriendlyName "output radius scale maximum"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flRadiusScaleMax; // 0x3c        
        // metadata: MPropertyFriendlyName "output radius FOV scale base"
        // metadata: MPropertySuppressExpr "m_nCPin == -1"
        float m_flRadiusScaleFOVBase; // 0x40        
        // metadata: MPropertyFriendlyName "vr camera right eye"
        // metadata: MParticleAdvancedField
        bool m_bRightEye; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CParticleVisibilityInputs, m_flCameraBias) == 0x0);
    static_assert(offsetof(CParticleVisibilityInputs, m_nCPin) == 0x4);
    static_assert(offsetof(CParticleVisibilityInputs, m_flProxyRadius) == 0x8);
    static_assert(offsetof(CParticleVisibilityInputs, m_flInputMin) == 0xc);
    static_assert(offsetof(CParticleVisibilityInputs, m_flInputMax) == 0x10);
    static_assert(offsetof(CParticleVisibilityInputs, m_flInputPixelVisFade) == 0x14);
    static_assert(offsetof(CParticleVisibilityInputs, m_flNoPixelVisibilityFallback) == 0x18);
    static_assert(offsetof(CParticleVisibilityInputs, m_flDistanceInputMin) == 0x1c);
    static_assert(offsetof(CParticleVisibilityInputs, m_flDistanceInputMax) == 0x20);
    static_assert(offsetof(CParticleVisibilityInputs, m_flDotInputMin) == 0x24);
    static_assert(offsetof(CParticleVisibilityInputs, m_flDotInputMax) == 0x28);
    static_assert(offsetof(CParticleVisibilityInputs, m_bDotCPAngles) == 0x2c);
    static_assert(offsetof(CParticleVisibilityInputs, m_bDotCameraAngles) == 0x2d);
    static_assert(offsetof(CParticleVisibilityInputs, m_flAlphaScaleMin) == 0x30);
    static_assert(offsetof(CParticleVisibilityInputs, m_flAlphaScaleMax) == 0x34);
    static_assert(offsetof(CParticleVisibilityInputs, m_flRadiusScaleMin) == 0x38);
    static_assert(offsetof(CParticleVisibilityInputs, m_flRadiusScaleMax) == 0x3c);
    static_assert(offsetof(CParticleVisibilityInputs, m_flRadiusScaleFOVBase) == 0x40);
    static_assert(offsetof(CParticleVisibilityInputs, m_bRightEye) == 0x44);
    
    static_assert(sizeof(CParticleVisibilityInputs) == 0x48);
};

#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x68
    // Has VTable
    // Has Trivial Destructor
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector dirPrimary"
    // static metadata: MNetworkVarNames "Color colorPrimary"
    // static metadata: MNetworkVarNames "Color colorSecondary"
    // static metadata: MNetworkVarNames "Color colorPrimaryLerpTo"
    // static metadata: MNetworkVarNames "Color colorSecondaryLerpTo"
    // static metadata: MNetworkVarNames "float32 start"
    // static metadata: MNetworkVarNames "float32 end"
    // static metadata: MNetworkVarNames "float32 farz"
    // static metadata: MNetworkVarNames "float32 maxdensity"
    // static metadata: MNetworkVarNames "float32 exponent"
    // static metadata: MNetworkVarNames "float32 HDRColorScale"
    // static metadata: MNetworkVarNames "float32 skyboxFogFactor"
    // static metadata: MNetworkVarNames "float32 skyboxFogFactorLerpTo"
    // static metadata: MNetworkVarNames "float32 startLerpTo"
    // static metadata: MNetworkVarNames "float32 endLerpTo"
    // static metadata: MNetworkVarNames "float32 maxdensityLerpTo"
    // static metadata: MNetworkVarNames "GameTime_t lerptime"
    // static metadata: MNetworkVarNames "float32 duration"
    // static metadata: MNetworkVarNames "float32 blendtobackground"
    // static metadata: MNetworkVarNames "float32 scattering"
    // static metadata: MNetworkVarNames "float32 locallightscale"
    // static metadata: MNetworkVarNames "bool enable"
    // static metadata: MNetworkVarNames "bool blend"
    // static metadata: MNetworkVarNames "bool m_bNoReflectionFog"
    #pragma pack(push, 1)
    struct fogparams_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector dirPrimary; // 0x8        
        // metadata: MNetworkEnable
        Color colorPrimary; // 0x14        
        // metadata: MNetworkEnable
        Color colorSecondary; // 0x18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        Color colorPrimaryLerpTo; // 0x1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        Color colorSecondaryLerpTo; // 0x20        
        // metadata: MNetworkEnable
        float start; // 0x24        
        // metadata: MNetworkEnable
        float end; // 0x28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float farz; // 0x2c        
        // metadata: MNetworkEnable
        float maxdensity; // 0x30        
        // metadata: MNetworkEnable
        float exponent; // 0x34        
        // metadata: MNetworkEnable
        float HDRColorScale; // 0x38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float skyboxFogFactor; // 0x3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float skyboxFogFactorLerpTo; // 0x40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float startLerpTo; // 0x44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float endLerpTo; // 0x48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float maxdensityLerpTo; // 0x4c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        entity2::GameTime_t lerptime; // 0x50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float duration; // 0x54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float blendtobackground; // 0x58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float scattering; // 0x5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "FogController"
        float locallightscale; // 0x60        
        // metadata: MNetworkEnable
        bool enable; // 0x64        
        // metadata: MNetworkEnable
        bool blend; // 0x65        
        // metadata: MNetworkEnable
        bool m_bNoReflectionFog; // 0x66        
        bool m_bPadding; // 0x67        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(fogparams_t, dirPrimary) == 0x8);
    static_assert(offsetof(fogparams_t, colorPrimary) == 0x14);
    static_assert(offsetof(fogparams_t, colorSecondary) == 0x18);
    static_assert(offsetof(fogparams_t, colorPrimaryLerpTo) == 0x1c);
    static_assert(offsetof(fogparams_t, colorSecondaryLerpTo) == 0x20);
    static_assert(offsetof(fogparams_t, start) == 0x24);
    static_assert(offsetof(fogparams_t, end) == 0x28);
    static_assert(offsetof(fogparams_t, farz) == 0x2c);
    static_assert(offsetof(fogparams_t, maxdensity) == 0x30);
    static_assert(offsetof(fogparams_t, exponent) == 0x34);
    static_assert(offsetof(fogparams_t, HDRColorScale) == 0x38);
    static_assert(offsetof(fogparams_t, skyboxFogFactor) == 0x3c);
    static_assert(offsetof(fogparams_t, skyboxFogFactorLerpTo) == 0x40);
    static_assert(offsetof(fogparams_t, startLerpTo) == 0x44);
    static_assert(offsetof(fogparams_t, endLerpTo) == 0x48);
    static_assert(offsetof(fogparams_t, maxdensityLerpTo) == 0x4c);
    static_assert(offsetof(fogparams_t, lerptime) == 0x50);
    static_assert(offsetof(fogparams_t, duration) == 0x54);
    static_assert(offsetof(fogparams_t, blendtobackground) == 0x58);
    static_assert(offsetof(fogparams_t, scattering) == 0x5c);
    static_assert(offsetof(fogparams_t, locallightscale) == 0x60);
    static_assert(offsetof(fogparams_t, enable) == 0x64);
    static_assert(offsetof(fogparams_t, blend) == 0x65);
    static_assert(offsetof(fogparams_t, m_bNoReflectionFog) == 0x66);
    static_assert(offsetof(fogparams_t, m_bPadding) == 0x67);
    
    static_assert(sizeof(fogparams_t) == 0x68);
};

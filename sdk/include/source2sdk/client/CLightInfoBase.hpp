#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x3d0
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CLightInfoBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        Vector2D m_origin2D; // 0x10        
        Color m_Color[2]; // 0x18        
        float m_LightScale[2]; // 0x20        
        Color m_AmbientColor[2]; // 0x28        
        float m_AmbientScale[2]; // 0x30        
        Color m_ShadowColor[2]; // 0x38        
        Color m_ShadowSecondaryColor[2]; // 0x40        
        float m_ShadowScale[2]; // 0x48        
        float m_ShadowGroundScale[2]; // 0x50        
        Color m_SpecularColor[2]; // 0x58        
        float m_flSpecularPower[2]; // 0x60        
        float m_flSpecularIndependence[2]; // 0x68        
        Vector m_SpecularDirection[2]; // 0x70        
        Vector m_InspectorSpecularDirection[2]; // 0x88        
        Vector m_LightDirection[2]; // 0xa0        
        Vector m_AmbientDirection[2]; // 0xb8        
        Color m_FogColor[2]; // 0xd0        
        float m_FogStart[2]; // 0xd8        
        float m_FogEnd[2]; // 0xe0        
        float m_HeightFogValue[2]; // 0xe8        
        Color m_HeightFogColor[2]; // 0xf0        
        float m_FoWDarkness[2]; // 0xf8        
        float m_FoWColorR[2]; // 0x100        
        float m_FoWColorG[2]; // 0x108        
        float m_FoWColorB[2]; // 0x110        
        Color m_InspectorViewFogColor[2]; // 0x118        
        QAngle m_windAngle; // 0x120        
        float m_flWindAmount[2]; // 0x12c        
        float m_flMinWind; // 0x134        
        float m_flMaxWind; // 0x138        
        float m_flMinGust; // 0x13c        
        float m_flMaxGust; // 0x140        
        float m_flMinGustDelay; // 0x144        
        float m_flMaxGustDelay; // 0x148        
        float m_flGustDuration; // 0x14c        
        float m_flGustDirChange; // 0x150        
        QAngle m_skyboxAngle[2]; // 0x154        
        [[maybe_unused]] std::uint8_t pad_0x16c[0x4]; // 0x16c
        // m_hSkyboxMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyboxMaterial[2];
        char m_hSkyboxMaterial[0x10]; // 0x170        
        Color m_vSkyboxTintColor[2]; // 0x180        
        uint8_t m_nSkyboxFogType; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x189[0x3]; // 0x189
        float m_flSkyboxAngularFogMaxEnd; // 0x18c        
        float m_flSkyboxAngularFogMaxStart; // 0x190        
        float m_flSkyboxAngularFogMinStart; // 0x194        
        float m_flSkyboxAngularFogMinEnd; // 0x198        
        Vector4D m_vAngularParams; // 0x19c        
        Color m_vHeightFogColor[2]; // 0x1ac        
        float m_flFogMaxZ; // 0x1b4        
        float m_flFogDensity[2]; // 0x1b8        
        float m_flFogFalloff; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // m_hFogTexture0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTexture0;
        char m_hFogTexture0[0x8]; // 0x1c8        
        float m_flFogLayer0Rotation; // 0x1d0        
        float m_flFogLayer0Scale; // 0x1d4        
        float m_flFoglayer0ScrollU[2]; // 0x1d8        
        float m_flFoglayer0ScrollV[2]; // 0x1e0        
        // m_hFogTexture1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTexture1;
        char m_hFogTexture1[0x8]; // 0x1e8        
        float m_flFogLayer1Rotation; // 0x1f0        
        float m_flFogLayer1Scale; // 0x1f4        
        float m_flFoglayer1ScrollU[2]; // 0x1f8        
        float m_flFoglayer1ScrollV[2]; // 0x200        
        // m_hFogTextureOpacity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTextureOpacity;
        char m_hFogTextureOpacity[0x8]; // 0x208        
        // m_hWaterFlowMapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hWaterFlowMapTexture;
        char m_hWaterFlowMapTexture[0x8]; // 0x210        
        // m_hFogFlowMapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogFlowMapTexture;
        char m_hFogFlowMapTexture[0x8]; // 0x218        
        float m_flFogExclusionInnerRadius; // 0x220        
        float m_flFogExclusionHeightBias; // 0x224        
        [[maybe_unused]] std::uint8_t pad_0x228[0x4]; // 0x228
        float m_flCausticSpeedScale; // 0x22c        
        float m_flCausticAmplitudeScale; // 0x230        
        [[maybe_unused]] std::uint8_t pad_0x234[0x4]; // 0x234
        // m_hColorWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hColorWarp;
        char m_hColorWarp[0x8]; // 0x238        
        float m_flColorWarpBlendToFull; // 0x240        
        float m_fInnerRadius; // 0x244        
        float m_fOuterRadius; // 0x248        
        float m_flLightning_specular_pow_scale_min; // 0x24c        
        float m_flLightning_specular_pow_scale_max; // 0x250        
        Color m_lightningColor; // 0x254        
        float m_flLightningIntensityMin; // 0x258        
        float m_flLightningIntensityMax; // 0x25c        
        float m_flLightningElevation; // 0x260        
        float m_flLightningSpecularIntensity; // 0x264        
        float m_flFarZOverride; // 0x268        
        float m_flAmbientShadowAmount; // 0x26c        
        int32_t m_nWeatherType; // 0x270        
        [[maybe_unused]] std::uint8_t pad_0x274[0x4]; // 0x274
        CUtlString m_WeatherEffect; // 0x278        
        float m_flLightning_period_min; // 0x280        
        float m_flLightning_period_max; // 0x284        
        float m_flLightning_duration_min; // 0x288        
        float m_flLightning_duration_max; // 0x28c        
        float m_flLightning_fluctuation_min; // 0x290        
        float m_flLightning_fluctuation_max; // 0x294        
        char m_pszLightningSound[260]; // 0x298        
        float m_flNextLightningStartTime; // 0x39c        
        float m_flNextLightningEndTime; // 0x3a0        
        float m_flLightningFluctuationTimeStart; // 0x3a4        
        float m_flLightningFluctuationTimeEnd; // 0x3a8        
        float m_flLightningNumFluctuations; // 0x3ac        
        float m_flNextLightningSoundTime; // 0x3b0        
        bool m_bPlayLightingSound; // 0x3b4        
        [[maybe_unused]] std::uint8_t pad_0x3b5[0x3]; // 0x3b5
        float m_flLightningEventMagnitude; // 0x3b8        
        float m_flLightningScale; // 0x3bc        
        float m_flLightningFluctuation; // 0x3c0        
        float m_flLightningAngle; // 0x3c4        
        float m_flLightningEventPercentage; // 0x3c8        
        [[maybe_unused]] std::uint8_t pad_0x3cc[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CLightInfoBase, m_origin2D) == 0x10);
    static_assert(offsetof(CLightInfoBase, m_Color) == 0x18);
    static_assert(offsetof(CLightInfoBase, m_LightScale) == 0x20);
    static_assert(offsetof(CLightInfoBase, m_AmbientColor) == 0x28);
    static_assert(offsetof(CLightInfoBase, m_AmbientScale) == 0x30);
    static_assert(offsetof(CLightInfoBase, m_ShadowColor) == 0x38);
    static_assert(offsetof(CLightInfoBase, m_ShadowSecondaryColor) == 0x40);
    static_assert(offsetof(CLightInfoBase, m_ShadowScale) == 0x48);
    static_assert(offsetof(CLightInfoBase, m_ShadowGroundScale) == 0x50);
    static_assert(offsetof(CLightInfoBase, m_SpecularColor) == 0x58);
    static_assert(offsetof(CLightInfoBase, m_flSpecularPower) == 0x60);
    static_assert(offsetof(CLightInfoBase, m_flSpecularIndependence) == 0x68);
    static_assert(offsetof(CLightInfoBase, m_SpecularDirection) == 0x70);
    static_assert(offsetof(CLightInfoBase, m_InspectorSpecularDirection) == 0x88);
    static_assert(offsetof(CLightInfoBase, m_LightDirection) == 0xa0);
    static_assert(offsetof(CLightInfoBase, m_AmbientDirection) == 0xb8);
    static_assert(offsetof(CLightInfoBase, m_FogColor) == 0xd0);
    static_assert(offsetof(CLightInfoBase, m_FogStart) == 0xd8);
    static_assert(offsetof(CLightInfoBase, m_FogEnd) == 0xe0);
    static_assert(offsetof(CLightInfoBase, m_HeightFogValue) == 0xe8);
    static_assert(offsetof(CLightInfoBase, m_HeightFogColor) == 0xf0);
    static_assert(offsetof(CLightInfoBase, m_FoWDarkness) == 0xf8);
    static_assert(offsetof(CLightInfoBase, m_FoWColorR) == 0x100);
    static_assert(offsetof(CLightInfoBase, m_FoWColorG) == 0x108);
    static_assert(offsetof(CLightInfoBase, m_FoWColorB) == 0x110);
    static_assert(offsetof(CLightInfoBase, m_InspectorViewFogColor) == 0x118);
    static_assert(offsetof(CLightInfoBase, m_windAngle) == 0x120);
    static_assert(offsetof(CLightInfoBase, m_flWindAmount) == 0x12c);
    static_assert(offsetof(CLightInfoBase, m_flMinWind) == 0x134);
    static_assert(offsetof(CLightInfoBase, m_flMaxWind) == 0x138);
    static_assert(offsetof(CLightInfoBase, m_flMinGust) == 0x13c);
    static_assert(offsetof(CLightInfoBase, m_flMaxGust) == 0x140);
    static_assert(offsetof(CLightInfoBase, m_flMinGustDelay) == 0x144);
    static_assert(offsetof(CLightInfoBase, m_flMaxGustDelay) == 0x148);
    static_assert(offsetof(CLightInfoBase, m_flGustDuration) == 0x14c);
    static_assert(offsetof(CLightInfoBase, m_flGustDirChange) == 0x150);
    static_assert(offsetof(CLightInfoBase, m_skyboxAngle) == 0x154);
    static_assert(offsetof(CLightInfoBase, m_hSkyboxMaterial) == 0x170);
    static_assert(offsetof(CLightInfoBase, m_vSkyboxTintColor) == 0x180);
    static_assert(offsetof(CLightInfoBase, m_nSkyboxFogType) == 0x188);
    static_assert(offsetof(CLightInfoBase, m_flSkyboxAngularFogMaxEnd) == 0x18c);
    static_assert(offsetof(CLightInfoBase, m_flSkyboxAngularFogMaxStart) == 0x190);
    static_assert(offsetof(CLightInfoBase, m_flSkyboxAngularFogMinStart) == 0x194);
    static_assert(offsetof(CLightInfoBase, m_flSkyboxAngularFogMinEnd) == 0x198);
    static_assert(offsetof(CLightInfoBase, m_vAngularParams) == 0x19c);
    static_assert(offsetof(CLightInfoBase, m_vHeightFogColor) == 0x1ac);
    static_assert(offsetof(CLightInfoBase, m_flFogMaxZ) == 0x1b4);
    static_assert(offsetof(CLightInfoBase, m_flFogDensity) == 0x1b8);
    static_assert(offsetof(CLightInfoBase, m_flFogFalloff) == 0x1c0);
    static_assert(offsetof(CLightInfoBase, m_hFogTexture0) == 0x1c8);
    static_assert(offsetof(CLightInfoBase, m_flFogLayer0Rotation) == 0x1d0);
    static_assert(offsetof(CLightInfoBase, m_flFogLayer0Scale) == 0x1d4);
    static_assert(offsetof(CLightInfoBase, m_flFoglayer0ScrollU) == 0x1d8);
    static_assert(offsetof(CLightInfoBase, m_flFoglayer0ScrollV) == 0x1e0);
    static_assert(offsetof(CLightInfoBase, m_hFogTexture1) == 0x1e8);
    static_assert(offsetof(CLightInfoBase, m_flFogLayer1Rotation) == 0x1f0);
    static_assert(offsetof(CLightInfoBase, m_flFogLayer1Scale) == 0x1f4);
    static_assert(offsetof(CLightInfoBase, m_flFoglayer1ScrollU) == 0x1f8);
    static_assert(offsetof(CLightInfoBase, m_flFoglayer1ScrollV) == 0x200);
    static_assert(offsetof(CLightInfoBase, m_hFogTextureOpacity) == 0x208);
    static_assert(offsetof(CLightInfoBase, m_hWaterFlowMapTexture) == 0x210);
    static_assert(offsetof(CLightInfoBase, m_hFogFlowMapTexture) == 0x218);
    static_assert(offsetof(CLightInfoBase, m_flFogExclusionInnerRadius) == 0x220);
    static_assert(offsetof(CLightInfoBase, m_flFogExclusionHeightBias) == 0x224);
    static_assert(offsetof(CLightInfoBase, m_flCausticSpeedScale) == 0x22c);
    static_assert(offsetof(CLightInfoBase, m_flCausticAmplitudeScale) == 0x230);
    static_assert(offsetof(CLightInfoBase, m_hColorWarp) == 0x238);
    static_assert(offsetof(CLightInfoBase, m_flColorWarpBlendToFull) == 0x240);
    static_assert(offsetof(CLightInfoBase, m_fInnerRadius) == 0x244);
    static_assert(offsetof(CLightInfoBase, m_fOuterRadius) == 0x248);
    static_assert(offsetof(CLightInfoBase, m_flLightning_specular_pow_scale_min) == 0x24c);
    static_assert(offsetof(CLightInfoBase, m_flLightning_specular_pow_scale_max) == 0x250);
    static_assert(offsetof(CLightInfoBase, m_lightningColor) == 0x254);
    static_assert(offsetof(CLightInfoBase, m_flLightningIntensityMin) == 0x258);
    static_assert(offsetof(CLightInfoBase, m_flLightningIntensityMax) == 0x25c);
    static_assert(offsetof(CLightInfoBase, m_flLightningElevation) == 0x260);
    static_assert(offsetof(CLightInfoBase, m_flLightningSpecularIntensity) == 0x264);
    static_assert(offsetof(CLightInfoBase, m_flFarZOverride) == 0x268);
    static_assert(offsetof(CLightInfoBase, m_flAmbientShadowAmount) == 0x26c);
    static_assert(offsetof(CLightInfoBase, m_nWeatherType) == 0x270);
    static_assert(offsetof(CLightInfoBase, m_WeatherEffect) == 0x278);
    static_assert(offsetof(CLightInfoBase, m_flLightning_period_min) == 0x280);
    static_assert(offsetof(CLightInfoBase, m_flLightning_period_max) == 0x284);
    static_assert(offsetof(CLightInfoBase, m_flLightning_duration_min) == 0x288);
    static_assert(offsetof(CLightInfoBase, m_flLightning_duration_max) == 0x28c);
    static_assert(offsetof(CLightInfoBase, m_flLightning_fluctuation_min) == 0x290);
    static_assert(offsetof(CLightInfoBase, m_flLightning_fluctuation_max) == 0x294);
    static_assert(offsetof(CLightInfoBase, m_pszLightningSound) == 0x298);
    static_assert(offsetof(CLightInfoBase, m_flNextLightningStartTime) == 0x39c);
    static_assert(offsetof(CLightInfoBase, m_flNextLightningEndTime) == 0x3a0);
    static_assert(offsetof(CLightInfoBase, m_flLightningFluctuationTimeStart) == 0x3a4);
    static_assert(offsetof(CLightInfoBase, m_flLightningFluctuationTimeEnd) == 0x3a8);
    static_assert(offsetof(CLightInfoBase, m_flLightningNumFluctuations) == 0x3ac);
    static_assert(offsetof(CLightInfoBase, m_flNextLightningSoundTime) == 0x3b0);
    static_assert(offsetof(CLightInfoBase, m_bPlayLightingSound) == 0x3b4);
    static_assert(offsetof(CLightInfoBase, m_flLightningEventMagnitude) == 0x3b8);
    static_assert(offsetof(CLightInfoBase, m_flLightningScale) == 0x3bc);
    static_assert(offsetof(CLightInfoBase, m_flLightningFluctuation) == 0x3c0);
    static_assert(offsetof(CLightInfoBase, m_flLightningAngle) == 0x3c4);
    static_assert(offsetof(CLightInfoBase, m_flLightningEventPercentage) == 0x3c8);
    
    static_assert(sizeof(CLightInfoBase) == 0x3d0);
};

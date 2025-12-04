#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CLightInfoBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_origin2D; // 0x_            
            Color m_Color[2]; // 0x_            
            float m_LightScale[2]; // 0x_            
            Color m_AmbientColor[2]; // 0x_            
            float m_AmbientScale[2]; // 0x_            
            Color m_ShadowColor[2]; // 0x_            
            Color m_ShadowSecondaryColor[2]; // 0x_            
            float m_ShadowScale[2]; // 0x_            
            float m_ShadowGroundScale[2]; // 0x_            
            Color m_SpecularColor[2]; // 0x_            
            float m_flSpecularPower[2]; // 0x_            
            float m_flSpecularIndependence[2]; // 0x_            
            Vector m_SpecularDirection[2]; // 0x_            
            Vector m_InspectorSpecularDirection[2]; // 0x_            
            Vector m_LightDirection[2]; // 0x_            
            Vector m_AmbientDirection[2]; // 0x_            
            Color m_FogColor[2]; // 0x_            
            float m_FogStart[2]; // 0x_            
            float m_FogEnd[2]; // 0x_            
            float m_HeightFogValue[2]; // 0x_            
            Color m_HeightFogColor[2]; // 0x_            
            float m_FoWDarkness[2]; // 0x_            
            float m_FoWColorR[2]; // 0x_            
            float m_FoWColorG[2]; // 0x_            
            float m_FoWColorB[2]; // 0x_            
            Color m_InspectorViewFogColor[2]; // 0x_            
            QAngle m_windAngle; // 0x_            
            float m_flWindAmount[2]; // 0x_            
            float m_flMinWind; // 0x_            
            float m_flMaxWind; // 0x_            
            float m_flMinGust; // 0x_            
            float m_flMaxGust; // 0x_            
            float m_flMinGustDelay; // 0x_            
            float m_flMaxGustDelay; // 0x_            
            float m_flGustDuration; // 0x_            
            float m_flGustDirChange; // 0x_            
            QAngle m_skyboxAngle[2]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hSkyboxMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyboxMaterial[2];
            char m_hSkyboxMaterial[0x_]; // 0x_            
            Color m_vSkyboxTintColor[2]; // 0x_            
            std::uint8_t m_nSkyboxFogType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSkyboxAngularFogMaxEnd; // 0x_            
            float m_flSkyboxAngularFogMaxStart; // 0x_            
            float m_flSkyboxAngularFogMinStart; // 0x_            
            float m_flSkyboxAngularFogMinEnd; // 0x_            
            Vector4D m_vAngularParams; // 0x_            
            Color m_vHeightFogColor[2]; // 0x_            
            float m_flFogMaxZ; // 0x_            
            float m_flFogDensity[2]; // 0x_            
            float m_flFogFalloff; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hFogTexture0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTexture0;
            char m_hFogTexture0[0x_]; // 0x_            
            float m_flFogLayer0Rotation; // 0x_            
            float m_flFogLayer0Scale; // 0x_            
            float m_flFoglayer0ScrollU[2]; // 0x_            
            float m_flFoglayer0ScrollV[2]; // 0x_            
            // m_hFogTexture1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTexture1;
            char m_hFogTexture1[0x_]; // 0x_            
            float m_flFogLayer1Rotation; // 0x_            
            float m_flFogLayer1Scale; // 0x_            
            float m_flFoglayer1ScrollU[2]; // 0x_            
            float m_flFoglayer1ScrollV[2]; // 0x_            
            // m_hFogTextureOpacity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogTextureOpacity;
            char m_hFogTextureOpacity[0x_]; // 0x_            
            // m_hWaterFlowMapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hWaterFlowMapTexture;
            char m_hWaterFlowMapTexture[0x_]; // 0x_            
            // m_hFogFlowMapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogFlowMapTexture;
            char m_hFogFlowMapTexture[0x_]; // 0x_            
            float m_flFogExclusionInnerRadius; // 0x_            
            float m_flFogExclusionHeightBias; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCausticSpeedScale; // 0x_            
            float m_flCausticAmplitudeScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hColorWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hColorWarp;
            char m_hColorWarp[0x_]; // 0x_            
            float m_flColorWarpBlendToFull; // 0x_            
            float m_fInnerRadius; // 0x_            
            float m_fOuterRadius; // 0x_            
            float m_flLightning_specular_pow_scale_min; // 0x_            
            float m_flLightning_specular_pow_scale_max; // 0x_            
            Color m_lightningColor; // 0x_            
            float m_flLightningIntensityMin; // 0x_            
            float m_flLightningIntensityMax; // 0x_            
            float m_flLightningElevation; // 0x_            
            float m_flLightningSpecularIntensity; // 0x_            
            float m_flFarZOverride; // 0x_            
            float m_flAmbientShadowAmount; // 0x_            
            std::int32_t m_nWeatherType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_WeatherEffect; // 0x_            
            float m_flLightning_period_min; // 0x_            
            float m_flLightning_period_max; // 0x_            
            float m_flLightning_duration_min; // 0x_            
            float m_flLightning_duration_max; // 0x_            
            float m_flLightning_fluctuation_min; // 0x_            
            float m_flLightning_fluctuation_max; // 0x_            
            char m_pszLightningSound[260]; // 0x_            
            float m_flNextLightningStartTime; // 0x_            
            float m_flNextLightningEndTime; // 0x_            
            float m_flLightningFluctuationTimeStart; // 0x_            
            float m_flLightningFluctuationTimeEnd; // 0x_            
            float m_flLightningNumFluctuations; // 0x_            
            float m_flNextLightningSoundTime; // 0x_            
            bool m_bPlayLightingSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLightningEventMagnitude; // 0x_            
            float m_flLightningScale; // 0x_            
            float m_flLightningFluctuation; // 0x_            
            float m_flLightningAngle; // 0x_            
            float m_flLightningEventPercentage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_origin2D) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_Color) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_LightScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_AmbientColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_AmbientScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_ShadowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_ShadowSecondaryColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_ShadowScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_ShadowGroundScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_SpecularColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSpecularPower) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSpecularIndependence) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_SpecularDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_InspectorSpecularDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_LightDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_AmbientDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FogColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FogStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FogEnd) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_HeightFogValue) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_HeightFogColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FoWDarkness) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FoWColorR) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FoWColorG) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_FoWColorB) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_InspectorViewFogColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_windAngle) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flWindAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMinWind) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMaxWind) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMinGust) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMaxGust) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMinGustDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flMaxGustDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flGustDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flGustDirChange) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_skyboxAngle) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hSkyboxMaterial) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_vSkyboxTintColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_nSkyboxFogType) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSkyboxAngularFogMaxEnd) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSkyboxAngularFogMaxStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSkyboxAngularFogMinStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flSkyboxAngularFogMinEnd) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_vAngularParams) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_vHeightFogColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogMaxZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogDensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogFalloff) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hFogTexture0) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogLayer0Rotation) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogLayer0Scale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFoglayer0ScrollU) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFoglayer0ScrollV) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hFogTexture1) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogLayer1Rotation) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogLayer1Scale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFoglayer1ScrollU) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFoglayer1ScrollV) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hFogTextureOpacity) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hWaterFlowMapTexture) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hFogFlowMapTexture) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogExclusionInnerRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFogExclusionHeightBias) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flCausticSpeedScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flCausticAmplitudeScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_hColorWarp) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flColorWarpBlendToFull) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_fInnerRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_fOuterRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_specular_pow_scale_min) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_specular_pow_scale_max) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_lightningColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningIntensityMin) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningIntensityMax) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningElevation) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningSpecularIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flFarZOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flAmbientShadowAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_nWeatherType) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_WeatherEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_period_min) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_period_max) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_duration_min) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_duration_max) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_fluctuation_min) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightning_fluctuation_max) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_pszLightningSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flNextLightningStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flNextLightningEndTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningFluctuationTimeStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningFluctuationTimeEnd) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningNumFluctuations) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flNextLightningSoundTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_bPlayLightingSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningEventMagnitude) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningFluctuation) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningAngle) == 0x_);
        static_assert(offsetof(source2sdk::client::CLightInfoBase, m_flLightningEventPercentage) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CLightInfoBase) == 0x_);
    };
};

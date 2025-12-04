#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        class CGlobalLightBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bSpotLight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_SpotLightOrigin; // 0x_            
            QAngle m_SpotLightAngles; // 0x_            
            Vector m_ShadowDirection; // 0x_            
            Vector m_AmbientDirection; // 0x_            
            Vector m_SpecularDirection; // 0x_            
            Vector m_InspectorSpecularDirection; // 0x_            
            float m_flSpecularPower; // 0x_            
            float m_flSpecularIndependence; // 0x_            
            Color m_SpecularColor; // 0x_            
            bool m_bStartDisabled; // 0x_            
            bool m_bEnabled; // 0x_            
            Color m_LightColor; // 0x_            
            Color m_AmbientColor1; // 0x_            
            Color m_AmbientColor2; // 0x_            
            Color m_AmbientColor3; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSunDistance; // 0x_            
            float m_flFOV; // 0x_            
            float m_flNearZ; // 0x_            
            float m_flFarZ; // 0x_            
            bool m_bEnableShadows; // 0x_            
            bool m_bOldEnableShadows; // 0x_            
            bool m_bBackgroundClearNotRequired; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCloudScale; // 0x_            
            float m_flCloud1Speed; // 0x_            
            float m_flCloud1Direction; // 0x_            
            float m_flCloud2Speed; // 0x_            
            float m_flCloud2Direction; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flAmbientScale1; // 0x_            
            float m_flAmbientScale2; // 0x_            
            float m_flGroundScale; // 0x_            
            float m_flLightScale; // 0x_            
            float m_flFoWDarkness; // 0x_            
            bool m_bEnableSeparateSkyboxFog; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vFowColor; // 0x_            
            Vector m_ViewOrigin; // 0x_            
            QAngle m_ViewAngles; // 0x_            
            float m_flViewFoV; // 0x_            
            Vector m_WorldPoints[8]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vFogOffsetLayer0; // 0x_            
            Vector2D m_vFogOffsetLayer1; // 0x_            
            // m_hEnvWind has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnvWind;
            char m_hEnvWind[0x_]; // 0x_            
            // m_hEnvSky has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnvSky;
            char m_hEnvSky[0x_]; // 0x_            
            float m_fSmoothedAmount; // 0x_            
            float m_fSlowSmoothedAmount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bSpotLight) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_SpotLightOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_SpotLightAngles) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_ShadowDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_AmbientDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_SpecularDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_InspectorSpecularDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flSpecularPower) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flSpecularIndependence) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_SpecularColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bStartDisabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_LightColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_AmbientColor1) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_AmbientColor2) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_AmbientColor3) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flSunDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flFOV) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flNearZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flFarZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bEnableShadows) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bOldEnableShadows) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bBackgroundClearNotRequired) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flCloudScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flCloud1Speed) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flCloud1Direction) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flCloud2Speed) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flCloud2Direction) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flAmbientScale1) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flAmbientScale2) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flGroundScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flLightScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flFoWDarkness) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_bEnableSeparateSkyboxFog) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_vFowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_ViewOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_ViewAngles) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_flViewFoV) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_WorldPoints) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_vFogOffsetLayer0) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_vFogOffsetLayer1) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_hEnvWind) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_hEnvSky) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_fSmoothedAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CGlobalLightBase, m_fSlowSmoothedAmount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CGlobalLightBase) == 0x_);
    };
};

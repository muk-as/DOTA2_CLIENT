#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x520
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CGlobalLightBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        bool m_bSpotLight; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3]; // 0x11
        Vector m_SpotLightOrigin; // 0x14        
        QAngle m_SpotLightAngles; // 0x20        
        Vector m_ShadowDirection; // 0x2c        
        Vector m_AmbientDirection; // 0x38        
        Vector m_SpecularDirection; // 0x44        
        Vector m_InspectorSpecularDirection; // 0x50        
        float m_flSpecularPower; // 0x5c        
        float m_flSpecularIndependence; // 0x60        
        Color m_SpecularColor; // 0x64        
        bool m_bStartDisabled; // 0x68        
        bool m_bEnabled; // 0x69        
        Color m_LightColor; // 0x6a        
        Color m_AmbientColor1; // 0x6e        
        Color m_AmbientColor2; // 0x72        
        Color m_AmbientColor3; // 0x76        
        [[maybe_unused]] std::uint8_t pad_0x7a[0x2]; // 0x7a
        float m_flSunDistance; // 0x7c        
        float m_flFOV; // 0x80        
        float m_flNearZ; // 0x84        
        float m_flFarZ; // 0x88        
        bool m_bEnableShadows; // 0x8c        
        bool m_bOldEnableShadows; // 0x8d        
        bool m_bBackgroundClearNotRequired; // 0x8e        
        [[maybe_unused]] std::uint8_t pad_0x8f[0x1]; // 0x8f
        float m_flCloudScale; // 0x90        
        float m_flCloud1Speed; // 0x94        
        float m_flCloud1Direction; // 0x98        
        float m_flCloud2Speed; // 0x9c        
        float m_flCloud2Direction; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0xc]; // 0xa4
        float m_flAmbientScale1; // 0xb0        
        float m_flAmbientScale2; // 0xb4        
        float m_flGroundScale; // 0xb8        
        float m_flLightScale; // 0xbc        
        float m_flFoWDarkness; // 0xc0        
        bool m_bEnableSeparateSkyboxFog; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc5[0x3]; // 0xc5
        Vector m_vFowColor; // 0xc8        
        Vector m_ViewOrigin; // 0xd4        
        QAngle m_ViewAngles; // 0xe0        
        float m_flViewFoV; // 0xec        
        Vector m_WorldPoints[8]; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0x150[0x358]; // 0x150
        Vector2D m_vFogOffsetLayer0; // 0x4a8        
        Vector2D m_vFogOffsetLayer1; // 0x4b0        
        // m_hEnvWind has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEnvWind;
        char m_hEnvWind[0x4]; // 0x4b8        
        // m_hEnvSky has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEnvSky;
        char m_hEnvSky[0x4]; // 0x4bc        
        float m_fSmoothedAmount; // 0x4c0        
        float m_fSlowSmoothedAmount; // 0x4c4        
        [[maybe_unused]] std::uint8_t pad_0x4c8[0x58];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGlobalLightBase, m_bSpotLight) == 0x10);
    static_assert(offsetof(CGlobalLightBase, m_SpotLightOrigin) == 0x14);
    static_assert(offsetof(CGlobalLightBase, m_SpotLightAngles) == 0x20);
    static_assert(offsetof(CGlobalLightBase, m_ShadowDirection) == 0x2c);
    static_assert(offsetof(CGlobalLightBase, m_AmbientDirection) == 0x38);
    static_assert(offsetof(CGlobalLightBase, m_SpecularDirection) == 0x44);
    static_assert(offsetof(CGlobalLightBase, m_InspectorSpecularDirection) == 0x50);
    static_assert(offsetof(CGlobalLightBase, m_flSpecularPower) == 0x5c);
    static_assert(offsetof(CGlobalLightBase, m_flSpecularIndependence) == 0x60);
    static_assert(offsetof(CGlobalLightBase, m_SpecularColor) == 0x64);
    static_assert(offsetof(CGlobalLightBase, m_bStartDisabled) == 0x68);
    static_assert(offsetof(CGlobalLightBase, m_bEnabled) == 0x69);
    static_assert(offsetof(CGlobalLightBase, m_LightColor) == 0x6a);
    static_assert(offsetof(CGlobalLightBase, m_AmbientColor1) == 0x6e);
    static_assert(offsetof(CGlobalLightBase, m_AmbientColor2) == 0x72);
    static_assert(offsetof(CGlobalLightBase, m_AmbientColor3) == 0x76);
    static_assert(offsetof(CGlobalLightBase, m_flSunDistance) == 0x7c);
    static_assert(offsetof(CGlobalLightBase, m_flFOV) == 0x80);
    static_assert(offsetof(CGlobalLightBase, m_flNearZ) == 0x84);
    static_assert(offsetof(CGlobalLightBase, m_flFarZ) == 0x88);
    static_assert(offsetof(CGlobalLightBase, m_bEnableShadows) == 0x8c);
    static_assert(offsetof(CGlobalLightBase, m_bOldEnableShadows) == 0x8d);
    static_assert(offsetof(CGlobalLightBase, m_bBackgroundClearNotRequired) == 0x8e);
    static_assert(offsetof(CGlobalLightBase, m_flCloudScale) == 0x90);
    static_assert(offsetof(CGlobalLightBase, m_flCloud1Speed) == 0x94);
    static_assert(offsetof(CGlobalLightBase, m_flCloud1Direction) == 0x98);
    static_assert(offsetof(CGlobalLightBase, m_flCloud2Speed) == 0x9c);
    static_assert(offsetof(CGlobalLightBase, m_flCloud2Direction) == 0xa0);
    static_assert(offsetof(CGlobalLightBase, m_flAmbientScale1) == 0xb0);
    static_assert(offsetof(CGlobalLightBase, m_flAmbientScale2) == 0xb4);
    static_assert(offsetof(CGlobalLightBase, m_flGroundScale) == 0xb8);
    static_assert(offsetof(CGlobalLightBase, m_flLightScale) == 0xbc);
    static_assert(offsetof(CGlobalLightBase, m_flFoWDarkness) == 0xc0);
    static_assert(offsetof(CGlobalLightBase, m_bEnableSeparateSkyboxFog) == 0xc4);
    static_assert(offsetof(CGlobalLightBase, m_vFowColor) == 0xc8);
    static_assert(offsetof(CGlobalLightBase, m_ViewOrigin) == 0xd4);
    static_assert(offsetof(CGlobalLightBase, m_ViewAngles) == 0xe0);
    static_assert(offsetof(CGlobalLightBase, m_flViewFoV) == 0xec);
    static_assert(offsetof(CGlobalLightBase, m_WorldPoints) == 0xf0);
    static_assert(offsetof(CGlobalLightBase, m_vFogOffsetLayer0) == 0x4a8);
    static_assert(offsetof(CGlobalLightBase, m_vFogOffsetLayer1) == 0x4b0);
    static_assert(offsetof(CGlobalLightBase, m_hEnvWind) == 0x4b8);
    static_assert(offsetof(CGlobalLightBase, m_hEnvSky) == 0x4bc);
    static_assert(offsetof(CGlobalLightBase, m_fSmoothedAmount) == 0x4c0);
    static_assert(offsetof(CGlobalLightBase, m_fSlowSmoothedAmount) == 0x4c4);
    
    static_assert(sizeof(CGlobalLightBase) == 0x520);
};

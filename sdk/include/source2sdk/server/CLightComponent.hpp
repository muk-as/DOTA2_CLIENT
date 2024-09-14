#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b8
    // Has VTable
    // Construct disallowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "Color m_SecondaryColor"
    // static metadata: MNetworkVarNames "float m_flBrightness"
    // static metadata: MNetworkVarNames "float m_flBrightnessScale"
    // static metadata: MNetworkVarNames "float m_flBrightnessMult"
    // static metadata: MNetworkVarNames "float m_flRange"
    // static metadata: MNetworkVarNames "float m_flFalloff"
    // static metadata: MNetworkVarNames "float m_flAttenuation0"
    // static metadata: MNetworkVarNames "float m_flAttenuation1"
    // static metadata: MNetworkVarNames "float m_flAttenuation2"
    // static metadata: MNetworkVarNames "float m_flTheta"
    // static metadata: MNetworkVarNames "float m_flPhi"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
    // static metadata: MNetworkVarNames "int m_nCascades"
    // static metadata: MNetworkVarNames "int m_nCastShadows"
    // static metadata: MNetworkVarNames "int m_nShadowWidth"
    // static metadata: MNetworkVarNames "int m_nShadowHeight"
    // static metadata: MNetworkVarNames "bool m_bRenderDiffuse"
    // static metadata: MNetworkVarNames "int m_nRenderSpecular"
    // static metadata: MNetworkVarNames "bool m_bRenderTransmissive"
    // static metadata: MNetworkVarNames "float m_flOrthoLightWidth"
    // static metadata: MNetworkVarNames "float m_flOrthoLightHeight"
    // static metadata: MNetworkVarNames "int m_nStyle"
    // static metadata: MNetworkVarNames "CUtlString m_Pattern"
    // static metadata: MNetworkVarNames "int m_nCascadeRenderStaticObjects"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeCrossFade"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeDistanceFade"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeDistance0"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeDistance1"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeDistance2"
    // static metadata: MNetworkVarNames "float m_flShadowCascadeDistance3"
    // static metadata: MNetworkVarNames "int m_nShadowCascadeResolution0"
    // static metadata: MNetworkVarNames "int m_nShadowCascadeResolution1"
    // static metadata: MNetworkVarNames "int m_nShadowCascadeResolution2"
    // static metadata: MNetworkVarNames "int m_nShadowCascadeResolution3"
    // static metadata: MNetworkVarNames "bool m_bUsesBakedShadowing"
    // static metadata: MNetworkVarNames "int m_nShadowPriority"
    // static metadata: MNetworkVarNames "int m_nBakedShadowIndex"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "int m_nDirectLight"
    // static metadata: MNetworkVarNames "int m_nIndirectLight"
    // static metadata: MNetworkVarNames "float m_flFadeMinDist"
    // static metadata: MNetworkVarNames "float m_flFadeMaxDist"
    // static metadata: MNetworkVarNames "float m_flShadowFadeMinDist"
    // static metadata: MNetworkVarNames "float m_flShadowFadeMaxDist"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bFlicker"
    // static metadata: MNetworkVarNames "bool m_bPrecomputedFieldsValid"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
    // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
    // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
    // static metadata: MNetworkVarNames "float m_flPrecomputedMaxRange"
    // static metadata: MNetworkVarNames "int m_nFogLightingMode"
    // static metadata: MNetworkVarNames "float m_flFogContributionStength"
    // static metadata: MNetworkVarNames "float m_flNearClipPlane"
    // static metadata: MNetworkVarNames "Color m_SkyColor"
    // static metadata: MNetworkVarNames "float m_flSkyIntensity"
    // static metadata: MNetworkVarNames "Color m_SkyAmbientBounce"
    // static metadata: MNetworkVarNames "bool m_bUseSecondaryColor"
    // static metadata: MNetworkVarNames "bool m_bMixedShadows"
    // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
    // static metadata: MNetworkVarNames "float m_flCapsuleLength"
    // static metadata: MNetworkVarNames "float m_flMinRoughness"
    #pragma pack(push, 1)
    class CLightComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x30]; // 0x8
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x60[0x15]; // 0x60
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        Color m_Color; // 0x75        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        Color m_SecondaryColor; // 0x79        
        [[maybe_unused]] std::uint8_t pad_0x7d[0x3]; // 0x7d
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flBrightness; // 0x80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flBrightnessScale; // 0x84        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flBrightnessMult; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flRange; // 0x8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flFalloff; // 0x90        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flAttenuation0; // 0x94        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flAttenuation1; // 0x98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flAttenuation2; // 0x9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flTheta; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flPhi; // 0xa4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
        char m_hLightCookie[0x8]; // 0xa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nCascades; // 0xb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nCastShadows; // 0xb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowWidth; // 0xb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowHeight; // 0xbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        bool m_bRenderDiffuse; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nRenderSpecular; // 0xc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        bool m_bRenderTransmissive; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x3]; // 0xc9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flOrthoLightWidth; // 0xcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flOrthoLightHeight; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nStyle; // 0xd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        CUtlString m_Pattern; // 0xd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nCascadeRenderStaticObjects; // 0xe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeCrossFade; // 0xe4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeDistanceFade; // 0xe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeDistance0; // 0xec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeDistance1; // 0xf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeDistance2; // 0xf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowCascadeDistance3; // 0xf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowCascadeResolution0; // 0xfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowCascadeResolution1; // 0x100        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowCascadeResolution2; // 0x104        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowCascadeResolution3; // 0x108        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        // metadata: MNetworkAlias "m_bUsesIndexedBakedLighting"
        bool m_bUsesBakedShadowing; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x10d[0x3]; // 0x10d
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nShadowPriority; // 0x110        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        int32_t m_nBakedShadowIndex; // 0x114        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        bool m_bRenderToCubemaps; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x119[0x3]; // 0x119
        // metadata: MNetworkEnable
        int32_t m_nDirectLight; // 0x11c        
        // metadata: MNetworkEnable
        int32_t m_nIndirectLight; // 0x120        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flFadeMinDist; // 0x124        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flFadeMaxDist; // 0x128        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowFadeMinDist; // 0x12c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flShadowFadeMaxDist; // 0x130        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        bool m_bEnabled; // 0x134        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        bool m_bFlicker; // 0x135        
        // metadata: MNetworkEnable
        bool m_bPrecomputedFieldsValid; // 0x136        
        [[maybe_unused]] std::uint8_t pad_0x137[0x1]; // 0x137
        // metadata: MNetworkEnable
        Vector m_vPrecomputedBoundsMins; // 0x138        
        // metadata: MNetworkEnable
        Vector m_vPrecomputedBoundsMaxs; // 0x144        
        // metadata: MNetworkEnable
        Vector m_vPrecomputedOBBOrigin; // 0x150        
        // metadata: MNetworkEnable
        QAngle m_vPrecomputedOBBAngles; // 0x15c        
        // metadata: MNetworkEnable
        Vector m_vPrecomputedOBBExtent; // 0x168        
        // metadata: MNetworkEnable
        float m_flPrecomputedMaxRange; // 0x174        
        // metadata: MNetworkEnable
        int32_t m_nFogLightingMode; // 0x178        
        // metadata: MNetworkEnable
        float m_flFogContributionStength; // 0x17c        
        // metadata: MNetworkEnable
        float m_flNearClipPlane; // 0x180        
        // metadata: MNetworkEnable
        Color m_SkyColor; // 0x184        
        // metadata: MNetworkEnable
        float m_flSkyIntensity; // 0x188        
        // metadata: MNetworkEnable
        Color m_SkyAmbientBounce; // 0x18c        
        // metadata: MNetworkEnable
        bool m_bUseSecondaryColor; // 0x190        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "MixedShadowsChanged"
        bool m_bMixedShadows; // 0x191        
        [[maybe_unused]] std::uint8_t pad_0x192[0x2]; // 0x192
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        entity2::GameTime_t m_flLightStyleStartTime; // 0x194        
        // metadata: MNetworkEnable
        float m_flCapsuleLength; // 0x198        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LightRenderingChanged"
        float m_flMinRoughness; // 0x19c        
        [[maybe_unused]] std::uint8_t pad_0x1a0[0x10]; // 0x1a0
        bool m_bPvsModifyEntity; // 0x1b0        
        [[maybe_unused]] std::uint8_t pad_0x1b1[0x7];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->GetStaticFields()[1]->m_pInstance);};
        
        // Datamap fields:
        // SHIM m_bRenderSpecular; // 0xc4
        // SHIM m_bCastShadows; // 0xb4
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLightComponent because it is not a standard-layout class
    static_assert(sizeof(CLightComponent) == 0x1b8);
};

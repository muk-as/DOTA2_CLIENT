#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1668
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "Color m_Entity_Color"
    // static metadata: MNetworkVarNames "float m_Entity_flBrightness"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
    // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
    // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
    // static metadata: MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
    // static metadata: MNetworkVarNames "int m_Entity_nPriority"
    // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
    // static metadata: MNetworkVarNames "float m_Entity_flEdgeFadeDist"
    // static metadata: MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
    // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
    #pragma pack(push, 1)
    class C_EnvCombinedLightProbeVolume : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x1060]; // 0x560
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "StateChanged"
        Color m_Entity_Color; // 0x15c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "StateChanged"
        float m_Entity_flBrightness; // 0x15c4        
        // metadata: MNetworkEnable
        // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
        char m_Entity_hCubemapTexture[0x8]; // 0x15c8        
        // metadata: MNetworkEnable
        bool m_Entity_bCustomCubemapTexture; // 0x15d0        
        [[maybe_unused]] std::uint8_t pad_0x15d1[0x7]; // 0x15d1
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
        char m_Entity_hLightProbeTexture[0x8]; // 0x15d8        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
        char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x15e0        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
        char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x15e8        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
        char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x15f0        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMins; // 0x15f8        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMaxs; // 0x1604        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x1610        
        [[maybe_unused]] std::uint8_t pad_0x1611[0x3]; // 0x1611
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x1614        
        // metadata: MNetworkEnable
        int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1618        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x161c        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x1620        
        [[maybe_unused]] std::uint8_t pad_0x1621[0x3]; // 0x1621
        // metadata: MNetworkEnable
        float m_Entity_flEdgeFadeDist; // 0x1624        
        // metadata: MNetworkEnable
        Vector m_Entity_vEdgeFadeDists; // 0x1628        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeX; // 0x1634        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeY; // 0x1638        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeZ; // 0x163c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasX; // 0x1640        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasY; // 0x1644        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasZ; // 0x1648        
        [[maybe_unused]] std::uint8_t pad_0x164c[0x15]; // 0x164c
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x1661        
        [[maybe_unused]] std::uint8_t pad_0x1662[0x6];
        
        // Datamap fields:
        // void m_Entity_pEnvMap; // 0x1650
        // void m_Entity_pLightProbeVolume; // 0x1658
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvCombinedLightProbeVolume because it is not a standard-layout class
    static_assert(sizeof(C_EnvCombinedLightProbeVolume) == 0x1668);
};

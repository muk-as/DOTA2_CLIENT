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
    // Size: 0x15b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
    // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
    // static metadata: MNetworkVarNames "int m_Entity_nPriority"
    // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
    // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
    // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
    #pragma pack(push, 1)
    class C_EnvLightProbeVolume : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0xfe0]; // 0x560
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
        char m_Entity_hLightProbeTexture[0x8]; // 0x1540        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
        char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x1548        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
        char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x1550        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
        char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x1558        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMins; // 0x1560        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMaxs; // 0x156c        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x1578        
        [[maybe_unused]] std::uint8_t pad_0x1579[0x3]; // 0x1579
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x157c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x1580        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x1584        
        [[maybe_unused]] std::uint8_t pad_0x1585[0x3]; // 0x1585
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeX; // 0x1588        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeY; // 0x158c        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeZ; // 0x1590        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasX; // 0x1594        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasY; // 0x1598        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasZ; // 0x159c        
        [[maybe_unused]] std::uint8_t pad_0x15a0[0x9]; // 0x15a0
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x15a9        
        [[maybe_unused]] std::uint8_t pad_0x15aa[0x6];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x15a0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvLightProbeVolume because it is not a standard-layout class
    static_assert(sizeof(C_EnvLightProbeVolume) == 0x15b0);
};

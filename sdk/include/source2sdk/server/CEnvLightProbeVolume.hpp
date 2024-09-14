#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1508
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    class CEnvLightProbeVolume : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0xfe0]; // 0x4b8
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
        char m_Entity_hLightProbeTexture[0x8]; // 0x1498        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
        char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x14a0        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
        char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x14a8        
        // metadata: MNetworkEnable
        // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
        char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x14b0        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMins; // 0x14b8        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxMaxs; // 0x14c4        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x14d0        
        [[maybe_unused]] std::uint8_t pad_0x14d1[0x3]; // 0x14d1
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x14d4        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x14d8        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x14dc        
        [[maybe_unused]] std::uint8_t pad_0x14dd[0x3]; // 0x14dd
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeX; // 0x14e0        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeY; // 0x14e4        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeSizeZ; // 0x14e8        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasX; // 0x14ec        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasY; // 0x14f0        
        // metadata: MNetworkEnable
        int32_t m_Entity_nLightProbeAtlasZ; // 0x14f4        
        [[maybe_unused]] std::uint8_t pad_0x14f8[0x9]; // 0x14f8
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x1501        
        [[maybe_unused]] std::uint8_t pad_0x1502[0x6];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x14f8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvLightProbeVolume because it is not a standard-layout class
    static_assert(sizeof(CEnvLightProbeVolume) == 0x1508);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1730
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "Color m_Entity_Color"
        // static metadata: MNetworkVarNames "float m_Entity_flBrightness"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
        // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_AmbientCube"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_SDF"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_SH2_DC"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_SH2_R"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_SH2_G"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture_SH2_B"
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
        class C_EnvCombinedLightProbeVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e8[0x1078]; // 0x5e8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StateChanged"
            Color m_Entity_Color; // 0x1660            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StateChanged"
            float m_Entity_flBrightness; // 0x1664            
            // metadata: MNetworkEnable
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x1668            
            // metadata: MNetworkEnable
            bool m_Entity_bCustomCubemapTexture; // 0x1670            
            uint8_t _pad1671[0x7]; // 0x1671
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_AmbientCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_AmbientCube;
            char m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x1678            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_SDF has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SDF;
            char m_Entity_hLightProbeTexture_SDF[0x8]; // 0x1680            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_SH2_DC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_DC;
            char m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x1688            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_SH2_R has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_R;
            char m_Entity_hLightProbeTexture_SH2_R[0x8]; // 0x1690            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_SH2_G has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_G;
            char m_Entity_hLightProbeTexture_SH2_G[0x8]; // 0x1698            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture_SH2_B has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_B;
            char m_Entity_hLightProbeTexture_SH2_B[0x8]; // 0x16a0            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x16a8            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x16b0            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x16b8            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMins; // 0x16c0            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMaxs; // 0x16cc            
            // metadata: MNetworkEnable
            bool m_Entity_bMoveable; // 0x16d8            
            uint8_t _pad16d9[0x3]; // 0x16d9
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nHandshake; // 0x16dc            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x16e0            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nPriority; // 0x16e4            
            // metadata: MNetworkEnable
            bool m_Entity_bStartDisabled; // 0x16e8            
            uint8_t _pad16e9[0x3]; // 0x16e9
            // metadata: MNetworkEnable
            float m_Entity_flEdgeFadeDist; // 0x16ec            
            // metadata: MNetworkEnable
            Vector m_Entity_vEdgeFadeDists; // 0x16f0            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeX; // 0x16fc            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeY; // 0x1700            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x1704            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x1708            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x170c            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x1710            
            uint8_t _pad1714[0x15]; // 0x1714
            // metadata: MNetworkEnable
            bool m_Entity_bEnabled; // 0x1729            
            uint8_t _pad172a[0x6];
            
            // Datamap fields:
            // void m_Entity_pEnvMap; // 0x1718
            // void m_Entity_pLightProbeVolume; // 0x1720
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCombinedLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCombinedLightProbeVolume) == 0x1730);
    };
};

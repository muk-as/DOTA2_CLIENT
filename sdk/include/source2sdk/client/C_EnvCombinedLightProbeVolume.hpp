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
        // Size: 0x1618
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
        class C_EnvCombinedLightProbeVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0510[0x1060]; // 0x510
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StateChanged"
            Color m_Entity_Color; // 0x1570            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StateChanged"
            float m_Entity_flBrightness; // 0x1574            
            // metadata: MNetworkEnable
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x1578            
            // metadata: MNetworkEnable
            bool m_Entity_bCustomCubemapTexture; // 0x1580            
            uint8_t _pad1581[0x7]; // 0x1581
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
            char m_Entity_hLightProbeTexture[0x8]; // 0x1588            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x1590            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x1598            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x15a0            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMins; // 0x15a8            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMaxs; // 0x15b4            
            // metadata: MNetworkEnable
            bool m_Entity_bMoveable; // 0x15c0            
            uint8_t _pad15c1[0x3]; // 0x15c1
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nHandshake; // 0x15c4            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15c8            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nPriority; // 0x15cc            
            // metadata: MNetworkEnable
            bool m_Entity_bStartDisabled; // 0x15d0            
            uint8_t _pad15d1[0x3]; // 0x15d1
            // metadata: MNetworkEnable
            float m_Entity_flEdgeFadeDist; // 0x15d4            
            // metadata: MNetworkEnable
            Vector m_Entity_vEdgeFadeDists; // 0x15d8            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeX; // 0x15e4            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeY; // 0x15e8            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x15ec            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x15f0            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x15f4            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x15f8            
            uint8_t _pad15fc[0x15]; // 0x15fc
            // metadata: MNetworkEnable
            bool m_Entity_bEnabled; // 0x1611            
            uint8_t _pad1612[0x6];
            
            // Datamap fields:
            // void m_Entity_pEnvMap; // 0x1600
            // void m_Entity_pLightProbeVolume; // 0x1608
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCombinedLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCombinedLightProbeVolume) == 0x1618);
    };
};

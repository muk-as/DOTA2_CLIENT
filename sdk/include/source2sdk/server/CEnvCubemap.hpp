#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
        // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
        // static metadata: MNetworkVarNames "float m_Entity_flInfluenceRadius"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
        // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
        // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
        // static metadata: MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
        // static metadata: MNetworkVarNames "int m_Entity_nPriority"
        // static metadata: MNetworkVarNames "float m_Entity_flEdgeFadeDist"
        // static metadata: MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
        // static metadata: MNetworkVarNames "float m_Entity_flDiffuseScale"
        // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
        // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
        #pragma pack(push, 1)
        class CEnvCubemap : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x80]; // 0x4d8
            // metadata: MNetworkEnable
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x558            
            // metadata: MNetworkEnable
            bool m_Entity_bCustomCubemapTexture; // 0x560            
            uint8_t _pad0561[0x3]; // 0x561
            // metadata: MNetworkEnable
            float m_Entity_flInfluenceRadius; // 0x564            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxProjectMins; // 0x568            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxProjectMaxs; // 0x574            
            // metadata: MNetworkEnable
            bool m_Entity_bMoveable; // 0x580            
            uint8_t _pad0581[0x3]; // 0x581
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nHandshake; // 0x584            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x588            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nPriority; // 0x58c            
            // metadata: MNetworkEnable
            float m_Entity_flEdgeFadeDist; // 0x590            
            // metadata: MNetworkEnable
            Vector m_Entity_vEdgeFadeDists; // 0x594            
            // metadata: MNetworkEnable
            float m_Entity_flDiffuseScale; // 0x5a0            
            // metadata: MNetworkEnable
            bool m_Entity_bStartDisabled; // 0x5a4            
            // metadata: MNetworkEnable
            bool m_Entity_bDefaultEnvMap; // 0x5a5            
            // metadata: MNetworkEnable
            bool m_Entity_bDefaultSpecEnvMap; // 0x5a6            
            // metadata: MNetworkEnable
            bool m_Entity_bIndoorCubeMap; // 0x5a7            
            // metadata: MNetworkEnable
            bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x5a8            
            uint8_t _pad05a9[0xf]; // 0x5a9
            // metadata: MNetworkEnable
            bool m_Entity_bEnabled; // 0x5b8            
            uint8_t _pad05b9[0x7];
            
            // Datamap fields:
            // void m_Entity_pSceneObject; // 0x5b0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCubemap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCubemap) == 0x5c0);
    };
};

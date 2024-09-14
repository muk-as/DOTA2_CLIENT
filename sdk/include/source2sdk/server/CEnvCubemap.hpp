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
    // Size: 0x5a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    class CEnvCubemap : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x80]; // 0x4b8
        // metadata: MNetworkEnable
        // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
        char m_Entity_hCubemapTexture[0x8]; // 0x538        
        // metadata: MNetworkEnable
        bool m_Entity_bCustomCubemapTexture; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x541[0x3]; // 0x541
        // metadata: MNetworkEnable
        float m_Entity_flInfluenceRadius; // 0x544        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMins; // 0x548        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMaxs; // 0x554        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x3]; // 0x561
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x564        
        // metadata: MNetworkEnable
        int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x568        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x56c        
        // metadata: MNetworkEnable
        float m_Entity_flEdgeFadeDist; // 0x570        
        // metadata: MNetworkEnable
        Vector m_Entity_vEdgeFadeDists; // 0x574        
        // metadata: MNetworkEnable
        float m_Entity_flDiffuseScale; // 0x580        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x584        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultEnvMap; // 0x585        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultSpecEnvMap; // 0x586        
        // metadata: MNetworkEnable
        bool m_Entity_bIndoorCubeMap; // 0x587        
        // metadata: MNetworkEnable
        bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x588        
        [[maybe_unused]] std::uint8_t pad_0x589[0xf]; // 0x589
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x599[0x7];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x590
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvCubemap because it is not a standard-layout class
    static_assert(sizeof(CEnvCubemap) == 0x5a0);
};

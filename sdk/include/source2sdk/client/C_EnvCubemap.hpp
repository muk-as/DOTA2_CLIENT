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
    // Size: 0x620
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
    class C_EnvCubemap : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x80]; // 0x538
        // metadata: MNetworkEnable
        // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
        char m_Entity_hCubemapTexture[0x8]; // 0x5b8        
        // metadata: MNetworkEnable
        bool m_Entity_bCustomCubemapTexture; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x3]; // 0x5c1
        // metadata: MNetworkEnable
        float m_Entity_flInfluenceRadius; // 0x5c4        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMins; // 0x5c8        
        // metadata: MNetworkEnable
        Vector m_Entity_vBoxProjectMaxs; // 0x5d4        
        // metadata: MNetworkEnable
        bool m_Entity_bMoveable; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e1[0x3]; // 0x5e1
        // metadata: MNetworkEnable
        int32_t m_Entity_nHandshake; // 0x5e4        
        // metadata: MNetworkEnable
        int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x5e8        
        // metadata: MNetworkEnable
        int32_t m_Entity_nPriority; // 0x5ec        
        // metadata: MNetworkEnable
        float m_Entity_flEdgeFadeDist; // 0x5f0        
        // metadata: MNetworkEnable
        Vector m_Entity_vEdgeFadeDists; // 0x5f4        
        // metadata: MNetworkEnable
        float m_Entity_flDiffuseScale; // 0x600        
        // metadata: MNetworkEnable
        bool m_Entity_bStartDisabled; // 0x604        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultEnvMap; // 0x605        
        // metadata: MNetworkEnable
        bool m_Entity_bDefaultSpecEnvMap; // 0x606        
        // metadata: MNetworkEnable
        bool m_Entity_bIndoorCubeMap; // 0x607        
        // metadata: MNetworkEnable
        bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x609[0xf]; // 0x609
        // metadata: MNetworkEnable
        bool m_Entity_bEnabled; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x7];
        
        // Datamap fields:
        // void m_Entity_pSceneObject; // 0x610
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvCubemap because it is not a standard-layout class
    static_assert(sizeof(C_EnvCubemap) == 0x620);
};

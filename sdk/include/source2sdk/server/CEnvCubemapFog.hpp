#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0x508
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flEndDistance"
    // static metadata: MNetworkVarNames "float m_flStartDistance"
    // static metadata: MNetworkVarNames "float m_flFogFalloffExponent"
    // static metadata: MNetworkVarNames "bool m_bHeightFogEnabled"
    // static metadata: MNetworkVarNames "float m_flFogHeightWidth"
    // static metadata: MNetworkVarNames "float m_flFogHeightEnd"
    // static metadata: MNetworkVarNames "float m_flFogHeightStart"
    // static metadata: MNetworkVarNames "float m_flFogHeightExponent"
    // static metadata: MNetworkVarNames "float m_flLODBias"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "float m_flFogMaxOpacity"
    // static metadata: MNetworkVarNames "int m_nCubemapSourceType"
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
    // static metadata: MNetworkVarNames "string_t m_iszSkyEntity"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
    // static metadata: MNetworkVarNames "bool m_bHasHeightFogEnd"
    #pragma pack(push, 1)
    class CEnvCubemapFog : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flEndDistance; // 0x4b8        
        // metadata: MNetworkEnable
        float m_flStartDistance; // 0x4bc        
        // metadata: MNetworkEnable
        float m_flFogFalloffExponent; // 0x4c0        
        // metadata: MNetworkEnable
        bool m_bHeightFogEnabled; // 0x4c4        
        [[maybe_unused]] std::uint8_t pad_0x4c5[0x3]; // 0x4c5
        // metadata: MNetworkEnable
        float m_flFogHeightWidth; // 0x4c8        
        // metadata: MNetworkEnable
        float m_flFogHeightEnd; // 0x4cc        
        // metadata: MNetworkEnable
        float m_flFogHeightStart; // 0x4d0        
        // metadata: MNetworkEnable
        float m_flFogHeightExponent; // 0x4d4        
        // metadata: MNetworkEnable
        float m_flLODBias; // 0x4d8        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x4dc        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x4dd        
        [[maybe_unused]] std::uint8_t pad_0x4de[0x2]; // 0x4de
        // metadata: MNetworkEnable
        float m_flFogMaxOpacity; // 0x4e0        
        // metadata: MNetworkEnable
        int32_t m_nCubemapSourceType; // 0x4e4        
        // metadata: MNetworkEnable
        // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
        char m_hSkyMaterial[0x8]; // 0x4e8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSkyEntity; // 0x4f0        
        // metadata: MNetworkEnable
        // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
        char m_hFogCubemapTexture[0x8]; // 0x4f8        
        // metadata: MNetworkEnable
        bool m_bHasHeightFogEnd; // 0x500        
        bool m_bFirstTime; // 0x501        
        [[maybe_unused]] std::uint8_t pad_0x502[0x6];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvCubemapFog because it is not a standard-layout class
    static_assert(sizeof(CEnvCubemapFog) == 0x508);
};

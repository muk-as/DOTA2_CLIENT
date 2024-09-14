#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0x588
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
    class C_EnvCubemapFog : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flEndDistance; // 0x538        
        // metadata: MNetworkEnable
        float m_flStartDistance; // 0x53c        
        // metadata: MNetworkEnable
        float m_flFogFalloffExponent; // 0x540        
        // metadata: MNetworkEnable
        bool m_bHeightFogEnabled; // 0x544        
        [[maybe_unused]] std::uint8_t pad_0x545[0x3]; // 0x545
        // metadata: MNetworkEnable
        float m_flFogHeightWidth; // 0x548        
        // metadata: MNetworkEnable
        float m_flFogHeightEnd; // 0x54c        
        // metadata: MNetworkEnable
        float m_flFogHeightStart; // 0x550        
        // metadata: MNetworkEnable
        float m_flFogHeightExponent; // 0x554        
        // metadata: MNetworkEnable
        float m_flLODBias; // 0x558        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x55c        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x55d        
        [[maybe_unused]] std::uint8_t pad_0x55e[0x2]; // 0x55e
        // metadata: MNetworkEnable
        float m_flFogMaxOpacity; // 0x560        
        // metadata: MNetworkEnable
        int32_t m_nCubemapSourceType; // 0x564        
        // metadata: MNetworkEnable
        // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
        char m_hSkyMaterial[0x8]; // 0x568        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSkyEntity; // 0x570        
        // metadata: MNetworkEnable
        // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
        char m_hFogCubemapTexture[0x8]; // 0x578        
        // metadata: MNetworkEnable
        bool m_bHasHeightFogEnd; // 0x580        
        bool m_bFirstTime; // 0x581        
        [[maybe_unused]] std::uint8_t pad_0x582[0x6];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvCubemapFog because it is not a standard-layout class
    static_assert(sizeof(C_EnvCubemapFog) == 0x588);
};

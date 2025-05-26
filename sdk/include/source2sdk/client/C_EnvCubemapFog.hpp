#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
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
        class C_EnvCubemapFog : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flEndDistance; // 0x5e0            
            // metadata: MNetworkEnable
            float m_flStartDistance; // 0x5e4            
            // metadata: MNetworkEnable
            float m_flFogFalloffExponent; // 0x5e8            
            // metadata: MNetworkEnable
            bool m_bHeightFogEnabled; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            // metadata: MNetworkEnable
            float m_flFogHeightWidth; // 0x5f0            
            // metadata: MNetworkEnable
            float m_flFogHeightEnd; // 0x5f4            
            // metadata: MNetworkEnable
            float m_flFogHeightStart; // 0x5f8            
            // metadata: MNetworkEnable
            float m_flFogHeightExponent; // 0x5fc            
            // metadata: MNetworkEnable
            float m_flLODBias; // 0x600            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x604            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x605            
            uint8_t _pad0606[0x2]; // 0x606
            // metadata: MNetworkEnable
            float m_flFogMaxOpacity; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nCubemapSourceType; // 0x60c            
            // metadata: MNetworkEnable
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x610            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSkyEntity; // 0x618            
            // metadata: MNetworkEnable
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x620            
            // metadata: MNetworkEnable
            bool m_bHasHeightFogEnd; // 0x628            
            bool m_bFirstTime; // 0x629            
            uint8_t _pad062a[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCubemapFog) == 0x630);
    };
};

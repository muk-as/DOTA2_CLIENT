#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x528
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
        class CEnvCubemapFog : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flEndDistance; // 0x4d8            
            // metadata: MNetworkEnable
            float m_flStartDistance; // 0x4dc            
            // metadata: MNetworkEnable
            float m_flFogFalloffExponent; // 0x4e0            
            // metadata: MNetworkEnable
            bool m_bHeightFogEnabled; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            // metadata: MNetworkEnable
            float m_flFogHeightWidth; // 0x4e8            
            // metadata: MNetworkEnable
            float m_flFogHeightEnd; // 0x4ec            
            // metadata: MNetworkEnable
            float m_flFogHeightStart; // 0x4f0            
            // metadata: MNetworkEnable
            float m_flFogHeightExponent; // 0x4f4            
            // metadata: MNetworkEnable
            float m_flLODBias; // 0x4f8            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4fc            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x4fd            
            uint8_t _pad04fe[0x2]; // 0x4fe
            // metadata: MNetworkEnable
            float m_flFogMaxOpacity; // 0x500            
            // metadata: MNetworkEnable
            std::int32_t m_nCubemapSourceType; // 0x504            
            // metadata: MNetworkEnable
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x508            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSkyEntity; // 0x510            
            // metadata: MNetworkEnable
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x518            
            // metadata: MNetworkEnable
            bool m_bHasHeightFogEnd; // 0x520            
            bool m_bFirstTime; // 0x521            
            uint8_t _pad0522[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCubemapFog) == 0x528);
    };
};

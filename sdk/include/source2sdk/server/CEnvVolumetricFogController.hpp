#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x590
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "float m_flScattering"
        // static metadata: MNetworkVarNames "Color m_TintColor"
        // static metadata: MNetworkVarNames "float m_flAnisotropy"
        // static metadata: MNetworkVarNames "float m_flFadeSpeed"
        // static metadata: MNetworkVarNames "float m_flDrawDistance"
        // static metadata: MNetworkVarNames "float m_flFadeInStart"
        // static metadata: MNetworkVarNames "float m_flFadeInEnd"
        // static metadata: MNetworkVarNames "float m_flIndirectStrength"
        // static metadata: MNetworkVarNames "int m_nVolumeDepth"
        // static metadata: MNetworkVarNames "float m_fFirstVolumeSliceThickness"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimX"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimY"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimZ"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartAnisoTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartScatterTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
        // static metadata: MNetworkVarNames "float m_flStartAnisotropy"
        // static metadata: MNetworkVarNames "float m_flStartScattering"
        // static metadata: MNetworkVarNames "float m_flStartDrawDistance"
        // static metadata: MNetworkVarNames "float m_flDefaultAnisotropy"
        // static metadata: MNetworkVarNames "float m_flDefaultScattering"
        // static metadata: MNetworkVarNames "float m_flDefaultDrawDistance"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bEnableIndirect"
        // static metadata: MNetworkVarNames "bool m_bIsMaster"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
        // static metadata: MNetworkVarNames "int m_nForceRefreshCount"
        // static metadata: MNetworkVarNames "float m_fNoiseSpeed"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "Vector m_vNoiseScale"
        // static metadata: MNetworkVarNames "float m_fWindSpeed"
        // static metadata: MNetworkVarNames "Vector m_vWindDirection"
        #pragma pack(push, 1)
        class CEnvVolumetricFogController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flScattering; // 0x4e0            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x4e4            
            // metadata: MNetworkEnable
            float m_flAnisotropy; // 0x4e8            
            // metadata: MNetworkEnable
            float m_flFadeSpeed; // 0x4ec            
            // metadata: MNetworkEnable
            float m_flDrawDistance; // 0x4f0            
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0x4f4            
            // metadata: MNetworkEnable
            float m_flFadeInEnd; // 0x4f8            
            // metadata: MNetworkEnable
            float m_flIndirectStrength; // 0x4fc            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeDepth; // 0x500            
            // metadata: MNetworkEnable
            float m_fFirstVolumeSliceThickness; // 0x504            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimX; // 0x508            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimY; // 0x50c            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimZ; // 0x510            
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x514            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x520            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x52c            
            uint8_t _pad052d[0x3]; // 0x52d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x530            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x534            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x538            
            // metadata: MNetworkEnable
            float m_flStartAnisotropy; // 0x53c            
            // metadata: MNetworkEnable
            float m_flStartScattering; // 0x540            
            // metadata: MNetworkEnable
            float m_flStartDrawDistance; // 0x544            
            // metadata: MNetworkEnable
            float m_flDefaultAnisotropy; // 0x548            
            // metadata: MNetworkEnable
            float m_flDefaultScattering; // 0x54c            
            // metadata: MNetworkEnable
            float m_flDefaultDrawDistance; // 0x550            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x554            
            // metadata: MNetworkEnable
            bool m_bEnableIndirect; // 0x555            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x556            
            uint8_t _pad0557[0x1]; // 0x557
            // metadata: MNetworkEnable
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x558            
            // metadata: MNetworkEnable
            std::int32_t m_nForceRefreshCount; // 0x560            
            // metadata: MNetworkEnable
            float m_fNoiseSpeed; // 0x564            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x568            
            // metadata: MNetworkEnable
            Vector m_vNoiseScale; // 0x56c            
            // metadata: MNetworkEnable
            float m_fWindSpeed; // 0x578            
            // metadata: MNetworkEnable
            Vector m_vWindDirection; // 0x57c            
            bool m_bFirstTime; // 0x588            
            uint8_t _pad0589[0x7];
            
            // Datamap fields:
            // void InputSetToDefaults; // 0x0
            // float InputSetScattering; // 0x0
            // float InputSetAnisotropy; // 0x0
            // float InputSetFadeSpeed; // 0x0
            // float InputSetDrawDistance; // 0x0
            // bool EnableIndirect; // 0x0
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // void ForceRefresh; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogController) == 0x590);
    };
};

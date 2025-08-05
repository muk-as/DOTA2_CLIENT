#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bIndirectUseLPVs"
        // static metadata: MNetworkVarNames "float m_flStrength"
        // static metadata: MNetworkVarNames "int m_nFalloffShape"
        // static metadata: MNetworkVarNames "float m_flFalloffExponent"
        // static metadata: MNetworkVarNames "float m_flHeightFogDepth"
        // static metadata: MNetworkVarNames "float m_fHeightFogEdgeWidth"
        // static metadata: MNetworkVarNames "float m_fIndirectLightStrength"
        // static metadata: MNetworkVarNames "float m_fSunLightStrength"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "Color m_TintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideTintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideSunLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideNoiseStrength"
        #pragma pack(push, 1)
        class C_EnvVolumetricFogVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x5ec            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x604            
            // metadata: MNetworkEnable
            bool m_bIndirectUseLPVs; // 0x605            
            uint8_t _pad0606[0x2]; // 0x606
            // metadata: MNetworkEnable
            float m_flStrength; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x60c            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x610            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x614            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x618            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x61c            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x620            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x624            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x628            
            // metadata: MNetworkEnable
            bool m_bOverrideTintColor; // 0x62c            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x62d            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x62e            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x62f            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogVolume) == 0x630);
    };
};

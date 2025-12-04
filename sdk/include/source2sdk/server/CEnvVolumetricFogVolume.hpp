#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class CEnvVolumetricFogVolume : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIndirectUseLPVs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flStrength; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x_            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x_            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x_            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x_            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x_            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x_            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x_            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOverrideTintColor; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x_            
            
            // Datamap fields:
            // bool InputEnable; // 0x_
            // bool InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogVolume) == 0x_);
    };
};

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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x528
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
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
        // static metadata: MNetworkVarNames "bool m_bAllowLPVIndirect"
        #pragma pack(push, 1)
        class CEnvVolumetricFogVolume : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x4dc            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x4e8            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            // metadata: MNetworkEnable
            float m_flStrength; // 0x4f8            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x4fc            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x500            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x504            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x508            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x50c            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x510            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x514            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x518            
            // metadata: MNetworkEnable
            bool m_bOverrideTintColor; // 0x51c            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x51d            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x51e            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x51f            
            // metadata: MNetworkEnable
            bool m_bAllowLPVIndirect; // 0x520            
            uint8_t _pad0521[0x7];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogVolume) == 0x528);
    };
};

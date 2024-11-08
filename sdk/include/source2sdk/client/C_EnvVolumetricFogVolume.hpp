#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x5b0
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
    class C_EnvVolumetricFogVolume : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bActive; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x3]; // 0x561
        // metadata: MNetworkEnable
        Vector m_vBoxMins; // 0x564        
        // metadata: MNetworkEnable
        Vector m_vBoxMaxs; // 0x570        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        // metadata: MNetworkEnable
        float m_flStrength; // 0x580        
        // metadata: MNetworkEnable
        int32_t m_nFalloffShape; // 0x584        
        // metadata: MNetworkEnable
        float m_flFalloffExponent; // 0x588        
        // metadata: MNetworkEnable
        float m_flHeightFogDepth; // 0x58c        
        // metadata: MNetworkEnable
        float m_fHeightFogEdgeWidth; // 0x590        
        // metadata: MNetworkEnable
        float m_fIndirectLightStrength; // 0x594        
        // metadata: MNetworkEnable
        float m_fSunLightStrength; // 0x598        
        // metadata: MNetworkEnable
        float m_fNoiseStrength; // 0x59c        
        // metadata: MNetworkEnable
        Color m_TintColor; // 0x5a0        
        // metadata: MNetworkEnable
        bool m_bOverrideTintColor; // 0x5a4        
        // metadata: MNetworkEnable
        bool m_bOverrideIndirectLightStrength; // 0x5a5        
        // metadata: MNetworkEnable
        bool m_bOverrideSunLightStrength; // 0x5a6        
        // metadata: MNetworkEnable
        bool m_bOverrideNoiseStrength; // 0x5a7        
        // metadata: MNetworkEnable
        bool m_bAllowLPVIndirect; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5a9[0x7];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
    static_assert(sizeof(C_EnvVolumetricFogVolume) == 0x5b0);
};

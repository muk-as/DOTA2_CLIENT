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
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flVisibilityStrength"
    // static metadata: MNetworkVarNames "float m_flFogDistanceMultiplier"
    // static metadata: MNetworkVarNames "float m_flFogMaxDensityMultiplier"
    // static metadata: MNetworkVarNames "float m_flFadeTime"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "bool m_bIsEnabled"
    #pragma pack(push, 1)
    class C_PlayerVisibility : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flVisibilityStrength; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogDistanceMultiplier; // 0x53c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogMaxDensityMultiplier; // 0x540        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFadeTime; // 0x544        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x548        
        // metadata: MNetworkEnable
        bool m_bIsEnabled; // 0x549        
        [[maybe_unused]] std::uint8_t pad_0x54a[0x1e];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
        // float InputSetPlayerVisibilityStrength; // 0x0
        // float InputSetPlayerFogDistanceMultiplier; // 0x0
        // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlayerVisibility because it is not a standard-layout class
    static_assert(sizeof(C_PlayerVisibility) == 0x568);
};

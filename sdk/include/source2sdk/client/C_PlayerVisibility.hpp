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
    // Size: 0x590
    // Has VTable
    // Construct allowed
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
        float m_flVisibilityStrength; // 0x560        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogDistanceMultiplier; // 0x564        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogMaxDensityMultiplier; // 0x568        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFadeTime; // 0x56c        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x570        
        // metadata: MNetworkEnable
        bool m_bIsEnabled; // 0x571        
        [[maybe_unused]] std::uint8_t pad_0x572[0x1e];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
        // float InputSetPlayerVisibilityStrength; // 0x0
        // float InputSetPlayerFogDistanceMultiplier; // 0x0
        // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlayerVisibility because it is not a standard-layout class
    static_assert(sizeof(C_PlayerVisibility) == 0x590);
};

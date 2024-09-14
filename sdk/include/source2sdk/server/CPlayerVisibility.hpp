#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d0
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
    class CPlayerVisibility : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flVisibilityStrength; // 0x4b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogDistanceMultiplier; // 0x4bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFogMaxDensityMultiplier; // 0x4c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
        float m_flFadeTime; // 0x4c4        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x4c8        
        // metadata: MNetworkEnable
        bool m_bIsEnabled; // 0x4c9        
        [[maybe_unused]] std::uint8_t pad_0x4ca[0x6];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
        // float InputSetPlayerVisibilityStrength; // 0x0
        // float InputSetPlayerFogDistanceMultiplier; // 0x0
        // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayerVisibility because it is not a standard-layout class
    static_assert(sizeof(CPlayerVisibility) == 0x4d0);
};

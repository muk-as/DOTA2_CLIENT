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
        // Size: 0x618
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
        class C_PlayerVisibility : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flVisibilityStrength; // 0x5e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFogDistanceMultiplier; // 0x5ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFogMaxDensityMultiplier; // 0x5f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFadeTime; // 0x5f4            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_bIsEnabled; // 0x5f9            
            uint8_t _pad05fa[0x1e];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // float InputSetPlayerVisibilityStrength; // 0x0
            // float InputSetPlayerFogDistanceMultiplier; // 0x0
            // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerVisibility) == 0x618);
    };
};

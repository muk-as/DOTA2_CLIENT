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
        // static metadata: MNetworkVarNames "float m_flVisibilityStrength"
        // static metadata: MNetworkVarNames "float m_flFogDistanceMultiplier"
        // static metadata: MNetworkVarNames "float m_flFogMaxDensityMultiplier"
        // static metadata: MNetworkVarNames "float m_flFadeTime"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bIsEnabled"
        #pragma pack(push, 1)
        class CPlayerVisibility : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flVisibilityStrength; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFogDistanceMultiplier; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFogMaxDensityMultiplier; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PlayerVisibilityStateChanged"
            float m_flFadeTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsEnabled; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool InputEnable; // 0x_
            // bool InputDisable; // 0x_
            // float InputSetPlayerVisibilityStrength; // 0x_
            // float InputSetPlayerFogDistanceMultiplier; // 0x_
            // float InputSetPlayerFogMaxDensityMultiplier; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerVisibility) == 0x_);
    };
};

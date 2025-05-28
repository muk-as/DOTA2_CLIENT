#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1888            
            Vector m_vStartPosition; // 0x188c            
            float m_flCurrentTimeHoriz; // 0x1898            
            float m_flCurrentTimeVert; // 0x189c            
            bool m_bHorizontalMotionInterrupted; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            Vector m_vHorizontalVelocity; // 0x18a4            
            Vector m_vLastKnownTargetPosition; // 0x18b0            
            float m_flInitialVelocityZ; // 0x18bc            
            std::int32_t acceleration_z; // 0x18c0            
            std::int32_t min_height_above_lowest; // 0x18c4            
            std::int32_t min_height_above_highest; // 0x18c8            
            std::int32_t max_horizontal_acceleration; // 0x18cc            
            std::int32_t spring_channel_pct; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement) == 0x18d8);
    };
};

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
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x1888            
            float m_flInitialVelocity; // 0x188c            
            Vector m_vStartPosition; // 0x1890            
            Vector m_vTargetHorizontalDirection; // 0x189c            
            Vector m_vTargetPosition; // 0x18a8            
            float m_flCurrentTimeHoriz; // 0x18b4            
            float m_flCurrentTimeVert; // 0x18b8            
            bool m_bInterrupted; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            float m_flHorizDelayTime; // 0x18c0            
            float m_flVertDelayTime; // 0x18c4            
            float m_flLeapSequenceDuration; // 0x18c8            
            float m_flPlaybackRate; // 0x18cc            
            std::int32_t pounce_distance; // 0x18d0            
            float pounce_speed; // 0x18d4            
            float pounce_acceleration; // 0x18d8            
            float initial_delay; // 0x18dc            
            float landing_delay; // 0x18e0            
            uint8_t _pad18e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Leap) == 0x18e8);
    };
};

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mirana_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1878            
            float m_flInitialVelocity; // 0x187c            
            Vector m_vStartPosition; // 0x1880            
            Vector m_vTargetHorizontalDirection; // 0x188c            
            float m_flCurrentTimeHoriz; // 0x1898            
            float m_flCurrentTimeVert; // 0x189c            
            bool m_bInterrupted; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            Vector m_vFaceDirection; // 0x18a4            
            std::int32_t leap_distance; // 0x18b0            
            float leap_speed; // 0x18b4            
            float leap_acceleration; // 0x18b8            
            std::int32_t leap_radius; // 0x18bc            
            float leap_bonus_duration; // 0x18c0            
            bool m_bLaunched; // 0x18c4            
            uint8_t _pad18c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mirana_Leap) == 0x18c8);
    };
};

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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active : public source2sdk::client::CDOTA_Buff
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
            std::int32_t leap_distance; // 0x18a4            
            float leap_speed; // 0x18a8            
            float leap_acceleration; // 0x18ac            
            std::int32_t leap_radius; // 0x18b0            
            float leap_bonus_duration; // 0x18b4            
            bool m_bLaunched; // 0x18b8            
            uint8_t _pad18b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active) == 0x18c0);
    };
};

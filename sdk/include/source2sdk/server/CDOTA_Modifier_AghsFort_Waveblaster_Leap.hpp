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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Waveblaster_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x_            
            float m_flInitialVelocity; // 0x_            
            Vector m_vStartPosition; // 0x_            
            Vector m_vTargetHorizontalDirection; // 0x_            
            float m_flCurrentTimeHoriz; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            bool m_bInterrupted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float leap_speed; // 0x_            
            float leap_acceleration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Waveblaster_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Waveblaster_Leap) == 0x_);
    };
};

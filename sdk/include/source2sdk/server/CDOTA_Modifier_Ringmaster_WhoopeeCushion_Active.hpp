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
        class CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active : public source2sdk::client::CDOTA_Buff
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
            std::int32_t leap_distance; // 0x_            
            float leap_speed; // 0x_            
            float leap_acceleration; // 0x_            
            std::int32_t leap_radius; // 0x_            
            float leap_bonus_duration; // 0x_            
            bool m_bLaunched; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active) == 0x_);
    };
};

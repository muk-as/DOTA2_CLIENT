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
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x17f8            
            float m_flInitialVelocity; // 0x17fc            
            Vector m_vStartPosition; // 0x1800            
            Vector m_vTargetHorizontalDirection; // 0x180c            
            Vector m_vTargetPosition; // 0x1818            
            float m_flCurrentTimeHoriz; // 0x1824            
            float m_flCurrentTimeVert; // 0x1828            
            bool m_bInterrupted; // 0x182c            
            uint8_t _pad182d[0x3]; // 0x182d
            float m_flHorizDelayTime; // 0x1830            
            float m_flVertDelayTime; // 0x1834            
            float m_flLeapSequenceDuration; // 0x1838            
            float m_flPlaybackRate; // 0x183c            
            std::int32_t pounce_distance; // 0x1840            
            float pounce_speed; // 0x1844            
            float pounce_acceleration; // 0x1848            
            float initial_delay; // 0x184c            
            float landing_delay; // 0x1850            
            uint8_t _pad1854[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Leap) == 0x1858);
    };
};

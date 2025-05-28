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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_Suicide_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLoc; // 0x1888            
            float m_flPredictedTotalTime; // 0x1894            
            Vector m_vStartPosition; // 0x1898            
            float m_flCurrentTimeHoriz; // 0x18a4            
            float m_flCurrentTimeVert; // 0x18a8            
            bool m_bHorizontalMotionInterrupted; // 0x18ac            
            bool m_bDamageApplied; // 0x18ad            
            bool m_bTargetTeleported; // 0x18ae            
            uint8_t _pad18af[0x1]; // 0x18af
            Vector m_vHorizontalVelocity; // 0x18b0            
            Vector m_vLastKnownTargetPosition; // 0x18bc            
            float m_flInitialVelocityZ; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Suicide_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_Suicide_Leap) == 0x18d0);
    };
};

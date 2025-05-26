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
        class CDOTA_Modifier_Techies_Suicide_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLoc; // 0x1878            
            float m_flPredictedTotalTime; // 0x1884            
            Vector m_vStartPosition; // 0x1888            
            float m_flCurrentTimeHoriz; // 0x1894            
            float m_flCurrentTimeVert; // 0x1898            
            bool m_bHorizontalMotionInterrupted; // 0x189c            
            bool m_bDamageApplied; // 0x189d            
            bool m_bTargetTeleported; // 0x189e            
            uint8_t _pad189f[0x1]; // 0x189f
            Vector m_vHorizontalVelocity; // 0x18a0            
            Vector m_vLastKnownTargetPosition; // 0x18ac            
            float m_flInitialVelocityZ; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Suicide_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_Suicide_Leap) == 0x18c0);
    };
};

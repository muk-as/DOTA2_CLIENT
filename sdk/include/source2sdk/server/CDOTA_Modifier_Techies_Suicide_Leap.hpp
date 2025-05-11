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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_Suicide_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLoc; // 0x17f8            
            float m_flPredictedTotalTime; // 0x1804            
            Vector m_vStartPosition; // 0x1808            
            float m_flCurrentTimeHoriz; // 0x1814            
            float m_flCurrentTimeVert; // 0x1818            
            bool m_bHorizontalMotionInterrupted; // 0x181c            
            bool m_bDamageApplied; // 0x181d            
            bool m_bTargetTeleported; // 0x181e            
            uint8_t _pad181f[0x1]; // 0x181f
            Vector m_vHorizontalVelocity; // 0x1820            
            Vector m_vLastKnownTargetPosition; // 0x182c            
            float m_flInitialVelocityZ; // 0x1838            
            uint8_t _pad183c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Suicide_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_Suicide_Leap) == 0x1840);
    };
};

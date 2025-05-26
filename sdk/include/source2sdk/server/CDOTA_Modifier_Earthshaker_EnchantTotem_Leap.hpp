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
        class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x4]; // 0x1878
            Vector m_vLoc; // 0x187c            
            float m_flPredictedTotalTime; // 0x1888            
            Vector m_vStartPosition; // 0x188c            
            float m_flCurrentTimeHoriz; // 0x1898            
            float m_flCurrentTimeVert; // 0x189c            
            bool m_bHorizontalMotionInterrupted; // 0x18a0            
            bool m_bDamageApplied; // 0x18a1            
            bool m_bTargetTeleported; // 0x18a2            
            uint8_t _pad18a3[0x1]; // 0x18a3
            Vector m_vHorizontalVelocity; // 0x18a4            
            Vector m_vLastKnownTargetPosition; // 0x18b0            
            float m_flInitialVelocityZ; // 0x18bc            
            std::int32_t scepter_height; // 0x18c0            
            std::int32_t scepter_height_arcbuffer; // 0x18c4            
            std::int32_t scepter_acceleration_z; // 0x18c8            
            std::int32_t scepter_acceleration_horizontal; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x18d0);
    };
};

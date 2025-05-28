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
        class CDOTA_Modifier_Tusk_WalrusPunch_AirTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_threshold; // 0x1888            
            float m_flStartZ; // 0x188c            
            float m_flCurTime; // 0x1890            
            float m_flOldPitch; // 0x1894            
            QAngle m_qRotation; // 0x1898            
            std::int32_t m_nRotations; // 0x18a4            
            Vector m_vDirection; // 0x18a8            
            float m_flEndTime; // 0x18b4            
            float air_time; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusPunch_AirTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tusk_WalrusPunch_AirTime) == 0x18c0);
    };
};

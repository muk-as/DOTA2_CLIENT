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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_threshold; // 0x1878            
            float m_flStartZ; // 0x187c            
            float m_flCurTime; // 0x1880            
            float m_flOldPitch; // 0x1884            
            QAngle m_qRotation; // 0x1888            
            std::int32_t m_nRotations; // 0x1894            
            Vector m_vDirection; // 0x1898            
            float m_flEndTime; // 0x18a4            
            float push_length; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusKick_AirTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tusk_WalrusKick_AirTime) == 0x18b0);
    };
};

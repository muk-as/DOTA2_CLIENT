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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_threshold; // 0x17f8            
            float m_flStartZ; // 0x17fc            
            float m_flCurTime; // 0x1800            
            float m_flOldPitch; // 0x1804            
            QAngle m_qRotation; // 0x1808            
            std::int32_t m_nRotations; // 0x1814            
            Vector m_vDirection; // 0x1818            
            float m_flEndTime; // 0x1824            
            float push_length; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusKick_AirTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tusk_WalrusKick_AirTime) == 0x1830);
    };
};

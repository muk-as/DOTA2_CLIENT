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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Plus_HighFiveRequested : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t acknowledge_range; // 0x17f8            
            float think_interval; // 0x17fc            
            float acknowledged_cooldown; // 0x1800            
            bool m_bAcknowledged; // 0x1804            
            bool m_bWithEnemy; // 0x1805            
            bool m_bFirstThink; // 0x1806            
            uint8_t _pad1807[0x1]; // 0x1807
            std::int32_t high_five_level; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Plus_HighFiveRequested because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Plus_HighFiveRequested) == 0x1810);
    };
};

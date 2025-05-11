#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_BackdoorProtection : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActivated; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float m_flHealthToRestore; // 0x17fc            
            std::int32_t radius; // 0x1800            
            float activation_time; // 0x1804            
            std::int32_t regen_rate; // 0x1808            
            uint8_t _pad180c[0x4]; // 0x180c
            source2sdk::server::CountdownTimer m_TimerToActivate; // 0x1810            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_BackdoorProtection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_BackdoorProtection) == 0x1828);
    };
};

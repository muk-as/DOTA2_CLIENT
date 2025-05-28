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
        class CDOTA_Modifier_EmberSpirit_FlameGuard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t absorb_amount; // 0x1888            
            std::int32_t damage_per_second; // 0x188c            
            float radius; // 0x1890            
            float tick_interval; // 0x1894            
            std::int32_t shield_pct_absorb; // 0x1898            
            std::int32_t m_nAbsorbRemaining; // 0x189c            
            float m_flShowParticleInterval; // 0x18a0            
            bool m_bDestroy; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            float linger_duration; // 0x18a8            
            uint8_t _pad18ac[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FlameGuard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EmberSpirit_FlameGuard) == 0x18c0);
    };
};

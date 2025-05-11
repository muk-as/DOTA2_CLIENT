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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EmberSpirit_FlameGuard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t absorb_amount; // 0x17f8            
            std::int32_t damage_per_second; // 0x17fc            
            float radius; // 0x1800            
            float tick_interval; // 0x1804            
            std::int32_t shield_pct_absorb; // 0x1808            
            std::int32_t m_nAbsorbRemaining; // 0x180c            
            float m_flShowParticleInterval; // 0x1810            
            bool m_bDestroy; // 0x1814            
            uint8_t _pad1815[0x3]; // 0x1815
            float linger_duration; // 0x1818            
            uint8_t _pad181c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FlameGuard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EmberSpirit_FlameGuard) == 0x1828);
    };
};

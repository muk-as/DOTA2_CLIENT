#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ShadowShaman_Shackles : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t nShackleFXIndex; // 0x17f8            
            float tick_interval; // 0x17fc            
            float total_damage; // 0x1800            
            float channel_time; // 0x1804            
            float heal_percentage; // 0x1808            
            bool bApplyHeal; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            float scepter_shock_pct; // 0x1810            
            float scepter_shock_radius; // 0x1814            
            float scepter_shock_interval; // 0x1818            
            float ally_break_range; // 0x181c            
            uint8_t _pad1820[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Shackles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ShadowShaman_Shackles) == 0x1828);
    };
};

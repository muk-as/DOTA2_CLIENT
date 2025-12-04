#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ShadowShaman_Shackles : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t nShackleFXIndex; // 0x_            
            float tick_interval; // 0x_            
            float total_damage; // 0x_            
            float channel_time; // 0x_            
            float heal_percentage; // 0x_            
            bool bApplyHeal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float scepter_shock_pct; // 0x_            
            float scepter_shock_radius; // 0x_            
            float scepter_shock_interval; // 0x_            
            float ally_break_range; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextShockTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Shackles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ShadowShaman_Shackles) == 0x_);
    };
};

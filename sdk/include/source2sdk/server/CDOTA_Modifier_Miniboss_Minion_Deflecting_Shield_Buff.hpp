#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_barrier_pct_max_health; // 0x1888            
            float owner_max_barrier_pct_max_health; // 0x188c            
            float regeneration_to_max_seconds; // 0x1890            
            float decay_to_zero_seconds; // 0x1894            
            float damage_reflection_pct; // 0x1898            
            float damage_cooldown; // 0x189c            
            float aura_radius; // 0x18a0            
            float m_flMaxBarrier; // 0x18a4            
            float m_flBarrierAmount; // 0x18a8            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x18ac            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x18b0            
            uint8_t _pad18b4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff) == 0x18c8);
    };
};

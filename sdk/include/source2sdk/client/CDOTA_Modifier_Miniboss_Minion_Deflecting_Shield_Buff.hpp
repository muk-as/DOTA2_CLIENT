#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_barrier_pct_max_health; // 0x_            
            float owner_max_barrier_pct_max_health; // 0x_            
            float regeneration_to_max_seconds; // 0x_            
            float decay_to_zero_seconds; // 0x_            
            float damage_reflection_pct; // 0x_            
            float damage_cooldown; // 0x_            
            float aura_radius; // 0x_            
            float m_flMaxBarrier; // 0x_            
            float m_flBarrierAmount; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff) == 0x_);
    };
};

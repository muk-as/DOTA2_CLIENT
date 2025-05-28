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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1888            
            std::int32_t m_nHeroTickDamageApplied; // 0x188c            
            source2sdk::entity2::GameTime_t m_fLastEffectsTime; // 0x1890            
            float radius; // 0x1894            
            float buff_duration; // 0x1898            
            float debuff_duration; // 0x189c            
            std::int32_t max_damage; // 0x18a0            
            float max_stun; // 0x18a4            
            std::int32_t movespeed_bonus_pct; // 0x18a8            
            std::int32_t damage_per_tick; // 0x18ac            
            float tick_rate; // 0x18b0            
            float max_threshold_duration; // 0x18b4            
            std::int32_t can_end_early; // 0x18b8            
            std::int32_t shard_bonus_damage_pct; // 0x18bc            
            std::int32_t shard_heal_pct; // 0x18c0            
            float shard_creep_penalty; // 0x18c4            
            bool m_bIsReflection; // 0x18c8            
            uint8_t _pad18c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SpiritWalk_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_SpiritWalk_Buff) == 0x18d0);
    };
};

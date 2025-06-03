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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1878            
            std::int32_t m_nHeroTickDamageApplied; // 0x187c            
            source2sdk::entity2::GameTime_t m_fLastEffectsTime; // 0x1880            
            float radius; // 0x1884            
            float buff_duration; // 0x1888            
            float debuff_duration; // 0x188c            
            std::int32_t max_damage; // 0x1890            
            float max_stun; // 0x1894            
            std::int32_t movespeed_bonus_pct; // 0x1898            
            std::int32_t damage_per_tick; // 0x189c            
            float tick_rate; // 0x18a0            
            float max_threshold_duration; // 0x18a4            
            std::int32_t can_end_early; // 0x18a8            
            std::int32_t shard_bonus_damage_pct; // 0x18ac            
            std::int32_t shard_heal_pct; // 0x18b0            
            float shard_creep_penalty; // 0x18b4            
            bool m_bIsReflection; // 0x18b8            
            uint8_t _pad18b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SpiritWalk_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_SpiritWalk_Buff) == 0x18c0);
    };
};

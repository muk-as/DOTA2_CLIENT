#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_fStartTime; // 0x1708        
        int32_t m_nHeroTickDamageApplied; // 0x170c        
        entity2::GameTime_t m_fLastEffectsTime; // 0x1710        
        int32_t radius; // 0x1714        
        float buff_duration; // 0x1718        
        float debuff_duration; // 0x171c        
        int32_t max_damage; // 0x1720        
        float max_stun; // 0x1724        
        int32_t movespeed_bonus_pct; // 0x1728        
        int32_t damage_per_tick; // 0x172c        
        float tick_rate; // 0x1730        
        float max_threshold_duration; // 0x1734        
        int32_t can_end_early; // 0x1738        
        int32_t shard_bonus_damage_pct; // 0x173c        
        int32_t shard_heal_pct; // 0x1740        
        float shard_creep_penalty; // 0x1744        
        bool m_bIsReflection; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1749[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SpiritWalk_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_SpiritWalk_Buff) == 0x1750);
};

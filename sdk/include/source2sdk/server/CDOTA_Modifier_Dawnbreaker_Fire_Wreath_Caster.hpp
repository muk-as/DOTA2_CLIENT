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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x16e8        
        int32_t shard_movement_penalty; // 0x16ec        
        int32_t swipe_radius; // 0x16f0        
        int32_t swipe_damage; // 0x16f4        
        int32_t smash_radius; // 0x16f8        
        int32_t smash_damage; // 0x16fc        
        int32_t m_nCurrentSpeed; // 0x1700        
        float flSwipeInterval; // 0x1704        
        entity2::GameTime_t m_flNextHit; // 0x1708        
        int32_t iCurrentAttack; // 0x170c        
        int32_t total_attacks; // 0x1710        
        float smash_stun_duration; // 0x1714        
        float sweep_stun_duration; // 0x1718        
        bool m_bHasCompletedMove; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float duration; // 0x1720        
        Vector m_vTargetHorizontalDirection; // 0x1724        
        int32_t smash_distance_from_hero; // 0x1730        
        float animation_rate; // 0x1734        
        float turn_rate; // 0x1738        
        float m_flFacingTarget; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x1740);
};

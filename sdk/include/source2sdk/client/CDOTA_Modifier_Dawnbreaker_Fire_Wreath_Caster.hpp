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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x17f8            
            std::int32_t shard_movement_penalty; // 0x17fc            
            float swipe_radius; // 0x1800            
            float swipe_damage; // 0x1804            
            float smash_radius; // 0x1808            
            float smash_damage; // 0x180c            
            float m_flCurrentSpeed; // 0x1810            
            float flSwipeInterval; // 0x1814            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1818            
            std::int32_t iCurrentAttack; // 0x181c            
            std::int32_t total_attacks; // 0x1820            
            float smash_stun_duration; // 0x1824            
            float sweep_stun_duration; // 0x1828            
            bool m_bHasCompletedMove; // 0x182c            
            uint8_t _pad182d[0x3]; // 0x182d
            float duration; // 0x1830            
            Vector m_vTargetHorizontalDirection; // 0x1834            
            float smash_distance_from_hero; // 0x1840            
            float animation_rate; // 0x1844            
            float turn_rate; // 0x1848            
            float m_flFacingTarget; // 0x184c            
            float movespeed_bonus_self_max; // 0x1850            
            float movespeed_bonus_ally_max; // 0x1854            
            float movespeed_bonus_radius; // 0x1858            
            float movespeed_bonus_duration; // 0x185c            
            std::int32_t m_iSuccessfulSwipesHittingHeroes; // 0x1860            
            uint8_t _pad1864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x1868);
    };
};

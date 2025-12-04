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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x_            
            std::int32_t shard_movement_penalty; // 0x_            
            float swipe_radius; // 0x_            
            float swipe_damage; // 0x_            
            float smash_radius; // 0x_            
            float smash_damage; // 0x_            
            float m_flCurrentSpeed; // 0x_            
            float flSwipeInterval; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x_            
            std::int32_t iCurrentAttack; // 0x_            
            std::int32_t total_attacks; // 0x_            
            float smash_stun_duration; // 0x_            
            float sweep_stun_duration; // 0x_            
            bool m_bHasCompletedMove; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float duration; // 0x_            
            Vector m_vTargetHorizontalDirection; // 0x_            
            float smash_distance_from_hero; // 0x_            
            float animation_rate; // 0x_            
            float turn_rate; // 0x_            
            float m_flFacingTarget; // 0x_            
            float movespeed_bonus_self_max; // 0x_            
            float movespeed_bonus_ally_max; // 0x_            
            float movespeed_bonus_radius; // 0x_            
            float movespeed_bonus_duration; // 0x_            
            std::int32_t m_iSuccessfulSwipesHittingHeroes; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x_);
    };
};

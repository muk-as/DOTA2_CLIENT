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
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x1878            
            std::int32_t shard_movement_penalty; // 0x187c            
            float swipe_radius; // 0x1880            
            float swipe_damage; // 0x1884            
            float smash_radius; // 0x1888            
            float smash_damage; // 0x188c            
            float m_flCurrentSpeed; // 0x1890            
            float flSwipeInterval; // 0x1894            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1898            
            std::int32_t iCurrentAttack; // 0x189c            
            std::int32_t total_attacks; // 0x18a0            
            float smash_stun_duration; // 0x18a4            
            float sweep_stun_duration; // 0x18a8            
            bool m_bHasCompletedMove; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            float duration; // 0x18b0            
            Vector m_vTargetHorizontalDirection; // 0x18b4            
            float smash_distance_from_hero; // 0x18c0            
            float animation_rate; // 0x18c4            
            float turn_rate; // 0x18c8            
            float m_flFacingTarget; // 0x18cc            
            float movespeed_bonus_self_max; // 0x18d0            
            float movespeed_bonus_ally_max; // 0x18d4            
            float movespeed_bonus_radius; // 0x18d8            
            float movespeed_bonus_duration; // 0x18dc            
            std::int32_t m_iSuccessfulSwipesHittingHeroes; // 0x18e0            
            uint8_t _pad18e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x18e8);
    };
};

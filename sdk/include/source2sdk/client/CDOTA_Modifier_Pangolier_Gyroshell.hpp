#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_DebuffImmune.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        class CDOTA_Modifier_Pangolier_Gyroshell : public source2sdk::client::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x_            
            float tick_interval; // 0x_            
            float forward_move_speed; // 0x_            
            float turn_rate_boosted; // 0x_            
            float turn_rate; // 0x_            
            float hit_radius; // 0x_            
            float knockback_radius; // 0x_            
            std::int32_t damage_pct; // 0x_            
            bool m_bHitFirstUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x_            
            float hit_recover_time; // 0x_            
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x_            
            float jump_recover_time; // 0x_            
            float m_flTurnBoostProgress; // 0x_            
            float m_flFacingTarget; // 0x_            
            bool m_bIsJumping; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x_]; // 0x_            
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x_]; // 0x_            
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x_]; // 0x_            
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Gyroshell) == 0x_);
    };
};

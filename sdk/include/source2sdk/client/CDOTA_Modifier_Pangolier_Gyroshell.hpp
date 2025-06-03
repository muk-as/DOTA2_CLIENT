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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Gyroshell : public source2sdk::client::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x1878            
            float tick_interval; // 0x187c            
            float forward_move_speed; // 0x1880            
            float turn_rate_boosted; // 0x1884            
            float turn_rate; // 0x1888            
            float hit_radius; // 0x188c            
            float knockback_radius; // 0x1890            
            std::int32_t damage_pct; // 0x1894            
            bool m_bHitFirstUpdate; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x189c            
            float hit_recover_time; // 0x18a0            
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x18a4            
            float jump_recover_time; // 0x18a8            
            float m_flTurnBoostProgress; // 0x18ac            
            float m_flFacingTarget; // 0x18b0            
            bool m_bIsJumping; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x18c0            
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x18d8            
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x18f0            
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1908            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Gyroshell) == 0x1920);
    };
};

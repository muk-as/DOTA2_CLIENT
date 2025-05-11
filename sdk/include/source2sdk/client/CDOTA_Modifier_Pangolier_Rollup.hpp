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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Rollup : public source2sdk::client::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x17f8            
            float tick_interval; // 0x17fc            
            float forward_move_speed; // 0x1800            
            float turn_rate_boosted; // 0x1804            
            float turn_rate; // 0x1808            
            float hit_radius; // 0x180c            
            float knockback_radius; // 0x1810            
            bool m_bHitFirstUpdate; // 0x1814            
            uint8_t _pad1815[0x3]; // 0x1815
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x1818            
            float hit_recover_time; // 0x181c            
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x1820            
            float jump_recover_time; // 0x1824            
            float m_flTurnBoostProgress; // 0x1828            
            float m_flFacingTarget; // 0x182c            
            source2sdk::entity2::GameTime_t m_flLastHeroAttackTime; // 0x1830            
            bool m_bIsJumping; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1838            
            float m_flGyroshellDurationRemaining; // 0x183c            
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1840            
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x1858            
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x1870            
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Rollup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Rollup) == 0x18a0);
    };
};

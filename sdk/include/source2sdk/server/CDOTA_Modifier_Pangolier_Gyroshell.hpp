#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_DebuffImmune.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17b0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pangolier_Gyroshell : public server::CDOTA_Modifier_DebuffImmune
    {
    public:
        int32_t mp_cost_per_second; // 0x1708        
        float tick_interval; // 0x170c        
        float forward_move_speed; // 0x1710        
        float turn_rate_boosted; // 0x1714        
        float turn_rate; // 0x1718        
        int32_t hit_radius; // 0x171c        
        int32_t knockback_radius; // 0x1720        
        int32_t damage_pct; // 0x1724        
        bool m_bHitFirstUpdate; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        entity2::GameTime_t m_flHitEndTime; // 0x172c        
        float hit_recover_time; // 0x1730        
        entity2::GameTime_t m_flJumpEndTime; // 0x1734        
        float jump_recover_time; // 0x1738        
        float m_flTurnBoostProgress; // 0x173c        
        float m_flFacingTarget; // 0x1740        
        bool m_bIsJumping; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3]; // 0x1745
        client::ParticleIndex_t m_nFXIndex; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4]; // 0x174c
        // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flTurnHistory;
        char m_flTurnHistory[0x18]; // 0x1750        
        // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesHitLastRicochet;
        char m_vecHeroesHitLastRicochet[0x18]; // 0x1768        
        // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesCredited;
        char m_vecHeroesCredited[0x18]; // 0x1780        
        // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesHitCurrentRicochet;
        char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1798        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pangolier_Gyroshell) == 0x17b0);
};

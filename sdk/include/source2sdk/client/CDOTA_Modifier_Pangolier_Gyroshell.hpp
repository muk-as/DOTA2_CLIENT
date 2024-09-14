#pragma once
#include "source2sdk/client/CDOTA_Modifier_DebuffImmune.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1790
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pangolier_Gyroshell : public client::CDOTA_Modifier_DebuffImmune
    {
    public:
        int32_t mp_cost_per_second; // 0x16e8        
        float tick_interval; // 0x16ec        
        float forward_move_speed; // 0x16f0        
        float turn_rate_boosted; // 0x16f4        
        float turn_rate; // 0x16f8        
        int32_t hit_radius; // 0x16fc        
        int32_t knockback_radius; // 0x1700        
        int32_t damage_pct; // 0x1704        
        bool m_bHitFirstUpdate; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        entity2::GameTime_t m_flHitEndTime; // 0x170c        
        float hit_recover_time; // 0x1710        
        entity2::GameTime_t m_flJumpEndTime; // 0x1714        
        float jump_recover_time; // 0x1718        
        float m_flTurnBoostProgress; // 0x171c        
        float m_flFacingTarget; // 0x1720        
        bool m_bIsJumping; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        client::ParticleIndex_t m_nFXIndex; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flTurnHistory;
        char m_flTurnHistory[0x18]; // 0x1730        
        // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
        char m_vecHeroesHitLastRicochet[0x18]; // 0x1748        
        // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHeroesCredited;
        char m_vecHeroesCredited[0x18]; // 0x1760        
        // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
        char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1778        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pangolier_Gyroshell) == 0x1790);
};

#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1790
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CrystalMaiden_FreezingField : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        int32_t damage; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        float explosion_interval; // 0x1714        
        float shard_bonus_explosion; // 0x1718        
        float explosion_radius; // 0x171c        
        float slow_duration; // 0x1720        
        int32_t explosion_min_dist; // 0x1724        
        float explosion_max_dist; // 0x1728        
        float frostbite_delay; // 0x172c        
        entity2::GameTime_t m_fLastTick; // 0x1730        
        float m_fTimeAccumulator; // 0x1734        
        int32_t m_iExplosionCount; // 0x1738        
        int32_t m_iExplosionTotalCount; // 0x173c        
        int32_t m_iExplosionQuadrant; // 0x1740        
        int32_t m_iExplosionDistance; // 0x1744        
        int32_t shard_self_movement_speed_slow_pct; // 0x1748        
        client::ParticleIndex_t m_nFXIndex; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x1750[0x8]; // 0x1750
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1758        
        // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitHeroes;
        char m_hHitHeroes[0x18]; // 0x1770        
        bool m_bHitInvisibleHero; // 0x1788        
        [[maybe_unused]] std::uint8_t pad_0x1789[0x3]; // 0x1789
        int32_t can_move; // 0x178c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_FreezingField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_FreezingField) == 0x1790);
};

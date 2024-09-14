#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CrystalMaiden_FreezingField : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        int32_t damage; // 0x16ec        
        int32_t bonus_armor; // 0x16f0        
        float explosion_interval; // 0x16f4        
        float shard_bonus_explosion; // 0x16f8        
        float explosion_radius; // 0x16fc        
        float slow_duration; // 0x1700        
        int32_t explosion_min_dist; // 0x1704        
        float explosion_max_dist; // 0x1708        
        float frostbite_delay; // 0x170c        
        entity2::GameTime_t m_fLastTick; // 0x1710        
        float m_fTimeAccumulator; // 0x1714        
        int32_t m_iExplosionCount; // 0x1718        
        int32_t m_iExplosionTotalCount; // 0x171c        
        int32_t m_iExplosionQuadrant; // 0x1720        
        int32_t m_iExplosionDistance; // 0x1724        
        int32_t shard_self_movement_speed_slow_pct; // 0x1728        
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x1730[0x8]; // 0x1730
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1738        
        int32_t can_move; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_FreezingField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_FreezingField) == 0x1758);
};

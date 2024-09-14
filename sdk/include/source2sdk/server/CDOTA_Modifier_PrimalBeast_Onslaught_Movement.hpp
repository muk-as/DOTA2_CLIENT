#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Onslaught_Movement : public client::CDOTA_Buff
    {
    public:
        float tick_interval; // 0x16e8        
        float charge_speed; // 0x16ec        
        float movement_turn_rate; // 0x16f0        
        float knockback_radius; // 0x16f4        
        float knockback_distance; // 0x16f8        
        int32_t knockback_damage; // 0x16fc        
        int32_t m_nEnemyHeroesHit; // 0x1700        
        float m_flFacingTarget; // 0x1704        
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Onslaught_Movement) == 0x1728);
};

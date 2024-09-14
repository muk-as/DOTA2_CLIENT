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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SandKing_SandStorm : public client::CDOTA_Buff
    {
    public:
        int32_t sand_storm_radius; // 0x16e8        
        int32_t sand_storm_damage; // 0x16ec        
        float damage_tick_rate; // 0x16f0        
        entity2::GameTime_t m_flLastDamageTime; // 0x16f4        
        client::ParticleIndex_t m_nSandStormParticleIndex1; // 0x16f8        
        client::ParticleIndex_t m_nSandStormParticleIndex2; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1700[0x8]; // 0x1700
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x1708        
        int32_t sand_storm_move_speed_pct; // 0x170c        
        Vector vecSpawnPos; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_SandStorm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SandKing_SandStorm) == 0x1720);
};

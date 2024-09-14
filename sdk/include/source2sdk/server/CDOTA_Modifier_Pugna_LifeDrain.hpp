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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pugna_LifeDrain : public client::CDOTA_Buff
    {
    public:
        int32_t health_drain; // 0x16e8        
        int32_t ally_healing; // 0x16ec        
        float health_drain_death_boost; // 0x16f0        
        float tick_rate; // 0x16f4        
        bool m_bDoRangeCheck; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
        entity2::GameTime_t m_flElapsedTime; // 0x1700        
        bool m_bPrimary; // 0x1704        
        bool m_bShard; // 0x1705        
        bool m_bFromWard; // 0x1706        
        [[maybe_unused]] std::uint8_t pad_0x1707[0x1]; // 0x1707
        // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hWard;
        char m_hWard[0x4]; // 0x1708        
        float spell_amp_drain_duration; // 0x170c        
        int32_t max_spell_amp_drain_pct; // 0x1710        
        int32_t spell_amp_drain_rate; // 0x1714        
        int32_t spell_amp_drain_rate_ward; // 0x1718        
        int32_t spell_amp_drain_max; // 0x171c        
        int32_t health_to_mana_rate; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_LifeDrain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pugna_LifeDrain) == 0x1728);
};

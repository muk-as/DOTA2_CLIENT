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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_Flux : public client::CDOTA_Buff
    {
    public:
        int32_t m_nCasterTeam; // 0x16e8        
        int32_t damage_per_second; // 0x16ec        
        int32_t tempest_damage_per_second; // 0x16f0        
        int32_t search_radius; // 0x16f4        
        int32_t move_speed_slow_pct; // 0x16f8        
        int32_t tempest_move_speed_slow_pct; // 0x16fc        
        int32_t status_resist; // 0x1700        
        float think_interval; // 0x1704        
        int32_t applies_silence; // 0x1708        
        int32_t m_nCurrentMovementSlow; // 0x170c        
        int32_t m_nCurrentStatusResistance; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        bool m_bIsTempestVersion; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_Flux because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_Flux) == 0x1720);
};

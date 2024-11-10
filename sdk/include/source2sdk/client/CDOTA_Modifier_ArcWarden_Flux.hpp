#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_Flux : public client::CDOTA_Buff
    {
    public:
        int32_t m_nCasterTeam; // 0x1708        
        int32_t damage_per_second; // 0x170c        
        int32_t tempest_damage_per_second; // 0x1710        
        int32_t search_radius; // 0x1714        
        int32_t move_speed_slow_pct; // 0x1718        
        int32_t tempest_move_speed_slow_pct; // 0x171c        
        int32_t status_resist; // 0x1720        
        float think_interval; // 0x1724        
        int32_t applies_silence; // 0x1728        
        int32_t m_nCurrentMovementSlow; // 0x172c        
        int32_t m_nCurrentStatusResistance; // 0x1730        
        client::ParticleIndex_t m_nFXIndex; // 0x1734        
        bool m_bIsTempestVersion; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_Flux because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_Flux) == 0x1740);
};

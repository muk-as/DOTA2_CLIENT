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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public client::CDOTA_Buff
    {
    public:
        int32_t m_nProjectileID; // 0x16e8        
        int32_t projectile_speed; // 0x16ec        
        int32_t travel_speed_pct; // 0x16f0        
        int32_t m_nMaxRange; // 0x16f4        
        Vector m_vStartPoint; // 0x16f8        
        Vector m_vLastTrailThinkerLocation; // 0x1704        
        Vector m_vEndPointShard; // 0x1710        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x171c        
        int32_t flare_radius; // 0x1720        
        bool bHasStartedBurning; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        float flare_debuff_duration; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x1730);
};

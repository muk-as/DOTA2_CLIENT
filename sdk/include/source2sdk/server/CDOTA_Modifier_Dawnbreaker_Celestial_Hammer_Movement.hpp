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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public client::CDOTA_Buff
    {
    public:
        int32_t m_nProjectileID; // 0x1708        
        int32_t projectile_speed; // 0x170c        
        int32_t travel_speed_pct; // 0x1710        
        int32_t m_nMaxRange; // 0x1714        
        Vector m_vStartPoint; // 0x1718        
        Vector m_vLastTrailThinkerLocation; // 0x1724        
        Vector m_vEndPointShard; // 0x1730        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x173c        
        int32_t flare_radius; // 0x1740        
        bool bHasStartedBurning; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3]; // 0x1745
        float flare_debuff_duration; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x1750);
};

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
    // Size: 0x1768
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Lunge_Arc : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x16e8        
        Vector m_vStartPosition; // 0x16ec        
        float m_flCurrentTimeHoriz; // 0x16f8        
        float m_flCurrentTimeVert; // 0x16fc        
        bool m_bDamageApplied; // 0x1700        
        bool m_bTargetTeleported; // 0x1701        
        [[maybe_unused]] std::uint8_t pad_0x1702[0x2]; // 0x1702
        Vector m_vHorizontalVelocity; // 0x1704        
        Vector m_vLastKnownTargetPosition; // 0x1710        
        float m_flInitialVelocityZ; // 0x171c        
        float m_fClampedProjectileSpeed; // 0x1720        
        client::ParticleIndex_t m_nFXIndex; // 0x1724        
        float m_fAcceleration; // 0x1728        
        bool m_bTriggeredLandingAnim; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3]; // 0x172d
        int32_t m_nMaxJumpDistance; // 0x1730        
        int32_t min_jump_distance; // 0x1734        
        int32_t max_jump_distance; // 0x1738        
        float min_lob_travel_time; // 0x173c        
        float max_lob_travel_time; // 0x1740        
        int32_t landing_radius; // 0x1744        
        float debuff_duration; // 0x1748        
        float min_height_above_lowest; // 0x174c        
        float min_height_above_highest; // 0x1750        
        float min_acceleration; // 0x1754        
        float max_acceleration; // 0x1758        
        float impact_damage; // 0x175c        
        int32_t impact_position_offset; // 0x1760        
        float ally_buff_duration; // 0x1764        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Lunge_Arc) == 0x1768);
};

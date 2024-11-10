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
    // Size: 0x1788
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Lunge_Arc : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x1708        
        Vector m_vStartPosition; // 0x170c        
        float m_flCurrentTimeHoriz; // 0x1718        
        float m_flCurrentTimeVert; // 0x171c        
        bool m_bDamageApplied; // 0x1720        
        bool m_bTargetTeleported; // 0x1721        
        [[maybe_unused]] std::uint8_t pad_0x1722[0x2]; // 0x1722
        Vector m_vHorizontalVelocity; // 0x1724        
        Vector m_vLastKnownTargetPosition; // 0x1730        
        float m_flInitialVelocityZ; // 0x173c        
        float m_fClampedProjectileSpeed; // 0x1740        
        client::ParticleIndex_t m_nFXIndex; // 0x1744        
        float m_fAcceleration; // 0x1748        
        bool m_bTriggeredLandingAnim; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x174d[0x3]; // 0x174d
        int32_t m_nMaxJumpDistance; // 0x1750        
        int32_t min_jump_distance; // 0x1754        
        int32_t max_jump_distance; // 0x1758        
        float min_lob_travel_time; // 0x175c        
        float max_lob_travel_time; // 0x1760        
        int32_t landing_radius; // 0x1764        
        float debuff_duration; // 0x1768        
        float min_height_above_lowest; // 0x176c        
        float min_height_above_highest; // 0x1770        
        float min_acceleration; // 0x1774        
        float max_acceleration; // 0x1778        
        float impact_damage; // 0x177c        
        int32_t impact_position_offset; // 0x1780        
        float ally_buff_duration; // 0x1784        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Lunge_Arc) == 0x1788);
};

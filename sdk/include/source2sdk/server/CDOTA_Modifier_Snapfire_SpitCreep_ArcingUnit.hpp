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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x1708        
        Vector m_vStartPosition; // 0x170c        
        float m_flCurrentTimeHoriz; // 0x1718        
        float m_flCurrentTimeVert; // 0x171c        
        bool m_bHorizontalMotionInterrupted; // 0x1720        
        bool m_bDamageApplied; // 0x1721        
        bool m_bTargetTeleported; // 0x1722        
        [[maybe_unused]] std::uint8_t pad_0x1723[0x1]; // 0x1723
        Vector m_vHorizontalVelocity; // 0x1724        
        Vector m_vLastKnownTargetPosition; // 0x1730        
        float m_flInitialVelocityZ; // 0x173c        
        float m_fClampedProjectileSpeed; // 0x1740        
        client::ParticleIndex_t m_nFXIndex; // 0x1744        
        float m_fAcceleration; // 0x1748        
        int32_t min_range; // 0x174c        
        float min_lob_travel_time; // 0x1750        
        float max_lob_travel_time; // 0x1754        
        int32_t impact_radius; // 0x1758        
        int32_t projectile_vision; // 0x175c        
        float stun_duration; // 0x1760        
        float min_height_above_lowest; // 0x1764        
        float min_height_above_highest; // 0x1768        
        float min_acceleration; // 0x176c        
        float max_acceleration; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1774[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x1778);
};

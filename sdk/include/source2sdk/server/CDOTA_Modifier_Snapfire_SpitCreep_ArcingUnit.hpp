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
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x16e8        
        Vector m_vStartPosition; // 0x16ec        
        float m_flCurrentTimeHoriz; // 0x16f8        
        float m_flCurrentTimeVert; // 0x16fc        
        bool m_bHorizontalMotionInterrupted; // 0x1700        
        bool m_bDamageApplied; // 0x1701        
        bool m_bTargetTeleported; // 0x1702        
        [[maybe_unused]] std::uint8_t pad_0x1703[0x1]; // 0x1703
        Vector m_vHorizontalVelocity; // 0x1704        
        Vector m_vLastKnownTargetPosition; // 0x1710        
        float m_flInitialVelocityZ; // 0x171c        
        float m_fClampedProjectileSpeed; // 0x1720        
        client::ParticleIndex_t m_nFXIndex; // 0x1724        
        float m_fAcceleration; // 0x1728        
        int32_t min_range; // 0x172c        
        float min_lob_travel_time; // 0x1730        
        float max_lob_travel_time; // 0x1734        
        int32_t impact_radius; // 0x1738        
        int32_t projectile_vision; // 0x173c        
        float stun_duration; // 0x1740        
        float min_height_above_lowest; // 0x1744        
        float min_height_above_highest; // 0x1748        
        float min_acceleration; // 0x174c        
        float max_acceleration; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x1758);
};

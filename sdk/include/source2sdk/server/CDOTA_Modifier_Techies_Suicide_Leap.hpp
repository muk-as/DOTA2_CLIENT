#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Techies_Suicide_Leap : public client::CDOTA_Buff
    {
    public:
        Vector m_vLoc; // 0x16e8        
        float m_flPredictedTotalTime; // 0x16f4        
        Vector m_vStartPosition; // 0x16f8        
        float m_flCurrentTimeHoriz; // 0x1704        
        float m_flCurrentTimeVert; // 0x1708        
        bool m_bHorizontalMotionInterrupted; // 0x170c        
        bool m_bDamageApplied; // 0x170d        
        bool m_bTargetTeleported; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1]; // 0x170f
        Vector m_vHorizontalVelocity; // 0x1710        
        Vector m_vLastKnownTargetPosition; // 0x171c        
        float m_flInitialVelocityZ; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Suicide_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_Suicide_Leap) == 0x1730);
};
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
    // Size: 0x1748
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Leap : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTimeInAir; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        Vector m_vTargetPosition; // 0x1708        
        float m_flCurrentTimeHoriz; // 0x1714        
        float m_flCurrentTimeVert; // 0x1718        
        bool m_bInterrupted; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_flHorizDelayTime; // 0x1720        
        float m_flVertDelayTime; // 0x1724        
        float m_flLeapSequenceDuration; // 0x1728        
        float m_flPlaybackRate; // 0x172c        
        int32_t pounce_distance; // 0x1730        
        float pounce_speed; // 0x1734        
        float pounce_acceleration; // 0x1738        
        float initial_delay; // 0x173c        
        float landing_delay; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Leap) == 0x1748);
};

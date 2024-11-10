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
    // Size: 0x1768
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Leap : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTimeInAir; // 0x1708        
        float m_flInitialVelocity; // 0x170c        
        Vector m_vStartPosition; // 0x1710        
        Vector m_vTargetHorizontalDirection; // 0x171c        
        Vector m_vTargetPosition; // 0x1728        
        float m_flCurrentTimeHoriz; // 0x1734        
        float m_flCurrentTimeVert; // 0x1738        
        bool m_bInterrupted; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3]; // 0x173d
        float m_flHorizDelayTime; // 0x1740        
        float m_flVertDelayTime; // 0x1744        
        float m_flLeapSequenceDuration; // 0x1748        
        float m_flPlaybackRate; // 0x174c        
        int32_t pounce_distance; // 0x1750        
        float pounce_speed; // 0x1754        
        float pounce_acceleration; // 0x1758        
        float initial_delay; // 0x175c        
        float landing_delay; // 0x1760        
        [[maybe_unused]] std::uint8_t pad_0x1764[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Leap) == 0x1768);
};

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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Waveblaster_Leap : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTime; // 0x1708        
        float m_flInitialVelocity; // 0x170c        
        Vector m_vStartPosition; // 0x1710        
        Vector m_vTargetHorizontalDirection; // 0x171c        
        float m_flCurrentTimeHoriz; // 0x1728        
        float m_flCurrentTimeVert; // 0x172c        
        bool m_bInterrupted; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        float leap_speed; // 0x1734        
        float leap_acceleration; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Waveblaster_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Waveblaster_Leap) == 0x1740);
};

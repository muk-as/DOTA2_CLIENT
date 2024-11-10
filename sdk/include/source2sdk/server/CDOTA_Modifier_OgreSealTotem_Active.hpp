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
    class CDOTA_Modifier_OgreSealTotem_Active : public client::CDOTA_Buff
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
        Vector m_vLastOrderPos; // 0x1734        
        bool m_bIssuedOrder; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1741[0x3]; // 0x1741
        int32_t m_nCurrentBounce; // 0x1744        
        int32_t leap_distance; // 0x1748        
        float leap_speed; // 0x174c        
        float leap_acceleration; // 0x1750        
        int32_t leap_radius; // 0x1754        
        float leap_bonus_duration; // 0x1758        
        bool m_bLaunched; // 0x175c        
        [[maybe_unused]] std::uint8_t pad_0x175d[0x3]; // 0x175d
        float m_flFacingTarget; // 0x1760        
        float movement_turn_rate; // 0x1764        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_OgreSealTotem_Active) == 0x1768);
};

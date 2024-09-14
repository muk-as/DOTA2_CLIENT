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
    class CDOTA_Modifier_OgreSealTotem_Active : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTime; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        float m_flCurrentTimeHoriz; // 0x1708        
        float m_flCurrentTimeVert; // 0x170c        
        bool m_bInterrupted; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        Vector m_vLastOrderPos; // 0x1714        
        bool m_bIssuedOrder; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        int32_t m_nCurrentBounce; // 0x1724        
        int32_t leap_distance; // 0x1728        
        float leap_speed; // 0x172c        
        float leap_acceleration; // 0x1730        
        int32_t leap_radius; // 0x1734        
        float leap_bonus_duration; // 0x1738        
        bool m_bLaunched; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3]; // 0x173d
        float m_flFacingTarget; // 0x1740        
        float movement_turn_rate; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_OgreSealTotem_Active) == 0x1748);
};

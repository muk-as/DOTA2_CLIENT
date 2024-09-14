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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_Leap : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTime; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        float m_flCurrentTimeHoriz; // 0x1708        
        float m_flCurrentTimeVert; // 0x170c        
        bool m_bInterrupted; // 0x1710        
        bool m_bIsVectorTargeted; // 0x1711        
        [[maybe_unused]] std::uint8_t pad_0x1712[0x2]; // 0x1712
        Vector m_vFaceDirection; // 0x1714        
        int32_t leap_distance; // 0x1720        
        float shard_radius; // 0x1724        
        float shard_radius_end; // 0x1728        
        float shard_damage; // 0x172c        
        float shard_slow_pct; // 0x1730        
        float shard_slow_duration; // 0x1734        
        float leap_speed; // 0x1738        
        float leap_acceleration; // 0x173c        
        int32_t leap_radius; // 0x1740        
        float leap_bonus_duration; // 0x1744        
        bool m_bLaunched; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1749[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Leap) == 0x1750);
};

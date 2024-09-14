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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x16e8        
        Vector m_vStartPosition; // 0x16ec        
        float m_flCurrentTimeHoriz; // 0x16f8        
        float m_flCurrentTimeVert; // 0x16fc        
        bool m_bHorizontalMotionInterrupted; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x3]; // 0x1701
        Vector m_vHorizontalVelocity; // 0x1704        
        Vector m_vLastKnownTargetPosition; // 0x1710        
        float m_flInitialVelocityZ; // 0x171c        
        int32_t acceleration_z; // 0x1720        
        int32_t min_height_above_lowest; // 0x1724        
        int32_t min_height_above_highest; // 0x1728        
        int32_t max_horizontal_acceleration; // 0x172c        
        int32_t spring_channel_pct; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement) == 0x1738);
};

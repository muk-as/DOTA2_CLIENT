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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public client::CDOTA_Buff
    {
    public:
        float m_flPredictedTotalTime; // 0x1708        
        Vector m_vStartPosition; // 0x170c        
        float m_flCurrentTimeHoriz; // 0x1718        
        float m_flCurrentTimeVert; // 0x171c        
        bool m_bHorizontalMotionInterrupted; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        Vector m_vHorizontalVelocity; // 0x1724        
        Vector m_vLastKnownTargetPosition; // 0x1730        
        float m_flInitialVelocityZ; // 0x173c        
        int32_t acceleration_z; // 0x1740        
        int32_t min_height_above_lowest; // 0x1744        
        int32_t min_height_above_highest; // 0x1748        
        int32_t max_horizontal_acceleration; // 0x174c        
        int32_t spring_channel_pct; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement) == 0x1758);
};

#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public client::CDOTA_Buff
    {
    public:
        int32_t activation_num_quill_sprays; // 0x1708        
        float activation_spray_interval; // 0x170c        
        int32_t activation_angle; // 0x1710        
        int32_t cast_range_bonus; // 0x1714        
        int32_t activation_movement_speed_pct; // 0x1718        
        int32_t activation_turn_rate_pct; // 0x171c        
        int32_t activation_disable_turning; // 0x1720        
        int32_t activation_ignore_cast_angle; // 0x1724        
        int32_t activation_turn_rate; // 0x1728        
        float activation_delay; // 0x172c        
        entity2::GameTime_t m_fStartTime; // 0x1730        
        bool bDelayFinished; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3]; // 0x1735
        float m_flFacingTarget; // 0x1738        
        Vector m_vFacing; // 0x173c        
        int32_t m_nNumSprays; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray) == 0x1750);
};

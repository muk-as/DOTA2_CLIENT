#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_Warpath : public client::CDOTA_Buff
    {
    public:
        int32_t damage_per_stack; // 0x1708        
        int32_t move_speed_per_stack; // 0x170c        
        int32_t max_stacks; // 0x1710        
        float stack_duration; // 0x1714        
        int32_t aspd_per_stack; // 0x1718        
        float active_bonus_attack_percent; // 0x171c        
        float active_bonus_movement_percent; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Warpath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_Warpath) == 0x1728);
};

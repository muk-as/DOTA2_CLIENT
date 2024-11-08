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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Razor_StormSurge : public client::CDOTA_Buff
    {
    public:
        int32_t self_movement_speed_pct; // 0x1708        
        int32_t strike_pct_chance; // 0x170c        
        float strike_damage; // 0x1710        
        int32_t strike_move_slow_pct; // 0x1714        
        int32_t strike_search_radius; // 0x1718        
        int32_t strike_target_count; // 0x171c        
        float strike_slow_duration; // 0x1720        
        float strike_internal_cd; // 0x1724        
        float strike_cd_reduction_during_storm; // 0x1728        
        int32_t eye_of_the_storm_chance_multiplier; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StormSurge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Razor_StormSurge) == 0x1730);
};

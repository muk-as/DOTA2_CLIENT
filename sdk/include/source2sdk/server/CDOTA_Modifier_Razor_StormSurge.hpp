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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Razor_StormSurge : public client::CDOTA_Buff
    {
    public:
        int32_t self_movement_speed_pct; // 0x16e8        
        int32_t strike_pct_chance; // 0x16ec        
        float strike_damage; // 0x16f0        
        int32_t strike_move_slow_pct; // 0x16f4        
        int32_t strike_search_radius; // 0x16f8        
        int32_t strike_target_count; // 0x16fc        
        float strike_slow_duration; // 0x1700        
        float strike_internal_cd; // 0x1704        
        float strike_cd_reduction_during_storm; // 0x1708        
        int32_t eye_of_the_storm_chance_multiplier; // 0x170c        
        entity2::GameTime_t m_flNextShardProcTime; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StormSurge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Razor_StormSurge) == 0x1718);
};

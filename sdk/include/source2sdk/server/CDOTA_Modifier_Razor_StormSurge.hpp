#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Razor_StormSurge : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t self_movement_speed_pct; // 0x1888            
            std::int32_t strike_pct_chance; // 0x188c            
            float strike_damage; // 0x1890            
            std::int32_t strike_move_slow_pct; // 0x1894            
            float strike_search_radius; // 0x1898            
            std::int32_t strike_target_count; // 0x189c            
            float strike_slow_duration; // 0x18a0            
            float strike_internal_cd; // 0x18a4            
            float strike_cd_reduction_during_storm; // 0x18a8            
            std::int32_t eye_of_the_storm_chance_multiplier; // 0x18ac            
            source2sdk::entity2::GameTime_t m_flNextShardProcTime; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StormSurge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Razor_StormSurge) == 0x18b8);
    };
};

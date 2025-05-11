#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Medusa_MysticSnake : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x5b0            
            std::int32_t snake_jumps; // 0x5b4            
            std::int32_t snake_damage; // 0x5b8            
            std::int32_t snake_damage_pct; // 0x5bc            
            std::int32_t snake_mana_steal; // 0x5c0            
            std::int32_t snake_scale; // 0x5c4            
            std::int32_t snake_speed_scale; // 0x5c8            
            std::int32_t initial_speed; // 0x5cc            
            std::int32_t return_speed; // 0x5d0            
            float jump_delay; // 0x5d4            
            float slow_duration; // 0x5d8            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Medusa_MysticSnake) == 0x5e0);
    };
};

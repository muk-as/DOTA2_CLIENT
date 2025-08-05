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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Medusa_MysticSnake : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x688            
            std::int32_t snake_jumps; // 0x68c            
            std::int32_t snake_damage; // 0x690            
            std::int32_t snake_damage_pct; // 0x694            
            std::int32_t snake_mana_steal; // 0x698            
            std::int32_t snake_scale; // 0x69c            
            std::int32_t snake_speed_scale; // 0x6a0            
            std::int32_t initial_speed; // 0x6a4            
            std::int32_t return_speed; // 0x6a8            
            float jump_delay; // 0x6ac            
            float slow_duration; // 0x6b0            
            uint8_t _pad06b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Medusa_MysticSnake) == 0x6b8);
    };
};

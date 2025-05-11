#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Medusa_MysticSnake : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x5b8            
            std::int32_t snake_jumps; // 0x5bc            
            std::int32_t snake_damage; // 0x5c0            
            std::int32_t snake_damage_pct; // 0x5c4            
            std::int32_t snake_mana_steal; // 0x5c8            
            std::int32_t snake_scale; // 0x5cc            
            std::int32_t snake_speed_scale; // 0x5d0            
            std::int32_t initial_speed; // 0x5d4            
            std::int32_t return_speed; // 0x5d8            
            float jump_delay; // 0x5dc            
            float slow_duration; // 0x5e0            
            uint8_t _pad05e4[0xfc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Medusa_MysticSnake) == 0x6e0);
    };
};

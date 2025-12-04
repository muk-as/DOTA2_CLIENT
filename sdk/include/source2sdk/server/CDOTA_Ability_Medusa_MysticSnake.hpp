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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Medusa_MysticSnake : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x_            
            std::int32_t snake_jumps; // 0x_            
            std::int32_t snake_damage; // 0x_            
            std::int32_t snake_damage_pct; // 0x_            
            std::int32_t snake_mana_steal; // 0x_            
            std::int32_t snake_scale; // 0x_            
            std::int32_t snake_speed_scale; // 0x_            
            std::int32_t initial_speed; // 0x_            
            std::int32_t return_speed; // 0x_            
            float jump_delay; // 0x_            
            float slow_duration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Medusa_MysticSnake) == 0x_);
    };
};

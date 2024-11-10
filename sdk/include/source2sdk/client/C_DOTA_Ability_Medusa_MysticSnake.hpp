#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Medusa_MysticSnake : public client::C_DOTABaseAbility
    {
    public:
        float radius; // 0x600        
        int32_t snake_jumps; // 0x604        
        int32_t snake_damage; // 0x608        
        int32_t snake_damage_pct; // 0x60c        
        int32_t snake_mana_steal; // 0x610        
        int32_t snake_scale; // 0x614        
        int32_t snake_speed_scale; // 0x618        
        int32_t initial_speed; // 0x61c        
        int32_t return_speed; // 0x620        
        float jump_delay; // 0x624        
        float slow_duration; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Medusa_MysticSnake) == 0x630);
};

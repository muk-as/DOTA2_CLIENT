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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Medusa_MysticSnake : public client::C_DOTABaseAbility
    {
    public:
        float radius; // 0x5d8        
        int32_t snake_jumps; // 0x5dc        
        int32_t snake_damage; // 0x5e0        
        int32_t snake_damage_pct; // 0x5e4        
        int32_t snake_mana_steal; // 0x5e8        
        int32_t snake_scale; // 0x5ec        
        int32_t snake_speed_scale; // 0x5f0        
        int32_t initial_speed; // 0x5f4        
        int32_t return_speed; // 0x5f8        
        float jump_delay; // 0x5fc        
        float slow_duration; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Medusa_MysticSnake) == 0x608);
};

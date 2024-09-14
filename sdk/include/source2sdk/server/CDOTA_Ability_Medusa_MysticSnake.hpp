#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Medusa_MysticSnake : public server::CDOTABaseAbility
    {
    public:
        float radius; // 0x5a0        
        int32_t snake_jumps; // 0x5a4        
        int32_t snake_damage; // 0x5a8        
        int32_t snake_damage_pct; // 0x5ac        
        int32_t snake_mana_steal; // 0x5b0        
        int32_t snake_scale; // 0x5b4        
        int32_t snake_speed_scale; // 0x5b8        
        int32_t initial_speed; // 0x5bc        
        int32_t return_speed; // 0x5c0        
        float jump_delay; // 0x5c4        
        float slow_duration; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0xdc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Medusa_MysticSnake because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Medusa_MysticSnake) == 0x6a8);
};

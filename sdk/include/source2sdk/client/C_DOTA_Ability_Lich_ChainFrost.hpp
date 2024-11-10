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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Lich_ChainFrost : public client::C_DOTABaseAbility
    {
    public:
        float jump_range; // 0x600        
        int32_t jumps; // 0x604        
        float slow_duration; // 0x608        
        float vision_radius; // 0x60c        
        int32_t projectile_speed; // 0x610        
        int32_t initial_projectile_speed; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x618[0x8]; // 0x618
        int32_t bonus_jumps_per_hero_killed; // 0x620        
        int32_t bonus_jumps_per_creep_killed; // 0x624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Lich_ChainFrost) == 0x628);
};

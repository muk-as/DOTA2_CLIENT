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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Lich_ChainFrost : public client::C_DOTABaseAbility
    {
    public:
        float jump_range; // 0x5d8        
        int32_t jumps; // 0x5dc        
        float slow_duration; // 0x5e0        
        float vision_radius; // 0x5e4        
        int32_t projectile_speed; // 0x5e8        
        int32_t initial_projectile_speed; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x8]; // 0x5f0
        int32_t bonus_jumps_per_hero_killed; // 0x5f8        
        int32_t bonus_jumps_per_creep_killed; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Lich_ChainFrost) == 0x600);
};

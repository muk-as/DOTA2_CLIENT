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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Lich_ChainFrost : public server::CDOTABaseAbility
    {
    public:
        float jump_range; // 0x5a0        
        int32_t jumps; // 0x5a4        
        float slow_duration; // 0x5a8        
        float vision_radius; // 0x5ac        
        int32_t projectile_speed; // 0x5b0        
        int32_t initial_projectile_speed; // 0x5b4        
        [[maybe_unused]] std::uint8_t pad_0x5b8[0x8]; // 0x5b8
        int32_t bonus_jumps_per_hero_killed; // 0x5c0        
        int32_t bonus_jumps_per_creep_killed; // 0x5c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lich_ChainFrost) == 0x5c8);
};

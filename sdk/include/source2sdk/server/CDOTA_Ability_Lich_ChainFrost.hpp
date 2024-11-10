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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Lich_ChainFrost : public server::CDOTABaseAbility
    {
    public:
        float jump_range; // 0x5c8        
        int32_t jumps; // 0x5cc        
        float slow_duration; // 0x5d0        
        float vision_radius; // 0x5d4        
        int32_t projectile_speed; // 0x5d8        
        int32_t initial_projectile_speed; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x8]; // 0x5e0
        int32_t bonus_jumps_per_hero_killed; // 0x5e8        
        int32_t bonus_jumps_per_creep_killed; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lich_ChainFrost because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lich_ChainFrost) == 0x5f0);
};

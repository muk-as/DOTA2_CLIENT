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
    #pragma pack(push, 1)
    class C_DOTA_Ability_DrowRanger_FrostArrows : public client::C_DOTABaseAbility
    {
    public:
        int32_t shard_burst_damage_per_stack; // 0x600        
        float shard_burst_slow_duration; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DrowRanger_FrostArrows because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DrowRanger_FrostArrows) == 0x608);
};

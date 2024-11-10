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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_DrowRanger_FrostArrows : public server::CDOTABaseAbility
    {
    public:
        int32_t shard_burst_damage_per_stack; // 0x5c8        
        float shard_burst_slow_duration; // 0x5cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_FrostArrows because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DrowRanger_FrostArrows) == 0x5d0);
};

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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Undying_SoulRip : public server::CDOTABaseAbility
    {
    public:
        int32_t damage_per_unit; // 0x5a0        
        float radius; // 0x5a4        
        int32_t max_units; // 0x5a8        
        int32_t tombstone_heal; // 0x5ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Undying_SoulRip because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Undying_SoulRip) == 0x5b0);
};

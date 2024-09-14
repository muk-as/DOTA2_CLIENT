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
    class CDOTA_Ability_Tinker_WarpGrenade : public server::CDOTABaseAbility
    {
    public:
        float debuff_duration; // 0x5a0        
        float bonus_distance; // 0x5a4        
        float damage; // 0x5a8        
        int32_t max_distance; // 0x5ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tinker_WarpGrenade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tinker_WarpGrenade) == 0x5b0);
};

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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5a0        
        int32_t slow_radius; // 0x5a4        
        int32_t damage; // 0x5a8        
        int32_t shot_vision; // 0x5ac        
        float slow_duration; // 0x5b0        
        float vision_duration; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x5b8);
};

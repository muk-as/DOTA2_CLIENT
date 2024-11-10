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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5c8        
        int32_t slow_radius; // 0x5cc        
        int32_t damage; // 0x5d0        
        int32_t shot_vision; // 0x5d4        
        float slow_duration; // 0x5d8        
        float vision_duration; // 0x5dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x5e0);
};

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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Skywrath_Mage_Concussive_Shot : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x5d8        
        int32_t slow_radius; // 0x5dc        
        int32_t damage; // 0x5e0        
        int32_t shot_vision; // 0x5e4        
        float slow_duration; // 0x5e8        
        float vision_duration; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x5f0);
};

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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Skywrath_Mage_Concussive_Shot : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x600        
        int32_t slow_radius; // 0x604        
        int32_t damage; // 0x608        
        int32_t shot_vision; // 0x60c        
        float slow_duration; // 0x610        
        float vision_duration; // 0x614        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x618);
};

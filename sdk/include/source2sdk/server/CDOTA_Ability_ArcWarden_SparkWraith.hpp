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
    class CDOTA_Ability_ArcWarden_SparkWraith : public server::CDOTABaseAbility
    {
    public:
        float duration; // 0x5a0        
        float activation_delay; // 0x5a4        
        float wraith_vision_duration; // 0x5a8        
        float wraith_vision_radius; // 0x5ac        
        float spark_damage; // 0x5b0        
        int32_t creep_damage_bonus_pct; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_ArcWarden_SparkWraith) == 0x5b8);
};

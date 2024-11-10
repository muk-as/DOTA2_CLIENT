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
    class CDOTA_Ability_ArcWarden_SparkWraith : public server::CDOTABaseAbility
    {
    public:
        float duration; // 0x5c8        
        float activation_delay; // 0x5cc        
        float wraith_vision_duration; // 0x5d0        
        float wraith_vision_radius; // 0x5d4        
        float spark_damage; // 0x5d8        
        int32_t creep_damage_bonus_pct; // 0x5dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_ArcWarden_SparkWraith) == 0x5e0);
};

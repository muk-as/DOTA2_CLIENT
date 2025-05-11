#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_ArcWarden_SparkWraith : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x5b8            
            float activation_delay; // 0x5bc            
            float wraith_vision_duration; // 0x5c0            
            float wraith_vision_radius; // 0x5c4            
            float spark_damage; // 0x5c8            
            std::int32_t creep_damage_bonus_pct; // 0x5cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_ArcWarden_SparkWraith) == 0x5d0);
    };
};

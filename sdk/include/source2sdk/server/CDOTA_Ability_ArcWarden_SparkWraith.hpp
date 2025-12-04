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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_ArcWarden_SparkWraith : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x_            
            float activation_delay; // 0x_            
            float wraith_vision_duration; // 0x_            
            float wraith_vision_radius; // 0x_            
            float spark_damage; // 0x_            
            std::int32_t creep_damage_bonus_pct; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_ArcWarden_SparkWraith) == 0x_);
    };
};

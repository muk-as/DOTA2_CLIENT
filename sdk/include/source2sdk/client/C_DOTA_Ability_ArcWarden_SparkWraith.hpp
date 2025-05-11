#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_ArcWarden_SparkWraith : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float duration; // 0x5b0            
            float activation_delay; // 0x5b4            
            float wraith_vision_duration; // 0x5b8            
            float wraith_vision_radius; // 0x5bc            
            float spark_damage; // 0x5c0            
            std::int32_t creep_damage_bonus_pct; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_ArcWarden_SparkWraith) == 0x5c8);
    };
};

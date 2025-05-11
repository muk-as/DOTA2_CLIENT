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
        class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float speed; // 0x5b8            
            float slow_radius; // 0x5bc            
            float damage; // 0x5c0            
            float shot_vision; // 0x5c4            
            float slow_duration; // 0x5c8            
            float vision_duration; // 0x5cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x5d0);
    };
};

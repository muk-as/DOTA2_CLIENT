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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Skywrath_Mage_Concussive_Shot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float speed; // 0x680            
            float slow_radius; // 0x684            
            float damage; // 0x688            
            float shot_vision; // 0x68c            
            float slow_duration; // 0x690            
            float vision_duration; // 0x694            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Skywrath_Mage_Concussive_Shot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Skywrath_Mage_Concussive_Shot) == 0x698);
    };
};

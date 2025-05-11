#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Ability_Invoker_InvokedBase.hpp"

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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_Tornado : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float vision_distance; // 0x5c0            
            float end_vision_duration; // 0x5c4            
            float lift_duration; // 0x5c8            
            float base_damage; // 0x5cc            
            float quas_damage; // 0x5d0            
            float wex_damage; // 0x5d4            
            float twister_duration; // 0x5d8            
            float twister_distance_interval; // 0x5dc            
            uint8_t _pad05e0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_Tornado) == 0x5e8);
    };
};

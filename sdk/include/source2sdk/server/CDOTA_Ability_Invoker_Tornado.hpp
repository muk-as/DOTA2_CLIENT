#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"

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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Tornado : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float vision_distance; // 0x5d0            
            float end_vision_duration; // 0x5d4            
            float lift_duration; // 0x5d8            
            float base_damage; // 0x5dc            
            float quas_damage; // 0x5e0            
            float wex_damage; // 0x5e4            
            float twister_duration; // 0x5e8            
            float twister_distance_interval; // 0x5ec            
            float twister_damage; // 0x5f0            
            uint8_t _pad05f4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Tornado) == 0x608);
    };
};

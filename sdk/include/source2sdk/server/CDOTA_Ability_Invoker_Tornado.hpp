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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Tornado : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float vision_distance; // 0x_            
            float end_vision_duration; // 0x_            
            float lift_duration; // 0x_            
            float base_damage; // 0x_            
            float quas_damage; // 0x_            
            float wex_damage; // 0x_            
            float twister_duration; // 0x_            
            float twister_distance_interval; // 0x_            
            float twister_damage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Tornado) == 0x_);
    };
};

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_DeafeningBlast : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float end_vision_duration; // 0x690            
            float damage; // 0x694            
            float knockback_duration; // 0x698            
            float disarm_duration; // 0x69c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_DeafeningBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_DeafeningBlast) == 0x6a0);
    };
};

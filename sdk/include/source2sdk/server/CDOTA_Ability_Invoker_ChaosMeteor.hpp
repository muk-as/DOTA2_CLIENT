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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_ChaosMeteor : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float area_of_effect; // 0x5c8            
            float damage_interval; // 0x5cc            
            float vision_distance; // 0x5d0            
            float end_vision_duration; // 0x5d4            
            float main_damage; // 0x5d8            
            float burn_duration; // 0x5dc            
            float burn_dps; // 0x5e0            
            uint8_t _pad05e4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ChaosMeteor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_ChaosMeteor) == 0x5f0);
    };
};

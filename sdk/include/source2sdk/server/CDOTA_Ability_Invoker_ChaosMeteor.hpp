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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_ChaosMeteor : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float area_of_effect; // 0x5d0            
            float damage_interval; // 0x5d4            
            float vision_distance; // 0x5d8            
            float end_vision_duration; // 0x5dc            
            float main_damage; // 0x5e0            
            float burn_duration; // 0x5e4            
            float burn_dps; // 0x5e8            
            uint8_t _pad05ec[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ChaosMeteor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_ChaosMeteor) == 0x600);
    };
};

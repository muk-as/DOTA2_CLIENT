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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Invoker_IceWall : public source2sdk::client::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            std::int32_t num_wall_elements; // 0x690            
            float wall_element_spacing; // 0x694            
            float wall_element_radius; // 0x698            
            std::int32_t vector_cast_range; // 0x69c            
            std::int32_t slow; // 0x6a0            
            float damage_per_second; // 0x6a4            
            float duration; // 0x6a8            
            float slow_duration; // 0x6ac            
            float root_damage; // 0x6b0            
            float root_duration; // 0x6b4            
            float tick_interval; // 0x6b8            
            float wall_total_length; // 0x6bc            
            float wall_width; // 0x6c0            
            uint8_t _pad06c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Invoker_IceWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Invoker_IceWall) == 0x6c8);
    };
};

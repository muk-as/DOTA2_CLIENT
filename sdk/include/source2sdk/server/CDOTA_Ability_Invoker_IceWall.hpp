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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_IceWall : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            Vector m_vEndPosition; // 0x5d0            
            std::int32_t num_wall_elements; // 0x5dc            
            float wall_element_spacing; // 0x5e0            
            float wall_element_radius; // 0x5e4            
            std::int32_t vector_cast_range; // 0x5e8            
            std::int32_t slow; // 0x5ec            
            float damage_per_second; // 0x5f0            
            float duration; // 0x5f4            
            float slow_duration; // 0x5f8            
            float root_damage; // 0x5fc            
            float root_duration; // 0x600            
            float tick_interval; // 0x604            
            float wall_total_length; // 0x608            
            float wall_width; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_IceWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_IceWall) == 0x610);
    };
};

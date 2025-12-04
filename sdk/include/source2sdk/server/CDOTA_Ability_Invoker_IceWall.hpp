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
        class CDOTA_Ability_Invoker_IceWall : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            Vector m_vEndPosition; // 0x_            
            std::int32_t num_wall_elements; // 0x_            
            float wall_element_spacing; // 0x_            
            float wall_element_radius; // 0x_            
            std::int32_t vector_cast_range; // 0x_            
            std::int32_t slow; // 0x_            
            float damage_per_second; // 0x_            
            float duration; // 0x_            
            float slow_duration; // 0x_            
            float root_damage; // 0x_            
            float root_duration; // 0x_            
            float tick_interval; // 0x_            
            float wall_total_length; // 0x_            
            float wall_width; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_IceWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_IceWall) == 0x_);
    };
};

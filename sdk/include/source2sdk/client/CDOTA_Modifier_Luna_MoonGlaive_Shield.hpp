#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_MoonGlaive_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rotating_glaives; // 0x1878            
            float rotating_glaives_hit_radius; // 0x187c            
            float rotating_glaives_speed; // 0x1880            
            float rotating_glaives_collision_damage; // 0x1884            
            float rotating_glaives_movement_radius; // 0x1888            
            float rotating_glaives_movement_radius_expand_speed_scale; // 0x188c            
            float rotating_glaives_damage_reduction; // 0x1890            
            float rotating_glaives_duration; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x1898);
    };
};

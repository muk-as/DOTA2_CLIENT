#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Luna_MoonGlaive_Shield : public client::CDOTA_Buff
    {
    public:
        int32_t rotating_glaives; // 0x1708        
        float rotating_glaives_hit_radius; // 0x170c        
        float rotating_glaives_speed; // 0x1710        
        float rotating_glaives_collision_damage; // 0x1714        
        float rotating_glaives_movement_radius; // 0x1718        
        float rotating_glaives_damage_reduction; // 0x171c        
        int32_t unclamp_max_radius; // 0x1720        
        float rotating_glaives_duration; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x1728);
};

#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_InvisibilityEdge_WindWalk : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t windwalk_bonus_damage; // 0x1718        
        int32_t windwalk_movement_speed; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_InvisibilityEdge_WindWalk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_InvisibilityEdge_WindWalk) == 0x1720);
};

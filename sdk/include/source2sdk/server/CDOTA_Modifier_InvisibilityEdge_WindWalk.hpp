#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_InvisibilityEdge_WindWalk : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t windwalk_bonus_damage; // 0x1888            
            std::int32_t windwalk_movement_speed; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_InvisibilityEdge_WindWalk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_InvisibilityEdge_WindWalk) == 0x1890);
    };
};

#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Brewmaster_WindWalk : public server::CDOTA_Modifier_Invisible
    {
    public:
        int32_t bonus_movement_speeed; // 0x1718        
        int32_t bonus_damage; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_WindWalk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_WindWalk) == 0x1720);
};

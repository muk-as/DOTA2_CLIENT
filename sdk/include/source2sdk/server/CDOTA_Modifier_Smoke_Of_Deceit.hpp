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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Smoke_Of_Deceit : public server::CDOTA_Modifier_Invisible
    {
    public:
        int32_t bonus_movement_speed; // 0x1718        
        int32_t visibility_radius; // 0x171c        
        int32_t secondary_application_radius; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Smoke_Of_Deceit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Smoke_Of_Deceit) == 0x1728);
};

#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stunned.hpp"
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
    class CDOTA_Modifier_Puck_Coil_Break_Stun : public client::CDOTA_Modifier_Stunned
    {
    public:
        Vector m_vCastLocation; // 0x1708        
        int32_t coil_rapid_fire_z_offset; // 0x1714        
        float coil_rapid_fire_rate; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Puck_Coil_Break_Stun because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Puck_Coil_Break_Stun) == 0x1720);
};

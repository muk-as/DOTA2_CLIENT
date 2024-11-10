#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Slardar_SeabornSentinel_River : public client::CDOTA_Buff
    {
    public:
        int32_t river_speed; // 0x1708        
        int32_t puddle_regen; // 0x170c        
        int32_t puddle_armor; // 0x1710        
        int32_t puddle_status_resistance; // 0x1714        
        int32_t river_damage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_SeabornSentinel_River because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slardar_SeabornSentinel_River) == 0x1720);
};

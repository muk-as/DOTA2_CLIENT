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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Empower : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage_pct; // 0x1708        
        float cleave_damage_pct; // 0x170c        
        int32_t cleave_starting_width; // 0x1710        
        int32_t cleave_ending_width; // 0x1714        
        int32_t cleave_distance; // 0x1718        
        float self_multiplier; // 0x171c        
        int32_t secondary_cleave_distance; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Empower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Empower) == 0x1728);
};

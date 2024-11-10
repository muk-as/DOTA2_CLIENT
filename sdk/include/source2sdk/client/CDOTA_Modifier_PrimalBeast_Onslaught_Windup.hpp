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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public client::CDOTA_Buff
    {
    public:
        int32_t max_distance; // 0x1708        
        float max_charge_time; // 0x170c        
        float turn_rate; // 0x1710        
        float base_power; // 0x1714        
        int32_t charge_speed; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Windup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Onslaught_Windup) == 0x1720);
};

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
    class CDOTA_Modifier_Pudge_Dismember_Pull : public client::CDOTA_Buff
    {
    public:
        Vector m_vDestination; // 0x1708        
        int32_t pull_units_per_second; // 0x1714        
        float pull_distance_limit; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x8]; // 0x171c
        float animation_rate; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Dismember_Pull) == 0x1728);
};

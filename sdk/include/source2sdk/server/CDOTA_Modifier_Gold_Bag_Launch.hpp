#pragma once
#include "source2sdk/server/CDOTA_Modifier_Knockback.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Gold_Bag_Launch : public server::CDOTA_Modifier_Knockback
    {
    public:
        int32_t gold_amount; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Gold_Bag_Launch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Gold_Bag_Launch) == 0x1720);
};

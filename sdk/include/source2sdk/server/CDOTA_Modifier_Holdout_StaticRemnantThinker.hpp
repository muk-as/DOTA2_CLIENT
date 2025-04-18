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
    class CDOTA_Modifier_Holdout_StaticRemnantThinker : public client::CDOTA_Buff
    {
    public:
        int32_t static_remnant_radius; // 0x1708        
        int32_t static_remnant_damage_radius; // 0x170c        
        int32_t static_remnant_damage; // 0x1710        
        float static_remnant_delay; // 0x1714        
        float overload_duration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Holdout_StaticRemnantThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Holdout_StaticRemnantThinker) == 0x1720);
};

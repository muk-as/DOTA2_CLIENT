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
    class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public client::CDOTA_Buff
    {
    public:
        int32_t cleave_damage_pct; // 0x1708        
        float cleave_starting_width; // 0x170c        
        int32_t cleave_angle; // 0x1710        
        float cleave_distance_base; // 0x1714        
        int32_t cleave_distance_per_stack; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter) == 0x1720);
};

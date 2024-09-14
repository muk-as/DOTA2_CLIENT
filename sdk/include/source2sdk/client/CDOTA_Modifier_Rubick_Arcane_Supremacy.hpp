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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_Arcane_Supremacy : public client::CDOTA_Buff
    {
    public:
        int32_t cast_range; // 0x16e8        
        int32_t spell_amp; // 0x16ec        
        float aoe_bonus; // 0x16f0        
        float aoe_bonus_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Arcane_Supremacy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_Arcane_Supremacy) == 0x16f8);
};

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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance : public client::CDOTA_Buff
    {
    public:
        int32_t magic_resistance_pct; // 0x16e8        
        int32_t magic_resistance_per_tick; // 0x16ec        
        int32_t max_stacks; // 0x16f0        
        float tick_rate; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance) == 0x16f8);
};

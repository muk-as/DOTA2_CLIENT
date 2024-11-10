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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Burn : public client::CDOTA_Buff
    {
    public:
        int32_t shard_dps; // 0x1708        
        int32_t shard_move_slow_pct; // 0x170c        
        float shard_interval; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Burn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Burn) == 0x1718);
};

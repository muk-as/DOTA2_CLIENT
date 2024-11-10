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
    class CDOTA_Modifier_ForgedSpirit_Stats : public client::CDOTA_Buff
    {
    public:
        int32_t level; // 0x1708        
        int32_t armor; // 0x170c        
        int32_t mana; // 0x1710        
        float attack_range; // 0x1714        
        float armor_per_attack; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ForgedSpirit_Stats because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ForgedSpirit_Stats) == 0x1720);
};

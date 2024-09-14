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
    class CDOTA_Modifier_Terrorblade_Dark_Unity : public client::CDOTA_Buff
    {
    public:
        bool m_bInsideRadius; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t radius; // 0x16ec        
        int32_t inside_radius_bonus_damage_pct; // 0x16f0        
        int32_t outside_radius_bonus_damage_pct; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Dark_Unity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Terrorblade_Dark_Unity) == 0x16f8);
};

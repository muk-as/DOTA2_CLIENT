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
    class CDOTA_Modifier_Leshrac_Pulse_Nova : public client::CDOTA_Buff
    {
    public:
        bool m_bFirst; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0xb]; // 0x1709
        int32_t damage_resistance; // 0x1714        
        int32_t bonus_movespeed; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Pulse_Nova because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Pulse_Nova) == 0x1720);
};

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
    class CDOTA_Modifier_Dawnbreaker_Luminosity : public client::CDOTA_Buff
    {
    public:
        bool m_bAppliesToCreeps; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t attack_count; // 0x170c        
        bool m_bShouldIncrement; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t movespeed_bonus_max; // 0x1714        
        int32_t attackspeed_bonus_max; // 0x1718        
        int32_t m_nStackCount; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Luminosity) == 0x1720);
};

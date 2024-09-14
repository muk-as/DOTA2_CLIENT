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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Luminosity : public client::CDOTA_Buff
    {
    public:
        bool m_bAppliesToCreeps; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t attack_count; // 0x16ec        
        bool m_bShouldIncrement; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        int32_t movespeed_bonus_max; // 0x16f4        
        int32_t attackspeed_bonus_max; // 0x16f8        
        int32_t m_nStackCount; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Luminosity) == 0x1700);
};

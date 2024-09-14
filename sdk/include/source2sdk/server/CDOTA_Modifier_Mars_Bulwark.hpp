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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark : public client::CDOTA_Buff
    {
    public:
        float physical_damage_reduction; // 0x16e8        
        float physical_damage_reduction_side; // 0x16ec        
        float forward_angle; // 0x16f0        
        float side_angle; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f8[0x18]; // 0x16f8
        float m_flRecentDamage; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark) == 0x1718);
};

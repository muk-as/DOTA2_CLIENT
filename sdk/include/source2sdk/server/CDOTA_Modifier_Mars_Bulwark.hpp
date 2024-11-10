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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark : public client::CDOTA_Buff
    {
    public:
        float physical_damage_reduction; // 0x1708        
        float physical_damage_reduction_side; // 0x170c        
        float forward_angle; // 0x1710        
        float side_angle; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x18]; // 0x1718
        float m_flRecentDamage; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark) == 0x1738);
};

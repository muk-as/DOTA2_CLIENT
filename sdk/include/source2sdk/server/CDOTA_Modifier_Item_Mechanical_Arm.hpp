#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    class CDOTA_Modifier_Item_Mechanical_Arm : public server::CDOTA_Buff_Item
    {
    public:
        bool m_bAppliesToCreeps; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float bat; // 0x170c        
        float stun_duration; // 0x1710        
        int32_t stun_chance; // 0x1714        
        int32_t m_nAttack; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mechanical_Arm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mechanical_Arm) == 0x1720);
};

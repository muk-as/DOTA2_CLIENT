#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Light_Collector : public client::CDOTA_Buff_Item
    {
    public:
        bool m_bActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t health_regen; // 0x170c        
        int32_t mana_regen; // 0x1710        
        int32_t radius; // 0x1714        
        int32_t movespeed_pct; // 0x1718        
        int32_t penalty; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Light_Collector) == 0x1720);
};

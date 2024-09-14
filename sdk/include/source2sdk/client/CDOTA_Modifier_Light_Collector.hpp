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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Light_Collector : public client::CDOTA_Buff_Item
    {
    public:
        bool m_bActive; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t health_regen; // 0x16ec        
        int32_t mana_regen; // 0x16f0        
        int32_t radius; // 0x16f4        
        int32_t movespeed_pct; // 0x16f8        
        int32_t penalty; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Light_Collector) == 0x1700);
};

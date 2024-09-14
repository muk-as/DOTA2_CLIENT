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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Bottomless_Chalice : public server::CDOTA_Buff_Item
    {
    public:
        int32_t max_charges_per_kill; // 0x16e8        
        float recharge_time; // 0x16ec        
        bool m_bFull; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        int32_t bonus_intellect; // 0x16f4        
        int32_t movement_speed; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bottomless_Chalice because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Bottomless_Chalice) == 0x1700);
};

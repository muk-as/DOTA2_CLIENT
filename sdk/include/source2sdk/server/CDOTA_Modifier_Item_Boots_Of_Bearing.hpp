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
    class CDOTA_Modifier_Item_Boots_Of_Bearing : public server::CDOTA_Buff_Item
    {
    public:
        float radius; // 0x16e8        
        int32_t bonus_movement_speed; // 0x16ec        
        int32_t bonus_health_regen; // 0x16f0        
        int32_t bonus_str; // 0x16f4        
        int32_t bonus_int; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Boots_Of_Bearing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Boots_Of_Bearing) == 0x1700);
};

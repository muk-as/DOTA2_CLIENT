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
    class CDOTA_Modifier_Item_Hurricane_Pike : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_health; // 0x1708        
        int32_t bonus_intellect; // 0x170c        
        int32_t bonus_agility; // 0x1710        
        int32_t bonus_strength; // 0x1714        
        int32_t base_attack_range; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Hurricane_Pike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Hurricane_Pike) == 0x1720);
};

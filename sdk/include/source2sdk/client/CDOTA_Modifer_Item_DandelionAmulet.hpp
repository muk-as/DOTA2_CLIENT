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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifer_Item_DandelionAmulet : public client::CDOTA_Buff_Item
    {
    public:
        int32_t move_speed; // 0x1708        
        int32_t mana; // 0x170c        
        int32_t magic_block; // 0x1710        
        int32_t min_damage; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifer_Item_DandelionAmulet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifer_Item_DandelionAmulet) == 0x1718);
};

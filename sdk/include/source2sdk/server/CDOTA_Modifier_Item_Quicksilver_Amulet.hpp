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
    class CDOTA_Modifier_Item_Quicksilver_Amulet : public server::CDOTA_Buff_Item
    {
    public:
        int32_t base_attack; // 0x1708        
        int32_t bonus_attack; // 0x170c        
        int32_t base_movement; // 0x1710        
        int32_t bonus_movement; // 0x1714        
        int32_t projectile_increase; // 0x1718        
        int32_t anim_increase; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Quicksilver_Amulet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Quicksilver_Amulet) == 0x1720);
};

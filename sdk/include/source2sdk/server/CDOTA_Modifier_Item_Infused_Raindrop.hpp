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
    class CDOTA_Modifier_Item_Infused_Raindrop : public server::CDOTA_Buff_Item
    {
    public:
        float mana_regen; // 0x1708        
        float bonus_armor; // 0x170c        
        int32_t bonus_magical_armor; // 0x1710        
        int32_t magic_damage_block; // 0x1714        
        int32_t min_damage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Infused_Raindrop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Infused_Raindrop) == 0x1720);
};

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
    class CDOTA_Modifier_Item_Dagon : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_int; // 0x1708        
        int32_t bonus_str; // 0x170c        
        int32_t bonus_agi; // 0x1710        
        float passive_spell_lifesteal; // 0x1714        
        float dagon_spell_lifesteal; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Dagon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Dagon) == 0x1720);
};

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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Nether_Shawl : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_magic_resistance; // 0x1708        
        int32_t bonus_spell_amp; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Nether_Shawl because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Nether_Shawl) == 0x1718);
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class ItemFlagTypes_t : std::uint8_t
    {
        ITEM_FLAG_NONE = 0,
        ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
        ITEM_FLAG_NOAUTORELOAD = 2,
        ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
        ITEM_FLAG_LIMITINWORLD = 8,
        ITEM_FLAG_EXHAUSTIBLE = 16,
        ITEM_FLAG_DOHITLOCATIONDMG = 32,
        ITEM_FLAG_NOAMMOPICKUPS = 64,
        ITEM_FLAG_NOITEMPICKUP = 128,
    };
};

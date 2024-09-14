#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_SHOP_TYPE : std::uint32_t
    {
        DOTA_SHOP_HOME = 0x0,
        DOTA_SHOP_SIDE = 0x1,
        DOTA_SHOP_SECRET = 0x2,
        DOTA_SHOP_GROUND = 0x3,
        DOTA_SHOP_SIDE2 = 0x4,
        DOTA_SHOP_SECRET2 = 0x5,
        DOTA_SHOP_CUSTOM = 0x6,
        DOTA_SHOP_NEUTRALS = 0x7,
        DOTA_SHOP_NONE = 0x8,
    };
};

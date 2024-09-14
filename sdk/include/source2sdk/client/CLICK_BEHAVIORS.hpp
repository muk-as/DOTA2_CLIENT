#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class CLICK_BEHAVIORS : std::uint32_t
    {
        DOTA_CLICK_BEHAVIOR_NONE = 0x0,
        DOTA_CLICK_BEHAVIOR_MOVE = 0x1,
        DOTA_CLICK_BEHAVIOR_ATTACK = 0x2,
        DOTA_CLICK_BEHAVIOR_CAST = 0x3,
        DOTA_CLICK_BEHAVIOR_DROP_ITEM = 0x4,
        DOTA_CLICK_BEHAVIOR_DROP_SHOP_ITEM = 0x5,
        DOTA_CLICK_BEHAVIOR_DRAG = 0x6,
        DOTA_CLICK_BEHAVIOR_LEARN_ABILITY = 0x7,
        DOTA_CLICK_BEHAVIOR_PATROL = 0x8,
        DOTA_CLICK_BEHAVIOR_VECTOR_CAST = 0x9,
        DOTA_CLICK_BEHAVIOR_UNUSED = 0xa,
        DOTA_CLICK_BEHAVIOR_RADAR = 0xb,
        DOTA_CLICK_BEHAVIOR_LAST = 0xc,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class Attributes : std::uint32_t
    {
        DOTA_ATTRIBUTE_STRENGTH = 0x0,
        DOTA_ATTRIBUTE_AGILITY = 0x1,
        DOTA_ATTRIBUTE_INTELLECT = 0x2,
        DOTA_ATTRIBUTE_ALL = 0x3,
        DOTA_ATTRIBUTE_MAX = 0x4,
        DOTA_ATTRIBUTE_INVALID = 0xffffffff,
    };
};

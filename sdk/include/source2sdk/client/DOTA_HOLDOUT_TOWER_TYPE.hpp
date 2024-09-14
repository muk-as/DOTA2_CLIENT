#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_HOLDOUT_TOWER_TYPE : std::uint32_t
    {
        DOTA_HOLDOUT_TOWER_NONE = 0x0,
        DOTA_HOLDOUT_TOWER_LIGHTFAST = 0x1,
        DOTA_HOLDOUT_TOWER_HEAVYSLOW = 0x2,
        DOTA_HOLDOUT_TOWER_REDUCESPEED = 0x3,
        DOTA_HOLDOUT_TOWER_COUNT = 0x4,
    };
};

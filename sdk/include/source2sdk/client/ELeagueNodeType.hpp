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
    enum class ELeagueNodeType : std::uint32_t
    {
        INVALID_NODE_TYPE = 0x0,
        BEST_OF_ONE = 0x1,
        BEST_OF_THREE = 0x2,
        BEST_OF_FIVE = 0x3,
        BEST_OF_TWO = 0x4,
    };
};

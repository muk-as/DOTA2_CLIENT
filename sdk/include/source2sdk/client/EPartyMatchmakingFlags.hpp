#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class EPartyMatchmakingFlags : std::uint32_t
    {
        k_EPartyMatchmakingFlags_None = 0x0,
        k_EPartyMatchmakingFlags_LargeRankSpread = 0x1,
    };
};

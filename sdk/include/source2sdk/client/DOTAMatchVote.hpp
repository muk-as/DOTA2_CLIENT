#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class DOTAMatchVote : std::uint32_t
    {
        DOTAMatchVote_INVALID = 0x0,
        DOTAMatchVote_POSITIVE = 0x1,
        DOTAMatchVote_NEGATIVE = 0x2,
    };
};

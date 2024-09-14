#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class Fantasy_Selection_Mode : std::uint32_t
    {
        FANTASY_SELECTION_INVALID = 0x0,
        FANTASY_SELECTION_LOCKED = 0x1,
        FANTASY_SELECTION_SHUFFLE = 0x2,
        FANTASY_SELECTION_FREE_PICK = 0x3,
        FANTASY_SELECTION_ENDED = 0x4,
        FANTASY_SELECTION_PRE_SEASON = 0x5,
        FANTASY_SELECTION_PRE_DRAFT = 0x6,
        FANTASY_SELECTION_DRAFTING = 0x7,
        FANTASY_SELECTION_REGULAR_SEASON = 0x8,
        FANTASY_SELECTION_CARD_BASED = 0x9,
    };
};

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
    enum class Fantasy_Team_Slots : std::uint32_t
    {
        FANTASY_SLOT_NONE = 0x0,
        FANTASY_SLOT_CORE = 0x1,
        FANTASY_SLOT_SUPPORT = 0x2,
        FANTASY_SLOT_ANY = 0x3,
        FANTASY_SLOT_BENCH = 0x4,
    };
};

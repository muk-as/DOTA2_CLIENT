#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class MatchLanguages : std::uint32_t
    {
        MATCH_LANGUAGE_INVALID = 0x0,
        MATCH_LANGUAGE_ENGLISH = 0x1,
        MATCH_LANGUAGE_RUSSIAN = 0x2,
        MATCH_LANGUAGE_CHINESE = 0x3,
        MATCH_LANGUAGE_KOREAN = 0x4,
        MATCH_LANGUAGE_SPANISH = 0x5,
        MATCH_LANGUAGE_PORTUGUESE = 0x6,
        MATCH_LANGUAGE_ENGLISH2 = 0x7,
    };
};

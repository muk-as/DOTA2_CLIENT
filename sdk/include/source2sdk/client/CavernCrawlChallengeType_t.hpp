#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class CavernCrawlChallengeType_t : std::uint8_t
    {
        CAVERN_CRAWL_CHALLENGE_TYPE_INVALID = 0,
        CAVERN_CRAWL_CHALLENGE_FIRST_CUSTOM_TYPE = 160,
        CAVERN_CRAWL_CHALLENGE_FIRST_VALID_SPECIAL_TYPE = 240,
        CAVERN_CRAWL_CHALLENGE_TYPE_LOCKED_DOOR = 240,
        CAVERN_CRAWL_CHALLENGE_TYPE_CAVE_IN = 241,
        CAVERN_CRAWL_CHALLENGE_LAST_VALID_TYPE_PLUS_ONE = 242,
    };
};

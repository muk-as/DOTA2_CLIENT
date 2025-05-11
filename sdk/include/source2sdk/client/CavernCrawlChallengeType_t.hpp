#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class CavernCrawlChallengeType_t : std::uint8_t
        {
            CAVERN_CRAWL_CHALLENGE_TYPE_INVALID = 0x0,
            CAVERN_CRAWL_CHALLENGE_FIRST_CUSTOM_TYPE = 0xa0,
            CAVERN_CRAWL_CHALLENGE_FIRST_VALID_SPECIAL_TYPE = 0xf0,
            CAVERN_CRAWL_CHALLENGE_TYPE_LOCKED_DOOR = 0xf0,
            CAVERN_CRAWL_CHALLENGE_TYPE_CAVE_IN = 0xf1,
            CAVERN_CRAWL_CHALLENGE_LAST_VALID_TYPE_PLUS_ONE = 0xf2,
        };
    };
};

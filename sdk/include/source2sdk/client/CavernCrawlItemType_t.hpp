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
        // Enumerator count: 11
        // Alignment: 1
        // Size: 0x1
        enum class CavernCrawlItemType_t : std::uint8_t
        {
            CAVERN_CRAWL_ITEM_TYPE_INVALID = 0xff,
            CAVERN_CRAWL_ITEM_TYPE_KEY = 0x0,
            CAVERN_CRAWL_ITEM_TYPE_FLARE = 0x1,
            CAVERN_CRAWL_ITEM_TYPE_SWAP = 0x2,
            CAVERN_CRAWL_ITEM_TYPE_CULLING_BLADE = 0x3,
            CAVERN_CRAWL_ITEM_TYPE_SHOVEL = 0x4,
            CAVERN_CRAWL_ITEM_TYPE_COUNT = 0x5,
            CAVERN_CRAWL_ITEM_TYPE_FIRST_FAKE = 0x80,
            CAVERN_CRAWL_ITEM_TYPE_TREASURE_MAP = 0x80,
            CAVERN_CRAWL_ITEM_TYPE_AFTER_FAKES = 0x81,
            CAVERN_CRAWL_ITEM_TYPE_FAKE_COUNT = 0x1,
        };
    };
};

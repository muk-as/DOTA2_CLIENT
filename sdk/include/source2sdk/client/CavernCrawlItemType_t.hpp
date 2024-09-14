#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 1
    // Size: 0x1
    enum class CavernCrawlItemType_t : std::uint8_t
    {
        CAVERN_CRAWL_ITEM_TYPE_INVALID = 255,
        CAVERN_CRAWL_ITEM_TYPE_KEY = 0,
        CAVERN_CRAWL_ITEM_TYPE_FLARE = 1,
        CAVERN_CRAWL_ITEM_TYPE_SWAP = 2,
        CAVERN_CRAWL_ITEM_TYPE_CULLING_BLADE = 3,
        CAVERN_CRAWL_ITEM_TYPE_SHOVEL = 4,
        CAVERN_CRAWL_ITEM_TYPE_COUNT = 5,
        CAVERN_CRAWL_ITEM_TYPE_FIRST_FAKE = 128,
        CAVERN_CRAWL_ITEM_TYPE_TREASURE_MAP = 128,
        CAVERN_CRAWL_ITEM_TYPE_AFTER_FAKES = 129,
        CAVERN_CRAWL_ITEM_TYPE_FAKE_COUNT = 1,
    };
};

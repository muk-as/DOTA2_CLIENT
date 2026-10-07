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
        // Enumerator count: 30
        // Alignment: 4
        // Size: 0x_
        enum class unacknowledged_item_inventory_positions_t : std::uint32_t
        {
            UNACK_ITEM_UNKNOWN = 0x0,
            UNACK_ITEM_DROPPED = 0x1,
            UNACK_ITEM_CRAFTED = 0x2,
            UNACK_ITEM_TRADED = 0x3,
            UNACK_ITEM_PURCHASED = 0x4,
            UNACK_ITEM_FOUND_IN_CRATE = 0x5,
            UNACK_ITEM_GIFTED = 0x6,
            UNACK_ITEM_SUPPORT = 0x7,
            UNACK_ITEM_PROMOTION = 0x8,
            UNACK_ITEM_EARNED = 0x9,
            UNACK_ITEM_REFUNDED = 0xa,
            UNACK_ITEM_GIFT_WRAPPED = 0xb,
            UNACK_ITEM_FOREIGN = 0xc,
            UNACK_ITEM_COLLECTION_REWARD = 0xd,
            UNACK_ITEM_PREVIEW_ITEM = 0xe,
            UNACK_ITEM_PREVIEW_ITEM_PURCHASED = 0xf,
            UNACK_ITEM_PERIODIC_SCORE_REWARD = 0x10,
            UNACK_ITEM_RECYCLING = 0x11,
            UNACK_ITEM_TOURNAMENT_DROP = 0x12,
            UNACK_ITEM_RECIPE_OUTPUT = 0x13,
            UNACK_ITEM_COMMUNITY_MARKET_PURCHASE = 0x14,
            UNACK_ITEM_GEM_EXTRACT = 0x15,
            UNACK_ITEM_COMPENDIUM_REWARD = 0x16,
            UNACK_ITEM_COMPENDIUM_DROP = 0x17,
            UNACK_ITEM_SEASONAL_ITEM_GRANT = 0x18,
            UNACK_ITEM_PLUS_REWARD = 0x19,
            UNACK_ITEM_FROSTIVUS_REWARD = 0x1a,
            UNACK_ITEM_COMPENDIUM_GIFT = 0x1b,
            UNACK_ITEM_TRANSMUTED = 0x1c,
            UNACK_NUM_METHODS = 0x1d,
        };
    };
};

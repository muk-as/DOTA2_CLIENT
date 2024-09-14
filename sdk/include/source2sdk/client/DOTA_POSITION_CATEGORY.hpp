#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_POSITION_CATEGORY : std::uint32_t
    {
        DOTA_POSITION_NONE = 0x0,
        DOTA_POSITION_BOTTOM_LANE = 0x1,
        DOTA_POSITION_MID_LANE = 0x2,
        DOTA_POSITION_TOP_LANE = 0x3,
        DOTA_POSITION_RADIANT_JUNGLE = 0x4,
        DOTA_POSITION_DIRE_JUNGLE = 0x5,
        DOTA_POSITION_RADIANT_ANCIENTS = 0x6,
        DOTA_POSITION_DIRE_ANCIENTS = 0x7,
        DOTA_POSITION_RADIANT_SECRET_SHOP = 0x8,
        DOTA_POSITION_DIRE_SECRET_SHOP = 0x9,
        DOTA_POSITION_RIVER = 0xa,
        DOTA_POSITION_ROSHAN_PIT = 0xb,
        DOTA_POSITION_RADIANT_BASE = 0xc,
        DOTA_POSITION_DIRE_BASE = 0xd,
        DOTA_POSITION_FOUNTAIN = 0xe,
        DOTA_POSITION_OTHER = 0xf,
    };
};

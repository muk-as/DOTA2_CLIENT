#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EDPCFavoriteType : std::uint32_t
    {
        FAVORITE_TYPE_ALL = 0x0,
        FAVORITE_TYPE_PLAYER = 0x1,
        FAVORITE_TYPE_TEAM = 0x2,
        FAVORITE_TYPE_LEAGUE = 0x3,
    };
};

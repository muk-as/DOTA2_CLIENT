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
    enum class MoveCollide_t : std::uint8_t
    {
        MOVECOLLIDE_DEFAULT = 0,
        MOVECOLLIDE_FLY_BOUNCE = 1,
        MOVECOLLIDE_FLY_CUSTOM = 2,
        MOVECOLLIDE_FLY_SLIDE = 3,
        MOVECOLLIDE_COUNT = 4,
        MOVECOLLIDE_MAX_BITS = 3,
    };
};

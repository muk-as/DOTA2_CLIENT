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
    enum class ECrowdLevel : std::uint32_t
    {
        CROWD_NONE = 0x0,
        CROWD_LOW = 0x1,
        CROWD_MEDIUM = 0x2,
        CROWD_HIGH = 0x3,
    };
};

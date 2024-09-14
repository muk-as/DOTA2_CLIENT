#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class PortraitUnitDirection_t : std::uint32_t
    {
        PORTRAIT_UNIT_DIRECTION_INVALID = 0xffffffff,
        PORTRAIT_UNIT_DIRECTION_FORWARD = 0x0,
        PORTRAIT_UNIT_DIRECTION_BACKWARD = 0x1,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class PortraitSummonsDisplayMode_t : std::uint32_t
    {
        PORTRAIT_SUMMONS_DISPLAY_MODE_INVALID = 0xffffffff,
        PORTRAIT_SUMMONS_DISPLAY_MODE_NONE = 0x0,
        PORTRAIT_SUMMONS_DISPLAY_MODE_ALL = 0x1,
        PORTRAIT_SUMMONS_DISPLAY_MODE_NON_DEFAULT = 0x2,
        PORTRAIT_SUMMONS_DISPLAY_MODE_TYPE_COUNT = 0x3,
    };
};

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
    enum class DOTA_ROSHAN_PHASE : std::uint32_t
    {
        k_SRSP_ROSHAN_ALIVE = 0x0,
        k_SRSP_ROSHAN_BASE_TIMER = 0x1,
        k_SRSP_ROSHAN_VISIBLE_TIMER = 0x2,
    };
};

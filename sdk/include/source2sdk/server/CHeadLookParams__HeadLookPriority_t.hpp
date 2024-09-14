#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class CHeadLookParams__HeadLookPriority_t : std::uint32_t
    {
        BORING = 0x0,
        INTERESTING = 0x1,
        IMPORTANT = 0x2,
        CRITICAL = 0x3,
        MANDATORY = 0x4,
    };
};

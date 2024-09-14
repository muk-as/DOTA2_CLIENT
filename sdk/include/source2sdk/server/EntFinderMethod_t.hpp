#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EntFinderMethod_t : std::uint32_t
    {
        ENT_FIND_METHOD_NEAREST = 0x0,
        ENT_FIND_METHOD_FARTHEST = 0x1,
        ENT_FIND_METHOD_RANDOM = 0x2,
    };
};

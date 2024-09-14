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
    enum class Explosions : std::uint32_t
    {
        expRandom = 0x0,
        expDirected = 0x1,
        expUsePrecise = 0x2,
    };
};

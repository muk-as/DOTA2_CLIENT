#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class filter_t : std::uint32_t
    {
        FILTER_AND = 0x0,
        FILTER_OR = 0x1,
    };
};

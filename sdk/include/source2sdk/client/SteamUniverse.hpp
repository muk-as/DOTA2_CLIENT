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
    enum class SteamUniverse : std::uint32_t
    {
        Invalid = 0x0,
        Internal = 0x3,
        Dev = 0x4,
        Beta = 0x2,
        Public = 0x1,
    };
};

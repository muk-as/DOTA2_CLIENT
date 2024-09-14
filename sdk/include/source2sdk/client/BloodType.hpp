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
    enum class BloodType : std::uint32_t
    {
        None = 0xffffffff,
        ColorRed = 0x0,
        ColorYellow = 0x1,
        ColorGreen = 0x2,
    };
};

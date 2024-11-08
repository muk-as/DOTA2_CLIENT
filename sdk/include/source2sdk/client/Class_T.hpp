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
    enum class Class_T : std::uint32_t
    {
        CLASS_NONE = 0x0,
        CLASS_PLAYER = 0x1,
        CLASS_PLAYER_ALLY = 0x2,
        CLASS_CROWNFALL_SURVIVOR_UNIT = 0x3,
        NUM_CLASSIFY_CLASSES = 0x4,
    };
};

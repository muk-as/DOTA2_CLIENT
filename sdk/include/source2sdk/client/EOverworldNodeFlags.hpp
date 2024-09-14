#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class EOverworldNodeFlags : std::uint32_t
    {
        Premium = 0x1,
        MainQuest = 0x2,
        SideQuest = 0x4,
        DelayStyles = 0x8,
        Shortcut = 0x10,
        InvisibleUntilNearby = 0x20,
        Secret = 0x40,
    };
};

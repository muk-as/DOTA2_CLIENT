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
    enum class EOverworldCharacterVisibility : std::uint32_t
    {
        CompleteNode = 0x1,
        ActiveNode = 0x2,
        LockedNode = 0x4,
        AlwaysVisible = 0x8,
    };
};

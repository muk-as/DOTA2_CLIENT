#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class Materials : std::uint32_t
    {
        matGlass = 0x0,
        matWood = 0x1,
        matMetal = 0x2,
        matFlesh = 0x3,
        matCinderBlock = 0x4,
        matCeilingTile = 0x5,
        matComputer = 0x6,
        matUnbreakableGlass = 0x7,
        matRocks = 0x8,
        matWeb = 0x9,
        matNone = 0xa,
        matLastMaterial = 0xb,
    };
};

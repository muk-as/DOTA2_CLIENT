#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class EArtyLayer : std::uint32_t
    {
        k_eDefault = 0x1,
        k_eTerrain = 0x2,
        k_eShots = 0x4,
        k_eRays = 0x8,
        k_eFX = 0x10,
        k_ePhysical = 0x7,
        k_eFullObjects = 0x3,
        k_eAllLayers = 0xffffffff,
    };
};

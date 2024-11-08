#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class EArtyHitboxType : std::uint8_t
    {
        k_eAABB = 0,
        k_eCircle = 1,
        k_eLine = 2,
        k_eRay = 3,
    };
};

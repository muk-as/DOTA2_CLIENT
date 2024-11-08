#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 1
    // Size: 0x1
    enum class EArtyGameObjectType : std::uint8_t
    {
        k_eTypeObject = 0,
        k_eTypeShot = 1,
        k_eTypeTrail = 2,
        k_eTypeCannon = 3,
        k_eTypePlayer = 4,
        k_eTypeEnemy = 5,
        k_eTypeFX = 6,
        k_eTypeUI = 7,
    };
};

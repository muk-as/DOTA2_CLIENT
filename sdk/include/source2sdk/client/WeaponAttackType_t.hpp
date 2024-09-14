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
    enum class WeaponAttackType_t : std::uint32_t
    {
        eInvalid = 0xffffffff,
        ePrimary = 0x0,
        eSecondary = 0x1,
        eCount = 0x2,
    };
};

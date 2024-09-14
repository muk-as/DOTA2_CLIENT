#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class WeaponSwitchReason_t : std::uint32_t
    {
        eDrawn = 0x0,
        eEquipped = 0x1,
        eUserInitiatedSwitchToLast = 0x2,
    };
};

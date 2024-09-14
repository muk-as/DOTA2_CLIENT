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
    enum class AmmoFlags_t : std::uint32_t
    {
        AMMO_FORCE_DROP_IF_CARRIED = 0x1,
        AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
        // MPropertySuppressEnumerator
        // MEnumeratorIsNotAFlag
        AMMO_FLAG_MAX = 0x2,
    };
};

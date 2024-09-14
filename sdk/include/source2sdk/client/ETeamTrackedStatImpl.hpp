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
    enum class ETeamTrackedStatImpl : std::uint32_t
    {
        k_eTeamTrackedStatImpl_Invalid = 0x0,
        k_eTeamTrackedStatImpl_Direct = 0x1,
        k_eTeamTrackedStatImpl_Expression = 0x2,
        k_eTeamTrackedStatImpl_PlayerAggregate = 0x3,
    };
};

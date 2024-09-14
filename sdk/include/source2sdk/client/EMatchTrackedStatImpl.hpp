#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EMatchTrackedStatImpl : std::uint32_t
    {
        k_eMatchTrackedStatImpl_Invalid = 0x0,
        k_eMatchTrackedStatImpl_Direct = 0x1,
        k_eMatchTrackedStatImpl_Expression = 0x2,
        k_eMatchTrackedStatImpl_PlayerAggregate = 0x3,
        k_eMatchTrackedStatImpl_TeamAggregate = 0x4,
    };
};

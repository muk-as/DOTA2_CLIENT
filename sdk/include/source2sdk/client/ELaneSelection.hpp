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
    enum class ELaneSelection : std::uint32_t
    {
        k_ELaneSelection_SAFELANE = 0x0,
        k_ELaneSelection_OFFLANE = 0x1,
        k_ELaneSelection_MIDLANE = 0x2,
        k_ELaneSelection_SUPPORT = 0x3,
        k_ELaneSelection_HARDSUPPORT = 0x4,
    };
};

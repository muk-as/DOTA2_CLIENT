#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x_
        enum class ELaneSelectionFlags : std::uint32_t
        {
            k_ELaneSelectionFlags_SAFELANE = 0x1,
            k_ELaneSelectionFlags_OFFLANE = 0x2,
            k_ELaneSelectionFlags_MIDLANE = 0x4,
            k_ELaneSelectionFlags_SUPPORT = 0x8,
            k_ELaneSelectionFlags_HARDSUPPORT = 0x10,
            k_ELaneSelectionFlagGroup_None = 0x0,
            k_ELaneSelectionFlagGroup_CORE = 0x7,
            k_ELaneSelectionFlagGroup_SUPPORT = 0x18,
            k_ELaneSelectionFlagGroup_ALL = 0x1f,
            k_ELaneSelectionFlagGroup_HIGHDEMAND = 0x12,
        };
    };
};

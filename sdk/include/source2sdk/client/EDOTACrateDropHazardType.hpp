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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class EDOTACrateDropHazardType : std::uint32_t
        {
            k_eCrateDropHazardType_Invalid = 0x0,
            k_eCrateDropHazardType_Bomb = 0x1,
            k_eCrateDropHazardType_Nuke = 0x2,
            k_eCrateDropHazardType_Goop = 0x4,
        };
    };
};

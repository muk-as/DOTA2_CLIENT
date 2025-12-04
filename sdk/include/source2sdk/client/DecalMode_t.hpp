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
        // Alignment: 1
        // Size: 0x_
        enum class DecalMode_t : std::uint8_t
        {
            kDecalBlood = 0x0,
            kDecalCloak = 0x1,
            kDecalMax = 0x2,
            kDecalDefault = 0x0,
        };
    };
};

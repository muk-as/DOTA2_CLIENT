#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class DampingSpeedFunction : std::uint32_t
        {
            NoDamping = 0x0,
            Constant = 0x1,
            Spring = 0x2,
            AsymmetricSpring = 0x3,
        };
    };
};

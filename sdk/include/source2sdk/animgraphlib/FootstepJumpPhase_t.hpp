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
        // Alignment: 1
        // Size: 0x_
        enum class FootstepJumpPhase_t : std::uint8_t
        {
            Unknown = 0x0,
            NotJumping = 0x1,
            Jumping = 0x2,
            Landing = 0x4,
        };
    };
};

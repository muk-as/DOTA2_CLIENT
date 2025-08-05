#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class CFuncRotator_Rotate_t : std::uint32_t
        {
            ROTATE_LOOP = 0x0,
            ROTATE_OSCILLATE = 0x1,
            ROTATE_STOP_AT_END = 0x2,
            ROTATE_LOOK_AT_TARGET = 0x3,
            ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x4,
        };
    };
};

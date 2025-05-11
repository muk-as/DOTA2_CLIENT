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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class CFuncMover_Move_t : std::uint32_t
        {
            MOVE_LOOP = 0x0,
            MOVE_OSCILLATE = 0x1,
            MOVE_STOP_AT_END = 0x2,
        };
    };
};

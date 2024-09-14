#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class MoveLinearAuthoredPos_t : std::uint32_t
    {
        MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
        MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
        MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2,
    };
};

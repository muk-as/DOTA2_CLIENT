#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class CFuncMover__OrientationUpdate_t : std::uint32_t
    {
        ORIENTATION_FORWARD_PATH = 0x0,
        ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
        ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
        ORIENTATION_MATCH_CONTROL_POINT = 0x3,
        ORIENTATION_FIXED = 0x4,
        ORIENTATION_FACE_PLAYER = 0x5,
    };
};

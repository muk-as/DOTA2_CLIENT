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
    enum class TrackOrientationType_t : std::uint32_t
    {
        TrackOrientation_Fixed = 0x0,
        TrackOrientation_FacePath = 0x1,
        TrackOrientation_FacePathAngles = 0x2,
    };
};

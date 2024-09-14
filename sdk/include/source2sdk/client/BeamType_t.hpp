#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class BeamType_t : std::uint32_t
    {
        BEAM_INVALID = 0x0,
        BEAM_POINTS = 0x1,
        BEAM_ENTPOINT = 0x2,
        BEAM_ENTS = 0x3,
        BEAM_HOSE = 0x4,
        BEAM_SPLINE = 0x5,
        BEAM_LASER = 0x6,
    };
};

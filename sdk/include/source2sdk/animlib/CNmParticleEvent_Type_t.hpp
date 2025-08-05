#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class CNmParticleEvent_Type_t : std::uint32_t
        {
            Create = 0x0,
            Create_CFG = 0x1,
            Stop = 0x2,
        };
    };
};

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
        // Alignment: 4
        // Size: 0x_
        enum class ChoreoScriptedMoveTo_t : std::uint32_t
        {
            eWait = 0x0,
            eMoveWithGait = 0x1,
            eTeleport = 0x2,
            eWaitFacing = 0x3,
        };
    };
};

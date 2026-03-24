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
        enum class ESceneRequestState_t : std::uint32_t
        {
            INACTIVE = 0x0,
            ACTIVE = 0x1,
            FINISHED = 0x2,
            FAILED = 0x3,
        };
    };
};

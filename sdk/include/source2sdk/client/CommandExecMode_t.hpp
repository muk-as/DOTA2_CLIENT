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
        // Size: 0x4
        enum class CommandExecMode_t : std::uint32_t
        {
            EXEC_MANUAL = 0x0,
            EXEC_LEVELSTART = 0x1,
            EXEC_PERIODIC = 0x2,
            EXEC_MODES_COUNT = 0x3,
        };
    };
};

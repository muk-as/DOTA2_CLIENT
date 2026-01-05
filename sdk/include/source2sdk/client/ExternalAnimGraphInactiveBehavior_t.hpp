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
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class ExternalAnimGraphInactiveBehavior_t : std::uint8_t
        {
            eNone = 0x0,
            eUnbind = 0x1,
            eUnbindAndDelete = 0x2,
        };
    };
};

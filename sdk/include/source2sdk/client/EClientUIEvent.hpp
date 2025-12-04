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
        // Alignment: 4
        // Size: 0x_
        enum class EClientUIEvent : std::uint32_t
        {
            EClientUIEvent_Invalid = 0x0,
            EClientUIEvent_DialogFinished = 0x1,
            EClientUIEvent_FireOutput = 0x2,
        };
    };
};

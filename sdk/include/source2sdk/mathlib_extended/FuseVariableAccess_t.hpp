#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace mathlib_extended
    {
        // Enumerator count: 2
        // Alignment: 1
        // Size: 0x1
        enum class FuseVariableAccess_t : std::uint8_t
        {
            WRITABLE = 0x0,
            READ_ONLY = 0x1,
        };
    };
};

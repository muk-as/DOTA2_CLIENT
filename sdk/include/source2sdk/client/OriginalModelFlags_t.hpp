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
        enum class OriginalModelFlags_t : std::uint8_t
        {
            ORIGINAL_MODEL_FLAGS_NOT_SET = 0x0,
            ORIGINAL_MODEL_IS_ORIGINAL_MODEL = 0x1,
            ORIGINAL_MODEL_IS_NOT_ORIGINAL_MODEL = 0x2,
        };
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class RsCullMode_t : std::uint8_t
        {
            RS_CULL_NONE = 0x0,
            RS_CULL_BACK = 0x1,
            RS_CULL_FRONT = 0x2,
        };
    };
};

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
        // Enumerator count: 8
        // Alignment: 1
        // Size: 0x_
        enum class RsComparison_t : std::uint8_t
        {
            RS_CMP_NEVER = 0x0,
            RS_CMP_LESS = 0x1,
            RS_CMP_EQUAL = 0x2,
            RS_CMP_LESS_EQUAL = 0x3,
            RS_CMP_GREATER = 0x4,
            RS_CMP_NOT_EQUAL = 0x5,
            RS_CMP_GREATER_EQUAL = 0x6,
            RS_CMP_ALWAYS = 0x7,
        };
    };
};

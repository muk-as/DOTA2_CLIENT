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
        enum class BodySectionAuthority_t : std::uint32_t
        {
            eNone = 0x0,
            eLowerBody = 0x1,
            eUpperBody = 0x2,
            eFullBody = 0x3,
        };
    };
};

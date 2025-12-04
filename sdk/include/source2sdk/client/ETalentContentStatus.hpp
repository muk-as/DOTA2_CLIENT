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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class ETalentContentStatus : std::uint32_t
        {
            TALENT_CONTENT_STATUS_INVALID = 0x0,
            TALENT_CONTENT_STATUS_PENDING = 0x1,
            TALENT_CONTENT_STATUS_EVALUATED = 0x2,
            TALENT_CONTENT_STATUS_REJECTED = 0x3,
            TALENT_CONTENT_STATUS_APPROVED = 0x4,
        };
    };
};

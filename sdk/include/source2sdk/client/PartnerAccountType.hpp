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
        enum class PartnerAccountType : std::uint32_t
        {
            PARTNER_NONE = 0x0,
            PARTNER_PERFECT_WORLD = 0x1,
            PARTNER_INVALID = 0x3,
        };
    };
};

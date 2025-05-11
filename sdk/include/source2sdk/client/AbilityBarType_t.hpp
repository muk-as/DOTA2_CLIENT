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
        // Size: 0x4
        enum class AbilityBarType_t : std::uint32_t
        {
            ABILITY_BAR_TYPE_MAIN = 0x0,
            ABILITY_BAR_TYPE_SECONDARY = 0x1,
            ABILITY_BAR_TYPE_TERTIARY = 0x2,
        };
    };
};

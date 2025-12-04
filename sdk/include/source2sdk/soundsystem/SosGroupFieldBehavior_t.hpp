#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class SosGroupFieldBehavior_t : std::uint32_t
        {
            // MPropertyFriendlyName "Ignore"
            kIgnore = 0x0,
            // MPropertyFriendlyName "Branch"
            kBranch = 0x1,
            // MPropertyFriendlyName "Match"
            kMatch = 0x2,
        };
    };
};

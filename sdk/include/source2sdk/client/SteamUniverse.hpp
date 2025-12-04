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
        enum class SteamUniverse : std::uint32_t
        {
            Invalid = 0x0,
            Internal = 0x3,
            Dev = 0x4,
            Beta = 0x2,
            Public = 0x1,
        };
    };
};

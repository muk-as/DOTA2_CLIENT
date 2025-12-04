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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class EEventActionScoreMode : std::uint32_t
        {
            k_eEventActionScoreMode_Add = 0x0,
            k_eEventActionScoreMode_Min = 0x1,
        };
    };
};

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
        enum class ETrophyScoreMode : std::uint32_t
        {
            eTrophyScoreMode_Add = 0x0,
            eTrophyScoreMode_Min = 0x1,
            eTrophyScoreMode_Set = 0x2,
        };
    };
};

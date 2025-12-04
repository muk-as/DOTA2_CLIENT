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
        enum class EDOTAPlayerMMRType : std::uint32_t
        {
            k_EDOTAPlayerMMRType_Invalid = 0x0,
            k_EDOTAPlayerMMRType_GeneralHidden = 0x1,
            k_EDOTAPlayerMMRType_GeneralCompetitive = 0x3,
        };
    };
};

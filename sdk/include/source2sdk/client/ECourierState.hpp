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
        enum class ECourierState : std::uint32_t
        {
            k_eIdle = 0x0,
            k_eAtShop = 0x1,
            k_eGoToShop = 0x2,
            k_eGoToUnit = 0x3,
            k_eManual = 0x4,
        };
    };
};

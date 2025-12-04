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
        enum class EPingSource : std::uint32_t
        {
            k_ePingSource_Default = 0x0,
            k_ePingSource_Warning = 0x1,
            k_ePingSource_Wheel = 0x2,
            k_ePingSource_System = 0x3,
        };
    };
};

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
        enum class ESpecialPingValue : std::uint32_t
        {
            k_ESpecialPingValue_NoData = 0x3ffe,
            k_ESpecialPingValue_Failed = 0x3fff,
        };
    };
};

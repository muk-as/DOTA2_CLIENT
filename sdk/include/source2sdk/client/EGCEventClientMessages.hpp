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
        enum class EGCEventClientMessages : std::uint32_t
        {
            k_EMsgClientToGCGetEventPoints = 0x3a98,
            k_EMsgClientToGCGetEventPointsResponse = 0x3a99,
            k_EMsgGCToClientEventPointsUpdated = 0x3a9a,
        };
    };
};

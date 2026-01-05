#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Enumerator count: 2
        // Alignment: 1
        // Size: 0x_
        enum class RTProxyInstanceFlags_t : std::uint8_t
        {
            RTPROXY_INSTANCE_FLAG_NONE = 0x0,
            RTPROXY_INSTANCE_UNIQUE_MESH = 0x1,
        };
    };
};

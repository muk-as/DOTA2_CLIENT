#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class VertexAlbedoFormat_t : std::uint8_t
        {
            VERTEX_ALBEDO_NONE = 0x0,
            VERTEX_ALBEDO_8888 = 0x1,
            VERTEX_ALBEDO_565 = 0x2,
        };
    };
};

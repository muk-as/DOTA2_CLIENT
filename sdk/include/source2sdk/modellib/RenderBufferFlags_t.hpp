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
        // Enumerator count: 13
        // Alignment: 4
        // Size: 0x_
        enum class RenderBufferFlags_t : std::uint32_t
        {
            RENDER_BUFFER_USAGE_NONE = 0x0,
            RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
            RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
            RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
            RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
            RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
            RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
            RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
            RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
            RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
            RENDER_BUFFER_POOL_ALLOCATED = 0x800,
            RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 0x1000,
            RENDER_BUFFER_IMMOVABLE_ALLOCATION = 0x2000,
        };
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class RenderBufferFlags_t : std::uint32_t
    {
        RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
        RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
        RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
        RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
        RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
        RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
        RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
        RENDER_BUFFER_UAV_COUNTER = 0x80,
        RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
        RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
        RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
        RENDER_BUFFER_PER_FRAME_WRITE_ONCE = 0x800,
        RENDER_BUFFER_POOL_ALLOCATED = 0x1000,
    };
};

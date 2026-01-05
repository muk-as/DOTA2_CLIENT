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
        // Enumerator count: 7
        // Alignment: 1
        // Size: 0x_
        enum class ModelMeshBufferUsage_t : std::uint8_t
        {
            MESH_BUFFER_USAGE_NONE = 0x0,
            MESH_BUFFER_USAGE_VB = 0x1,
            MESH_BUFFER_USAGE_IB = 0x2,
            MESH_BUFFER_USAGE_ADJACENCY = 0x4,
            MESH_BUFFER_USAGE_MESHLET_TRIS = 0x8,
            MESH_BUFFER_USAGE_RT_PROXY = 0x10,
            MESH_BUFFER_USAGE_VERTEX_ALBEDO = 0x20,
        };
    };
};

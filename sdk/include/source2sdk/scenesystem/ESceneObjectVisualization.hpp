#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class ESceneObjectVisualization : std::uint32_t
        {
            SCENEOBJECT_VIS_NONE = 0x0,
            SCENEOBJECT_VIS_OBJECT = 0x1,
            SCENEOBJECT_VIS_MATERIAL = 0x2,
            SCENEOBJECT_VIS_TEXTURE_SIZE = 0x3,
            SCENEOBJECT_VIS_LOD = 0x4,
            SCENEOBJECT_VIS_INSTANCING = 0x5,
        };
    };
};

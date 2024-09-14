#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class RenderModelSubModelFieldType_t : std::uint32_t
    {
        // MPropertyFriendlyName "BodyGroup SubModel"
        SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
        // MPropertyFriendlyName "MeshGroup Index"
        SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
        // MPropertyFriendlyName "MeshGroup Mask"
        SUBMODEL_AS_MESHGROUP_MASK = 0x2,
        // MPropertyFriendlyName "Model Default MeshGroup Mask"
        SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3,
    };
};

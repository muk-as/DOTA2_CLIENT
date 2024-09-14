#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class PFuncVisualizationType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Visualization Sphere Wireframe"
        PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
        // MPropertyFriendlyName "Visualization Sphere Solid"
        PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
        // MPropertyFriendlyName "Visualization Box"
        PFUNC_VISUALIZATION_BOX = 0x2,
        // MPropertyFriendlyName "Visualization Ring"
        PFUNC_VISUALIZATION_RING = 0x3,
        // MPropertyFriendlyName "Visualization Plane"
        PFUNC_VISUALIZATION_PLANE = 0x4,
        // MPropertyFriendlyName "Visualization Line"
        PFUNC_VISUALIZATION_LINE = 0x5,
        // MPropertyFriendlyName "Visualization Cylinder"
        PFUNC_VISUALIZATION_CYLINDER = 0x6,
    };
};

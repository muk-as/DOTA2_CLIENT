#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class IKSolverType : std::uint32_t
    {
        // MPropertyFriendlyName "Perlin"
        IKSOLVER_Perlin = 0x0,
        // MPropertyFriendlyName "Two Bone"
        IKSOLVER_TwoBone = 0x1,
        // MPropertyFriendlyName "FABRIK"
        IKSOLVER_Fabrik = 0x2,
        // MPropertyFriendlyName "Dog Leg (3 Bone)"
        IKSOLVER_DogLeg3Bone = 0x3,
        // MPropertyFriendlyName "CCD"
        IKSOLVER_CCD = 0x4,
        // MPropertySuppressEnumerator
        IKSOLVER_COUNT = 0x5,
    };
};

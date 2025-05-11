#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class IKSolverType : std::uint32_t
        {
            // MPropertyFriendlyName "Perlin"
            // MPropertyDescription "Classic perlin 2-bone solver"
            IKSOLVER_Perlin = 0x0,
            // MPropertyFriendlyName "Two Bone"
            // MPropertyDescription "2-bone solver that does not have singularities that Perlin does, and should be used as a default starting point for 2 bone solves."
            IKSOLVER_TwoBone = 0x1,
            // MPropertyFriendlyName "FABRIK"
            // MPropertyDescription ""Forward And Backward Reaching Inverse Kinematics" solver - A solver that can handle any number of bones and works by iteratively solving for the position of each bone in the chain."
            IKSOLVER_Fabrik = 0x2,
            // MPropertyFriendlyName "Dog Leg (3-Bone)"
            // MPropertyDescription "A 3-bone solver that uses two 2-bone solves under the hood to emulate a dog leg."
            IKSOLVER_DogLeg3Bone = 0x3,
            // MPropertyFriendlyName "CCD"
            // MPropertyDescription "Cyclic Coordinate Descent solver - A solver that can handle any number of bones and works by iteratively solving for the rotation of each bone in the chain."
            IKSOLVER_CCD = 0x4,
            // MPropertySuppressEnumerator
            IKSOLVER_COUNT = 0x5,
        };
    };
};

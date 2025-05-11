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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class EIKEndEffectorRotationFixUpMode : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            // MPropertyDescription "However the end effector ends up after the solve, it's rotation will remain unchanged."
            None = 0x0,
            // MPropertyFriendlyName "Match Target Orientation"
            // MPropertyDescription "The targets orientation will be stamped onto the end effector."
            MatchTargetOrientation = 0x1,
            // MPropertyFriendlyName "Look At Target Forward"
            // MPropertyDescription "The targets forward vector will be used to build a look orientation while preserving the rotation of the end effector after the solve as much as possible."
            LookAtTargetForward = 0x2,
            // MPropertyFriendlyName "Maintain Parent Orientation"
            // MPropertyDescription "Use the parent bone's orientation as the end effector's orientation."
            MaintainParentOrientation = 0x3,
            // MPropertySuppressEnumerator
            Count = 0x4,
        };
    };
};

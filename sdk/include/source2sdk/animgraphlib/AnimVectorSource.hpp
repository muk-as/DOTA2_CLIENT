#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class AnimVectorSource : std::uint32_t
    {
        // MPropertyFriendlyName "Move Direction"
        MoveDirection = 0x0,
        // MPropertyFriendlyName "Facing Position"
        FacingPosition = 0x1,
        // MPropertyFriendlyName "Look Direction"
        LookDirection = 0x2,
        // MPropertyFriendlyName "Parameter"
        VectorParameter = 0x3,
        // MPropertyFriendlyName "Waypoint Direction"
        WayPointDirection = 0x4,
        // MPropertyFriendlyName "Acceleration"
        Acceleration = 0x5,
        // MPropertyFriendlyName "Slope Normal"
        SlopeNormal = 0x6,
        // MPropertyFriendlyName "Slope Normal World Space"
        SlopeNormal_WorldSpace = 0x7,
        // MPropertyFriendlyName "Look Target"
        LookTarget = 0x8,
        // MPropertyFriendlyName "Look Target World Space"
        LookTarget_WorldSpace = 0x9,
        // MPropertyFriendlyName "Waypoint Position"
        WayPointPosition = 0xa,
        // MPropertyFriendlyName "Goal Position"
        GoalPosition = 0xb,
        // MPropertyFriendlyName "Root Motion Velocity"
        RootMotionVelocity = 0xc,
        // MPropertyFriendlyName "Manual Target World Space"
        ManualTarget_WorldSpace = 0xd,
    };
};

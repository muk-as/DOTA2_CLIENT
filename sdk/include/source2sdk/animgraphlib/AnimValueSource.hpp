#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 37
    // Alignment: 4
    // Size: 0x4
    enum class AnimValueSource : std::uint32_t
    {
        // MPropertyFriendlyName "Move Heading"
        MoveHeading = 0x0,
        // MPropertyFriendlyName "Move Speed"
        MoveSpeed = 0x1,
        // MPropertyFriendlyName "Forward Speed"
        ForwardSpeed = 0x2,
        // MPropertyFriendlyName "Strafe Speed"
        StrafeSpeed = 0x3,
        // MPropertyFriendlyName "Facing Heading"
        FacingHeading = 0x4,
        // MPropertyFriendlyName "Look Heading"
        LookHeading = 0x5,
        // MPropertyFriendlyName "Look Heading Normalized"
        LookHeadingNormalized = 0x6,
        // MPropertyFriendlyName "Look Pitch"
        LookPitch = 0x7,
        // MPropertyFriendlyName "Look Distance"
        LookDistance = 0x8,
        // MPropertyFriendlyName "Parameter"
        Parameter = 0x9,
        // MPropertyFriendlyName "Waypoint Heading"
        WayPointHeading = 0xa,
        // MPropertyFriendlyName "Waypoint Distance"
        WayPointDistance = 0xb,
        // MPropertyFriendlyName "Boundary Radius"
        BoundaryRadius = 0xc,
        // MPropertyFriendlyName "Target Move Heading"
        TargetMoveHeading = 0xd,
        // MPropertyFriendlyName "Target Move Speed"
        TargetMoveSpeed = 0xe,
        // MPropertyFriendlyName "Acceleration Heading"
        AccelerationHeading = 0xf,
        // MPropertyFriendlyName "Acceleration Speed"
        AccelerationSpeed = 0x10,
        // MPropertyFriendlyName "Slope Heading"
        SlopeHeading = 0x11,
        // MPropertyFriendlyName "Slope Angle"
        SlopeAngle = 0x12,
        // MPropertyFriendlyName "Slope Pitch"
        SlopePitch = 0x13,
        // MPropertyFriendlyName "Slope Yaw"
        SlopeYaw = 0x14,
        // MPropertyFriendlyName "Goal Distance"
        GoalDistance = 0x15,
        // MPropertyFriendlyName "Acceleration Left-Right"
        AccelerationLeftRight = 0x16,
        // MPropertyFriendlyName "Acceleration Forward-Back"
        AccelerationFrontBack = 0x17,
        // MPropertyFriendlyName "Root Motion Speed"
        RootMotionSpeed = 0x18,
        // MPropertyFriendlyName "Root Motion Turn Speed"
        RootMotionTurnSpeed = 0x19,
        // MPropertyFriendlyName "Move Heading Relative to Look Heading"
        MoveHeadingRelativeToLookHeading = 0x1a,
        // MPropertyFriendlyName "Max Move Speed"
        MaxMoveSpeed = 0x1b,
        // MPropertyFriendlyName "Finger Curl - Thumb"
        FingerCurl_Thumb = 0x1c,
        // MPropertyFriendlyName "Finger Curl - Index"
        FingerCurl_Index = 0x1d,
        // MPropertyFriendlyName "Finger Curl - Middle"
        FingerCurl_Middle = 0x1e,
        // MPropertyFriendlyName "Finger Curl - Ring"
        FingerCurl_Ring = 0x1f,
        // MPropertyFriendlyName "Finger Curl - Pinky"
        FingerCurl_Pinky = 0x20,
        // MPropertyFriendlyName "Finger Splay - Thumb:Index"
        FingerSplay_Thumb_Index = 0x21,
        // MPropertyFriendlyName "Finger Splay - Index:Middle"
        FingerSplay_Index_Middle = 0x22,
        // MPropertyFriendlyName "Finger Splay - Middle:Ring"
        FingerSplay_Middle_Ring = 0x23,
        // MPropertyFriendlyName "Finger Splay - Ring:Pinky"
        FingerSplay_Ring_Pinky = 0x24,
    };
};

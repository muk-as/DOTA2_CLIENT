#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class AnimParamButton_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        ANIMPARAM_BUTTON_NONE = 0x0,
        // MPropertyFriendlyName "Dpad Up"
        ANIMPARAM_BUTTON_DPAD_UP = 0x1,
        // MPropertyFriendlyName "Dpad Right"
        ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
        // MPropertyFriendlyName "Dpad Down"
        ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
        // MPropertyFriendlyName "Dpad Left"
        ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
        // MPropertyFriendlyName "A"
        ANIMPARAM_BUTTON_A = 0x5,
        // MPropertyFriendlyName "B"
        ANIMPARAM_BUTTON_B = 0x6,
        // MPropertyFriendlyName "X"
        ANIMPARAM_BUTTON_X = 0x7,
        // MPropertyFriendlyName "Y"
        ANIMPARAM_BUTTON_Y = 0x8,
        // MPropertyFriendlyName "Left Shoulder"
        ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
        // MPropertyFriendlyName "Right Shoulder"
        ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
        // MPropertyFriendlyName "Left Trigger"
        ANIMPARAM_BUTTON_LTRIGGER = 0xb,
        // MPropertyFriendlyName "Right Trigger"
        ANIMPARAM_BUTTON_RTRIGGER = 0xc,
    };
};

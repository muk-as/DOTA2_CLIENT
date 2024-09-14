#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EHapticPulseType : std::uint32_t
    {
        VR_HAND_HAPTIC_PULSE_LIGHT = 0x0,
        VR_HAND_HAPTIC_PULSE_MEDIUM = 0x1,
        VR_HAND_HAPTIC_PULSE_STRONG = 0x2,
    };
};

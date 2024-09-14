#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PulseCursorCancelPriority_t : std::uint32_t
    {
        // MPropertyFriendlyName "Keep running normally."
        None = 0x0,
        // MPropertyFriendlyName "Kill after current node."
        // MPropertyDescription "Do not stop the current yielding node, but do not continue to the next node afterwards."
        CancelOnSucceeded = 0x1,
        // MPropertyFriendlyName "Kill elegantly."
        // MPropertyDescription "Request elegant wind-down of any associated work (e.g. vcd interrupt)."
        SoftCancel = 0x2,
        // MPropertyFriendlyName "Kill immediately."
        // MPropertyDescription "Stop without any wind-down."
        HardCancel = 0x3,
    };
};

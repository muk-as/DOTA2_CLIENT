#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class TraceNoHitResult_t : std::uint32_t
    {
        // MPropertyFriendlyName "Do nothing"
        // MPropertyDescription "If no surface it hit, don't update the transform at all, act as if the trace was not performed."
        NOTHING = 0x0,
        // MPropertyFriendlyName "Stop evaluation"
        // MPropertyDescription "If no surface is hit stop evaluation of the current element, no following modifiers will be evaluated and the current transform will not be modified."
        DISCARD = 0x1,
        // MPropertyFriendlyName "Move to start"
        // MPropertyDescription "If no surface is hit move the current transform to the start of the trace."
        MOVE_TO_START = 0x2,
        // MPropertyFriendlyName "Move to end"
        // MPropertyDescription "If no surface is hit move the current transform to the end of the trace."
        MOVE_TO_END = 0x3,
    };
};

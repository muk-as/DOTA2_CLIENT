#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class SelectorTagBehavior_t : std::uint32_t
    {
        // MPropertyFriendlyName "Active While Current"
        SelectorTagBehavior_OnWhileCurrent = 0x0,
        // MPropertyFriendlyName "Off When Finished"
        SelectorTagBehavior_OffWhenFinished = 0x1,
        // MPropertyFriendlyName "Off Before Finished"
        SelectorTagBehavior_OffBeforeFinished = 0x2,
    };
};

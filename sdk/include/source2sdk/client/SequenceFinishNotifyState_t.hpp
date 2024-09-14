#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class SequenceFinishNotifyState_t : std::uint8_t
    {
        eDoNotNotify = 0,
        eNotifyWhenFinished = 1,
        eNotifyTriggered = 2,
    };
};

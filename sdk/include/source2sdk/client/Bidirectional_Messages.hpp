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
    enum class Bidirectional_Messages : std::uint32_t
    {
        bi_RebroadcastGameEvent = 0x10,
        bi_RebroadcastSource = 0x11,
        bi_GameEvent = 0x12,
    };
};

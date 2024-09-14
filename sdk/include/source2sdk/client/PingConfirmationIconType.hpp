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
    enum class PingConfirmationIconType : std::uint32_t
    {
        PING_CONFIRMATION_STATE_ICON_TYPE_ATTACK = 0x0,
        PING_CONFIRMATION_STATE_ICON_TYPE_DEFEND = 0x1,
        PING_CONFIRMATION_STATE_ICON_TYPE_SMOKE = 0x2,
    };
};

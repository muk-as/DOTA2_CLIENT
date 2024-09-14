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
    enum class ECustomGameWhitelistState : std::uint32_t
    {
        CUSTOM_GAME_WHITELIST_STATE_UNKNOWN = 0x0,
        CUSTOM_GAME_WHITELIST_STATE_APPROVED = 0x1,
        CUSTOM_GAME_WHITELIST_STATE_REJECTED = 0x2,
    };
};

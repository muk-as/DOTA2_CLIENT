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
    enum class ChatIgnoreType_t : std::uint32_t
    {
        CHAT_IGNORE_NONE = 0x0,
        CHAT_IGNORE_ALL = 0x1,
        CHAT_IGNORE_TEAM = 0x2,
    };
};

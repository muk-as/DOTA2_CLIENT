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
    enum class EGuildChatType : std::uint32_t
    {
        k_EGuildChatType_Unspecified = 0x0,
        k_EGuildChatType_SteamChatGroup = 0x1,
        k_EGuildChatType_GC = 0x2,
    };
};

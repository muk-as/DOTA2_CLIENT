#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ESplitScreenMessageType : std::uint32_t
    {
        MSG_SPLITSCREEN_ADDUSER = 0x0,
        MSG_SPLITSCREEN_REMOVEUSER = 0x1,
    };
};

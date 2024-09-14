#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DIALOG_TYPE : std::uint32_t
    {
        DIALOG_MSG = 0x0,
        DIALOG_MENU = 0x1,
        DIALOG_TEXT = 0x2,
        DIALOG_ENTRY = 0x3,
        DIALOG_ASKCONNECT = 0x4,
    };
};

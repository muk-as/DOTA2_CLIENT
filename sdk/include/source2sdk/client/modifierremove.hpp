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
    enum class modifierremove : std::uint32_t
    {
        DOTA_BUFF_REMOVE_ALL = 0x0,
        DOTA_BUFF_REMOVE_ENEMY = 0x1,
        DOTA_BUFF_REMOVE_ALLY = 0x2,
    };
};

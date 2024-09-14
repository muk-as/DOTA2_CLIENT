#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class EFightingGameButtonBit : std::uint32_t
    {
        // MEnumeratorIsNotAFlag
        kNONE_BIT = 0x0,
        kBUTTON_FORWARD_BIT = 0x1,
        kBUTTON_BACK_BIT = 0x2,
        kBUTTON_DOWN_BIT = 0x4,
        kBUTTON_UP_BIT = 0x8,
        kBUTTON_ATTACK_BIT = 0x10,
        kBUTTON_SPECIAL_BIT = 0x20,
    };
};

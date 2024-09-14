#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class SPELL_IMMUNITY_TYPES : std::uint32_t
    {
        SPELL_IMMUNITY_NONE = 0x0,
        SPELL_IMMUNITY_ALLIES_YES = 0x1,
        SPELL_IMMUNITY_ALLIES_NO = 0x2,
        SPELL_IMMUNITY_ENEMIES_YES = 0x3,
        SPELL_IMMUNITY_ENEMIES_NO = 0x4,
        SPELL_IMMUNITY_ALLIES_YES_ENEMIES_NO = 0x5,
    };
};

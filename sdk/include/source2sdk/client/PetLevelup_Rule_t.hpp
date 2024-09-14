#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PetLevelup_Rule_t : std::uint32_t
    {
        PETLEVELFROM_NOTHING = 0x0,
        PETLEVELFROM_KILLEATER = 0x1,
        PETLEVELFROM_COMPENDIUM_LEVEL = 0x2,
        NUM_PETLEVELUPRULES = 0x3,
    };
};

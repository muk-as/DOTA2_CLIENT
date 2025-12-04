#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class PetLevelup_Rule_t : std::uint32_t
        {
            PETLEVELFROM_NOTHING = 0x0,
            PETLEVELFROM_KILLEATER = 0x1,
            PETLEVELFROM_COMPENDIUM_LEVEL = 0x2,
            NUM_PETLEVELUPRULES = 0x3,
        };
    };
};

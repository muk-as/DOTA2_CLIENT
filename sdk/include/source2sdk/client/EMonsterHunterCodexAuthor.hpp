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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x_
        enum class EMonsterHunterCodexAuthor : std::uint32_t
        {
            k_eInvalid = 0x0,
            k_eGoodkind = 0x1,
            k_eMossgrave = 0x2,
            k_eQuibbins = 0x3,
            k_eQuibbinsDrunk = 0x4,
            k_eKerrick = 0x5,
            k_eNoAuthor = 0x6,
        };
    };
};

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
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class EArtyTeam : std::uint8_t
        {
            k_eNoTeam = 0x0,
            k_eYou = 0x1,
            k_eThem = 0x2,
            k_eNeutral = 0x4,
            k_ePlayers = 0x3,
            k_eAllTeams = 0xff,
        };
    };
};

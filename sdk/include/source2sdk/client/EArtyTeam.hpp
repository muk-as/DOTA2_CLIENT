#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class EArtyTeam : std::uint8_t
    {
        k_eNoTeam = 0,
        k_eYou = 1,
        k_eThem = 2,
        k_eNeutral = 4,
        k_ePlayers = 3,
        k_eAllTeams = 255,
    };
};

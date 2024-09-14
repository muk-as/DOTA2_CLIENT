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
    enum class CMsgBattleReport_ELaneOutcome : std::uint32_t
    {
        k_eUnknownLaneOutcome = 0xffffffff,
        k_eWonLane = 0x0,
        k_eLostLane = 0x1,
        k_eEvenLane = 0x2,
    };
};

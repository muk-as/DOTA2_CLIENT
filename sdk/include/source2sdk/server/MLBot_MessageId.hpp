#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class MLBot_MessageId : std::uint32_t
    {
        mlbot_MatchMetadata = 0x1,
        mlbot_TickBoundary = 0x2,
        mlbot_TeamState_Radiant = 0x3,
        mlbot_TeamState_Radiant_Delta = 0x4,
        mlbot_TeamState_Dire = 0x5,
        mlbot_TeamState_Dire_Delta = 0x6,
        mlbot_PlayerCommand = 0x7,
        mlbot_PlayerOrder = 0x8,
    };
};

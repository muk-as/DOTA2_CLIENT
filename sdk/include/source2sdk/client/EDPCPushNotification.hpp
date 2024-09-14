#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class EDPCPushNotification : std::uint32_t
    {
        DPC_PUSH_NOTIFICATION_MATCH_STARTING = 0x1,
        DPC_PUSH_NOTIFICATION_PLAYER_LEFT_TEAM = 0xa,
        DPC_PUSH_NOTIFICATION_PLAYER_JOINED_TEAM = 0xb,
        DPC_PUSH_NOTIFICATION_PLAYER_JOINED_TEAM_AS_COACH = 0xc,
        DPC_PUSH_NOTIFICATION_PLAYER_LEFT_TEAM_AS_COACH = 0xd,
        DPC_PUSH_NOTIFICATION_LEAGUE_RESULT = 0x14,
        DPC_PUSH_NOTIFICATION_PREDICTION_MATCHES_AVAILABLE = 0x1e,
        DPC_PUSH_NOTIFICATION_PREDICTION_RESULT = 0x1f,
        DPC_PUSH_NOTIFICATION_FANTASY_PLAYER_CLEARED = 0x28,
        DPC_PUSH_NOTIFICATION_FANTASY_DAILY_SUMMARY = 0x29,
        DPC_PUSH_NOTIFICATION_FANTASY_FINAL_RESULTS = 0x2a,
    };
};

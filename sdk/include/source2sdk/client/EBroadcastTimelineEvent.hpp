#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class EBroadcastTimelineEvent : std::uint32_t
    {
        EBroadcastTimelineEvent_MatchStarted = 0x1,
        EBroadcastTimelineEvent_GameStateChanged = 0x2,
        EBroadcastTimelineEvent_TowerDeath = 0x3,
        EBroadcastTimelineEvent_BarracksDeath = 0x4,
        EBroadcastTimelineEvent_AncientDeath = 0x5,
        EBroadcastTimelineEvent_RoshanDeath = 0x6,
        EBroadcastTimelineEvent_HeroDeath = 0x7,
        EBroadcastTimelineEvent_TeamFight = 0x8,
        EBroadcastTimelineEvent_FirstBlood = 0x9,
    };
};

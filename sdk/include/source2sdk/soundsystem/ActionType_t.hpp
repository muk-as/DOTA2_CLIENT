#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class ActionType_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        SOS_ACTION_NONE = 0x0,
        // MPropertyFriendlyName "Limiter"
        SOS_ACTION_LIMITER = 0x1,
        // MPropertyFriendlyName "Time Limiter"
        SOS_ACTION_TIME_LIMIT = 0x2,
        // MPropertyFriendlyName "Timed Block Limiter"
        SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
        // MPropertyFriendlyName "Set Sound Event Parameter"
        SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
        // MPropertyFriendlyName "Soundevent Cluster"
        SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
        // MPropertyFriendlyName "Soundevent Priority"
        SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
        // MPropertyFriendlyName "Count Envelope"
        SOS_ACTION_COUNT_ENVELOPE = 0x7,
        // MPropertyFriendlyName "Soundevent Count"
        SOS_ACTION_SOUNDEVENT_COUNT = 0x8,
        // MPropertyFriendlyName "Soundevent Min/Max Values"
        SOS_ACTION_SOUNDEVENT_MIN_MAX_VALUES = 0x9,
    };
};

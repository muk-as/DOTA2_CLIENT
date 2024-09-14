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
    enum class DOTASpeechType_t : std::uint32_t
    {
        DOTA_SPEECH_USER_INVALID = 0x0,
        DOTA_SPEECH_USER_SINGLE = 0x1,
        DOTA_SPEECH_USER_TEAM = 0x2,
        DOTA_SPEECH_USER_TEAM_NEARBY = 0x3,
        DOTA_SPEECH_USER_NEARBY = 0x4,
        DOTA_SPEECH_USER_ALL = 0x5,
        DOTA_SPEECH_GOOD_TEAM = 0x6,
        DOTA_SPEECH_BAD_TEAM = 0x7,
        DOTA_SPEECH_SPECTATOR = 0x8,
        DOTA_SPEECH_USER_TEAM_NOSPECTATOR = 0x9,
        DOTA_SPEECH_RECIPIENT_TYPE_MAX = 0xa,
    };
};

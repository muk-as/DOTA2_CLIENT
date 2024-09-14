#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class EDotaEntityMessages : std::uint32_t
    {
        DOTA_UNIT_SPEECH = 0x0,
        DOTA_UNIT_SPEECH_MUTE = 0x1,
        DOTA_UNIT_ADD_GESTURE = 0x2,
        DOTA_UNIT_REMOVE_GESTURE = 0x3,
        DOTA_UNIT_REMOVE_ALL_GESTURES = 0x4,
        DOTA_UNIT_FADE_GESTURE = 0x6,
        DOTA_UNIT_SPEECH_CLIENTSIDE_RULES = 0x7,
    };
};

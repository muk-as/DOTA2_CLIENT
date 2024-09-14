#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class VoiceDataFormat_t : std::uint32_t
    {
        VOICEDATA_FORMAT_STEAM = 0x0,
        VOICEDATA_FORMAT_ENGINE = 0x1,
        VOICEDATA_FORMAT_OPUS = 0x2,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class EBaseGameEvents : std::uint32_t
    {
        GE_VDebugGameSessionIDEvent = 0xc8,
        GE_PlaceDecalEvent = 0xc9,
        GE_ClearWorldDecalsEvent = 0xca,
        GE_ClearEntityDecalsEvent = 0xcb,
        GE_ClearDecalsForSkeletonInstanceEvent = 0xcc,
        GE_Source1LegacyGameEventList = 0xcd,
        GE_Source1LegacyListenEvents = 0xce,
        GE_Source1LegacyGameEvent = 0xcf,
        GE_SosStartSoundEvent = 0xd0,
        GE_SosStopSoundEvent = 0xd1,
        GE_SosSetSoundEventParams = 0xd2,
        GE_SosSetLibraryStackFields = 0xd3,
        GE_SosStopSoundEventHash = 0xd4,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class PetCoopStates_t : std::uint32_t
    {
        COOP_IGNORE = 0x0,
        COOPTELEPORT_START_PERFORMING = 0x1,
        COOPTELEPORT_PLAY_ENDANIM = 0x2,
        COOPTELEPORT_PLAY_EXITANIM = 0x3,
        COOP_WARD_OBSERVER = 0x4,
        COOP_WARD_SENTRY = 0x5,
    };
};

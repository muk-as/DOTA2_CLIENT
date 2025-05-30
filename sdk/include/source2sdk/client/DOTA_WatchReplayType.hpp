#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_WatchReplayType : std::uint32_t
        {
            DOTA_WATCH_REPLAY_NORMAL = 0x0,
            DOTA_WATCH_REPLAY_HIGHLIGHTS = 0x1,
        };
    };
};

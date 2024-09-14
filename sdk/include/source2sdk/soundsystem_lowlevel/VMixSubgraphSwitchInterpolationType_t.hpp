#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class VMixSubgraphSwitchInterpolationType_t : std::uint32_t
    {
        SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
        SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
        SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
    };
};

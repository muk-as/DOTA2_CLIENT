#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class VMixChannelOperation_t : std::uint32_t
    {
        VMIX_CHAN_STEREO = 0x0,
        VMIX_CHAN_LEFT = 0x1,
        VMIX_CHAN_RIGHT = 0x2,
        VMIX_CHAN_SWAP = 0x3,
        VMIX_CHAN_MONO = 0x4,
        VMIX_CHAN_MID_SIDE = 0x5,
    };
};

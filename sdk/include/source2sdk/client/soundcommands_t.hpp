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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class soundcommands_t : std::uint32_t
        {
            SOUNDCTRL_CHANGE_VOLUME = 0x0,
            SOUNDCTRL_CHANGE_PITCH = 0x1,
            SOUNDCTRL_STOP = 0x2,
            SOUNDCTRL_DESTROY = 0x3,
            SOUNDCTRL_FADEOUT = 0x4,
        };
    };
};

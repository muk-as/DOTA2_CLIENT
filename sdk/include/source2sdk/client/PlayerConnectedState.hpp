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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x_
        enum class PlayerConnectedState : std::uint32_t
        {
            NeverConnected = 0xffffffff,
            Connected = 0x0,
            Connecting = 0x1,
            Reconnecting = 0x2,
            Disconnecting = 0x3,
            Disconnected = 0x4,
            Reserved = 0x5,
        };
    };
};

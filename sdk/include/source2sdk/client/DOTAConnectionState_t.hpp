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
        enum class DOTAConnectionState_t : std::uint32_t
        {
            DOTA_CONNECTION_STATE_UNKNOWN = 0x0,
            DOTA_CONNECTION_STATE_NOT_YET_CONNECTED = 0x1,
            DOTA_CONNECTION_STATE_CONNECTED = 0x2,
            DOTA_CONNECTION_STATE_DISCONNECTED = 0x3,
            DOTA_CONNECTION_STATE_ABANDONED = 0x4,
            DOTA_CONNECTION_STATE_LOADING = 0x5,
            DOTA_CONNECTION_STATE_FAILED = 0x6,
        };
    };
};

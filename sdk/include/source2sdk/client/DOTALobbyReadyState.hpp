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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class DOTALobbyReadyState : std::uint32_t
        {
            DOTALobbyReadyState_UNDECLARED = 0x0,
            DOTALobbyReadyState_ACCEPTED = 0x1,
            DOTALobbyReadyState_DECLINED = 0x2,
            DOTALobbyReadyState_DECLINED_REQUEUE = 0x3,
        };
    };
};

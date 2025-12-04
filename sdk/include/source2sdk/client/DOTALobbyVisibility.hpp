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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class DOTALobbyVisibility : std::uint32_t
        {
            DOTALobbyVisibility_Public = 0x0,
            DOTALobbyVisibility_Friends = 0x1,
            DOTALobbyVisibility_Unlisted = 0x2,
        };
    };
};

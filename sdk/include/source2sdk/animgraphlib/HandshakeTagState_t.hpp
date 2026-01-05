#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class HandshakeTagState_t : std::uint8_t
        {
            eInactive = 0x0,
            eActive = 0x1,
            eMomentarilyInactive = 0x2,
        };
    };
};

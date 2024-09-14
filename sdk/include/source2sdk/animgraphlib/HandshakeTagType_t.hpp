#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class HandshakeTagType_t : std::uint32_t
    {
        eInvalid = 0xffffffff,
        eTask = 0x0,
        eMovement = 0x1,
        eCount = 0x2,
    };
};

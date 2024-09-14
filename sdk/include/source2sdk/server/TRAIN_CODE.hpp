#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class TRAIN_CODE : std::uint32_t
    {
        TRAIN_SAFE = 0x0,
        TRAIN_BLOCKING = 0x1,
        TRAIN_FOLLOWING = 0x2,
    };
};

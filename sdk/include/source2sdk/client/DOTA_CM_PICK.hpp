#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_CM_PICK : std::uint32_t
    {
        DOTA_CM_RANDOM = 0x0,
        DOTA_CM_GOOD_GUYS = 0x1,
        DOTA_CM_BAD_GUYS = 0x2,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EQueryCvarValueStatus : std::uint32_t
    {
        eQueryCvarValueStatus_ValueIntact = 0x0,
        eQueryCvarValueStatus_CvarNotFound = 0x1,
        eQueryCvarValueStatus_NotACvar = 0x2,
        eQueryCvarValueStatus_CvarProtected = 0x3,
    };
};

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
    enum class EOverwatchConviction : std::uint32_t
    {
        k_EOverwatchConviction_None = 0x0,
        k_EOverwatchConviction_NotGuilty = 0x1,
        k_EOverwatchConviction_GuiltUnclear = 0x2,
        k_EOverwatchConviction_Guilty = 0x3,
    };
};

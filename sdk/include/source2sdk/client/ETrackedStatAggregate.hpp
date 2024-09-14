#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ETrackedStatAggregate : std::uint32_t
    {
        k_eTrackedStatAggregate_Invalid = 0x0,
        k_eTrackedStatAggregate_Sum = 0x1,
        k_eTrackedStatAggregate_Max = 0x2,
        k_eTrackedStatAggregate_Min = 0x3,
        k_eTrackedStatAggregate_Or = 0x4,
        k_eTrackedStatAggregate_And = 0x5,
    };
};

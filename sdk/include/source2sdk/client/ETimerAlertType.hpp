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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class ETimerAlertType : std::uint32_t
        {
            k_TimerAlertType_PowerRune = 0x1,
            k_TimerAlertType_BountyRune = 0x2,
            k_TimerAlertType_WisdomShrine = 0x3,
            k_TimerAlertType_JungleCamps = 0x4,
            k_TimerAlertType_LotusPool = 0x5,
        };
    };
};

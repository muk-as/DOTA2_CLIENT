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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class EOverwatchReportReason : std::uint32_t
        {
            k_EOverwatchReportReason_Unknown = 0x0,
            k_EOverwatchReportReason_Cheating = 0x1,
            k_EOverwatchReportReason_Feeding = 0x2,
            k_EOverwatchReportReason_Griefing = 0x3,
            k_EOverwatchReportReason_Suspicious = 0x4,
            k_EOverwatchReportReason_AbilityAbuse = 0x5,
        };
    };
};

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
        // Size: 0x4
        enum class EDestructibleParts_DestroyParameterFlags : std::uint32_t
        {
            GenerateBreakpieces = 0x1,
            EnableFlinches = 0x2,
            ForceDamageApply = 0x4,
            IgnoreKillEntityFlag = 0x8,
            IgnoreHealthCheck = 0x10,
            Default = 0x3,
        };
    };
};

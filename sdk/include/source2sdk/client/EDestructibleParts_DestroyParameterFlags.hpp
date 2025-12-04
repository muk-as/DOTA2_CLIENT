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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class EDestructibleParts_DestroyParameterFlags : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            None = 0x0,
            GenerateBreakpieces = 0x1,
            SetBodyGroupAndCollisionState = 0x2,
            EnableFlinches = 0x4,
            ForceDamageApply = 0x8,
            IgnoreKillEntityFlag = 0x10,
            IgnoreHealthCheck = 0x20,
            // MEnumeratorIsNotAFlag
            Default = 0x7,
        };
    };
};

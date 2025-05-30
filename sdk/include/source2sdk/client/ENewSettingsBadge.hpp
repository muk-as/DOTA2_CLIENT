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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class ENewSettingsBadge : std::uint32_t
        {
            eNewSettingsBadge_New = 0x0,
            eNewSettingsBadge_Updated = 0x1,
        };
    };
};

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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class EItemSuggestPreference : std::uint32_t
        {
            k_EItemSuggestPreference_None = 0x0,
            k_EItemSuggestPreference_Liked = 0x1,
            k_EItemSuggestPreference_Disliked = 0x2,
        };
    };
};

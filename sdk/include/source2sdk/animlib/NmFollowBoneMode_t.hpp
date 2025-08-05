#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class NmFollowBoneMode_t : std::uint8_t
        {
            RotationAndTranslation = 0x0,
            RotationOnly = 0x1,
            TranslationOnly = 0x2,
        };
    };
};

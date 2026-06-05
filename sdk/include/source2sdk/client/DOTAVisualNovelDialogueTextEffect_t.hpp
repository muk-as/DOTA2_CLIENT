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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x_
        enum class DOTAVisualNovelDialogueTextEffect_t : std::uint32_t
        {
            VN_DIALOGUE_EFFECT_TEXT_NONE = 0x0,
            VN_DIALOGUE_EFFECT_TEXT_INSTANT = 0x1,
            VN_DIALOGUE_EFFECT_TEXT_FAST = 0x2,
            VN_DIALOGUE_EFFECT_TEXT_BOLD = 0x4,
            VN_DIALOGUE_EFFECT_TEXT_SMALL = 0x8,
            VN_DIALOGUE_EFFECT_TEXT_NO_NAMEPLATE = 0x10,
            VN_DIALOGUE_EFFECT_TEXT_NO_TEXT = 0x20,
        };
    };
};

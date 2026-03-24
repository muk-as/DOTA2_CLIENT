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
        enum class VisualNovelDialogueLineType_t : std::uint32_t
        {
            k_eVisualNovelDialogueLineType_Invalid = 0x0,
            k_eVisualNovelDialogueLineType_Text = 0x1,
            k_eVisualNovelDialogueLineType_PopupText = 0x2,
            k_eVisualNovelDialogueLineType_Comic = 0x3,
            k_eVisualNovelDialogueLineType_ExternalComic = 0x4,
            k_eVisualNovelDialogueLineType_Video = 0x5,
            k_eVisualNovelDialogueLineType_ConditionalIf = 0x6,
            k_eVisualNovelDialogueLineType_ConditionalElse = 0x7,
        };
    };
};

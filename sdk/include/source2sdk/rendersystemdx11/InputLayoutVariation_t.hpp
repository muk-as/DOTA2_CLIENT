#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class InputLayoutVariation_t : std::uint32_t
    {
        INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
        INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
        INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
        INPUT_LAYOUT_VARIATION_MAX = 0x3,
    };
};

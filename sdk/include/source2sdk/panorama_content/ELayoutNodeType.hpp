#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: panorama_content
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::panorama_content
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class ELayoutNodeType : std::uint32_t
    {
        ROOT = 0x0,
        STYLES = 0x1,
        SCRIPT_BODY = 0x2,
        SCRIPTS = 0x3,
        SNIPPETS = 0x4,
        INCLUDE = 0x5,
        SNIPPET = 0x6,
        PANEL = 0x7,
        PANEL_ATTRIBUTE = 0x8,
        PANEL_ATTRIBUTE_VALUE = 0x9,
        REFERENCE_CONTENT = 0xa,
        REFERENCE_COMPILED = 0xb,
        REFERENCE_PASSTHROUGH = 0xc,
    };
};

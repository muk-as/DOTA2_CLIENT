#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 2
    // Size: 0x2
    enum class AnimScriptType : std::uint16_t
    {
        ANIMSCRIPT_TYPE_INVALID = 0xffff,
        ANIMSCRIPT_FUSE_GENERAL = 0x0,
        ANIMSCRIPT_FUSE_STATEMACHINE = 0x1,
    };
};

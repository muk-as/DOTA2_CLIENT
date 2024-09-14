#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class LuaModifierType : std::uint32_t
    {
        LUA_MODIFIER_MOTION_NONE = 0x0,
        LUA_MODIFIER_MOTION_HORIZONTAL = 0x1,
        LUA_MODIFIER_MOTION_VERTICAL = 0x2,
        LUA_MODIFIER_MOTION_BOTH = 0x3,
        LUA_MODIFIER_INVALID = 0x4,
    };
};

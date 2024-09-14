#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 18
    // Alignment: 8
    // Size: 0x8
    enum class InputBitMask_t : std::uint64_t
    {
        // MEnumeratorIsNotAFlag
        IN_NONE = 0x0,
        // MEnumeratorIsNotAFlag
        IN_ALL = 0xffffffffffffffff,
        IN_ATTACK = 0x1,
        IN_JUMP = 0x2,
        IN_DUCK = 0x4,
        IN_FORWARD = 0x8,
        IN_BACK = 0x10,
        IN_USE = 0x20,
        IN_TURNLEFT = 0x80,
        IN_TURNRIGHT = 0x100,
        IN_MOVELEFT = 0x200,
        IN_MOVERIGHT = 0x400,
        IN_ATTACK2 = 0x800,
        IN_RELOAD = 0x2000,
        IN_SPEED = 0x10000,
        IN_JOYAUTOSPRINT = 0x20000,
        // MEnumeratorIsNotAFlag
        IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
        IN_QUERY = 0x100000000,
    };
};

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
        // Enumerator count: 23
        // Alignment: 4
        // Size: 0x4
        enum class Flags_t : std::uint32_t
        {
            FL_ONGROUND = 0x1,
            FL_DUCKING = 0x2,
            FL_WATERJUMP = 0x4,
            FL_BOT = 0x10,
            FL_FROZEN = 0x20,
            FL_ATCONTROLS = 0x40,
            FL_CLIENT = 0x80,
            FL_FAKECLIENT = 0x100,
            FL_FLY = 0x400,
            FL_SUPPRESS_SAVE = 0x800,
            FL_IN_VEHICLE = 0x1000,
            FL_IN_VEHICLE_TRANSPORT = 0x2000,
            FL_GODMODE = 0x4000,
            FL_NOTARGET = 0x8000,
            FL_AIMTARGET = 0x10000,
            FL_STATICPROP = 0x40000,
            FL_GRENADE = 0x100000,
            FL_DONTTOUCH = 0x400000,
            FL_OBJECT = 0x2000000,
            FL_ONFIRE = 0x8000000,
            FL_DISSOLVING = 0x10000000,
            FL_TRANSRAGDOLL = 0x20000000,
            FL_UNBLOCKABLE_BY_PLAYER = 0x40000000,
        };
    };
};

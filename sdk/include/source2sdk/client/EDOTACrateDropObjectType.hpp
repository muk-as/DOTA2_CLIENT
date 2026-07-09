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
        enum class EDOTACrateDropObjectType : std::uint32_t
        {
            k_eCrateDropType_Invalid = 0x0,
            k_eCrateDropType_Object = 0x1,
            k_eCrateDropType_Droppable = 0x3,
            k_eCrateDropType_Trigger = 0x5,
            k_eCrateDropType_Hazard = 0xb,
            k_eCrateDropType_Platform = 0x11,
            k_eCrateDropType_TrackLight = 0x21,
            k_eCrateDropType_Powerup = 0x43,
        };
    };
};

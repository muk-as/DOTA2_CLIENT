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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class DOTAUnitMoveCapability_t : std::uint32_t
        {
            DOTA_UNIT_CAP_MOVE_NONE = 0x0,
            DOTA_UNIT_CAP_MOVE_GROUND = 0x1,
            DOTA_UNIT_CAP_MOVE_FLY = 0x2,
        };
    };
};

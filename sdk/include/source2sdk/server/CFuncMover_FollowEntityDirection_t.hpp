#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class CFuncMover_FollowEntityDirection_t : std::uint32_t
        {
            FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
            FOLLOW_ENTITY_FORWARD = 0x1,
            FOLLOW_ENTITY_REVERSE = 0x2,
        };
    };
};

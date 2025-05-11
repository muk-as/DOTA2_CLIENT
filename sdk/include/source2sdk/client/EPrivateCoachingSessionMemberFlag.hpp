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
        // Size: 0x4
        enum class EPrivateCoachingSessionMemberFlag : std::uint32_t
        {
            k_EPrivateCoachingSessionMemberFlag_Requester = 0x1,
            k_EPrivateCoachingSessionMemberFlag_Coach = 0x2,
            k_EPrivateCoachingSessionMemberFlag_LeftSession = 0x4,
        };
    };
};

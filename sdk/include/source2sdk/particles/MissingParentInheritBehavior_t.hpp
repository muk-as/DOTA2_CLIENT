#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class MissingParentInheritBehavior_t : std::uint32_t
    {
        // MPropertyFriendlyName "Do Nothing"
        MISSING_PARENT_DO_NOTHING = 0xffffffff,
        // MPropertyFriendlyName "Kill Particle"
        MISSING_PARENT_KILL = 0x0,
        // MPropertyFriendlyName "Use Next Parent Particle"
        MISSING_PARENT_FIND_NEW = 0x1,
        // MPropertyFriendlyName "Use New Particle at Same Index if Possible"
        MISSING_PARENT_SAME_INDEX = 0x2,
    };
};

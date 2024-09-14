#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ScriptedOnDeath_t : std::uint32_t
    {
        SS_ONDEATH_NOT_APPLICABLE = 0xffffffff,
        SS_ONDEATH_UNDEFINED = 0x0,
        SS_ONDEATH_RAGDOLL = 0x1,
        SS_ONDEATH_ANIMATED_DEATH = 0x2,
    };
};

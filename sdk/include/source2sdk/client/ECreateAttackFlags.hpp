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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class ECreateAttackFlags : std::uint32_t
        {
            k_CreateAttackFlags_None = 0x0,
            k_CreateAttackFlags_ProcessProcs = 0x1,
            k_CreateAttackFlags_FakeAttack = 0x2,
            k_CreateAttackFlags_NeverMiss = 0x4,
            k_CreateAttackFlags_TriggeredAttack = 0x8,
        };
    };
};

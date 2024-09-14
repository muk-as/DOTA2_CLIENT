#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ModifyDamageReturn_t : std::uint32_t
    {
        CONTINUE_TO_APPLY_DAMAGE = 0x0,
        ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
    };
};

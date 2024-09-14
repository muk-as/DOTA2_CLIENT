#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EMatch3LevelFlags : std::uint32_t
    {
        // MEnumeratorIsNotAFlag
        k_eMatch3LevelFlag_None = 0x0,
        k_eMatch3LevelFlag_Boss = 0x1,
        k_eMatch3LevelFlag_Friendly = 0x2,
    };
};

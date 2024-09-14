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
    enum class EChatSpecialPrivileges : std::uint32_t
    {
        k_EChatSpecialPrivileges_None = 0x0,
        k_EChatSpecialPrivileges_Moderator = 0x1,
        k_EChatSpecialPrivileges_SuperModerator = 0x2,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class EArtyOrderFlag : std::uint32_t
    {
        k_EArtyOrderFlag_None = 0x0,
        k_EArtyOrderFlag_MoveLeft = 0x1,
        k_EArtyOrderFlag_MoveRight = 0x2,
        k_EArtyOrderFlag_AimUp = 0x4,
        k_EArtyOrderFlag_AimDown = 0x8,
        k_EArtyOrderFlag_NextWeapon = 0x10,
        k_EArtyOrderFlag_PrevWeapon = 0x20,
        k_EArtyOrderFlag_FireStart = 0x40,
        k_EArtyOrderFlag_FireStop = 0x80,
        k_EArtyOrderFlag_Turbo = 0x100,
        k_EArtyOrderFlag_PowerUp = 0x200,
        k_EArtyOrderFlag_PowerDown = 0x400,
        k_EArtyOrderFlag_MoveUp = 0x800,
        k_EArtyOrderFlag_MoveDown = 0x1000,
    };
};

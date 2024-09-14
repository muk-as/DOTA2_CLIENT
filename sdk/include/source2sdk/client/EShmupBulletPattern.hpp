#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class EShmupBulletPattern : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eShmupBulletPattern_Invalid = 0xffffffff,
        k_eShmupBulletPattern_Radial = 0x0,
        k_eShmupBulletPattern_HorizontalLeft = 0x1,
        k_eShmupBulletPattern_HorizontalRight = 0x2,
        k_eShmupBulletPattern_VerticalInwards = 0x3,
        k_eShmupBulletPattern_VerticalOutwards = 0x4,
        k_eShmupBulletPattern_FixedDirection = 0x5,
        k_eShmupBulletPattern_Player = 0x6,
        k_eShmupBulletPattern_PlayerSpreadRandom = 0x7,
        k_eShmupBulletPattern_PlayerSpreadEven = 0x8,
    };
};

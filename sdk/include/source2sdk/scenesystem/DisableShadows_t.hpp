#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class DisableShadows_t : std::uint8_t
    {
        kDisableShadows_None = 0,
        kDisableShadows_All = 1,
        kDisableShadows_Baked = 2,
        kDisableShadows_Realtime = 3,
    };
};

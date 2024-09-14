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
    enum class SteamUGCMatchingUGCType : std::uint32_t
    {
        Items = 0x0,
        Items_Mtx = 0x1,
        Items_ReadyToUse = 0x2,
        Collections = 0x3,
        Artwork = 0x4,
        Videos = 0x5,
        Screenshots = 0x6,
        AllGuides = 0x7,
        WebGuides = 0x8,
        IntegratedGuides = 0x9,
        UsableInGame = 0xa,
        ControllerBindings = 0xb,
        GameManagedItems = 0xc,
        All = 0xffffffff,
    };
};
